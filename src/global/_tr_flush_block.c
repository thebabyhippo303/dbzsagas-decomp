/* _tr_flush_block @ 0x8025B648 (size: 0x250, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef signed short s16; typedef unsigned short u16; typedef signed int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
#define Z_UNKNOWN 2
#define STATIC_TREES 1
#define DYN_TREES 2
#define Buf_size 16
typedef struct {
    char pad0[8];
    u8 *pending_buf;
    char pad1[8];
    s32 pending;
    char pad2[4];
    u8 data_type;
    char pad3[0x7C - 0x1D];
    s32 level;
    char pad4[0x8C - 0x80];
    char dyn_ltree[0x980 - 0x8C];
    char dyn_dtree[0xA74 - 0x980];
    char bl_tree[0xB10 - 0xA74];
    void *l_dyn;
    s32 l_max;
    void *l_stat;
    void *d_dyn;
    s32 d_max;
    void *d_stat;
    void *bl_dyn;
    s32 bl_max;
    void *bl_stat;
    char mid[0x16A0 - 0xB34];
    u32 opt_len;
    u32 static_len;
    s32 pad5;
    s32 last_eob_len;
    u16 bi_buf;
    s16 pad6;
    s32 bi_valid;
} DeflateState;
typedef struct {
    void *dyn_tree;
    s32 max_code;
    void *stat_desc;
} tree_desc;
extern char lbl_80348F30[] __attribute__((section(".data")));
extern char lbl_803493B0[] __attribute__((section(".data")));
void set_data_type(DeflateState *s);
void build_tree(DeflateState *s, tree_desc *desc);
s32 build_bl_tree(DeflateState *s);
void _tr_stored_block(DeflateState *s, char *buf, u32 stored_len, s32 last);
void compress_block(DeflateState *s, void *ltree, void *dtree);
void send_all_trees(DeflateState *s, s32 lcodes, s32 dcodes, s32 subtrees);
void init_block(DeflateState *s);
void bi_windup(DeflateState *s);
#define put_byte(s, c) { (s)->pending_buf[(s)->pending++] = (c); }
#define put_short(s, w) { put_byte(s, (u8)((w) & 0xff)); put_byte(s, (u8)((u16)(w) >> 8)); }
#define send_bits(s, value, length) { int len = (length); if ((s)->bi_valid > (int)Buf_size - len) { (s)->bi_buf |= (value) << (s)->bi_valid; put_short(s, (s)->bi_buf); (s)->bi_buf = (u16)(value) >> (Buf_size - (s)->bi_valid); (s)->bi_valid += len - Buf_size; } else { (s)->bi_buf |= (value) << (s)->bi_valid; (s)->bi_valid += len; } }
void _tr_flush_block(DeflateState *s, char *buf, u32 stored_len, s32 last) {
    u32 opt_lenb;
    u32 static_lenb;
    s32 max_blindex = 0;
    if (s->level > 0) {
        if (s->data_type == Z_UNKNOWN) {
            set_data_type(s);
        }
        build_tree(s, (tree_desc *)((char *)s + 0xB10));
        build_tree(s, (tree_desc *)((char *)s + 0xB1C));
        max_blindex = build_bl_tree(s);
        opt_lenb = (s->opt_len + 3 + 7) >> 3;
        static_lenb = (s->static_len + 3 + 7) >> 3;
        if (static_lenb <= opt_lenb) {
            opt_lenb = static_lenb;
        }
    } else {
        opt_lenb = static_lenb = stored_len + 5;
    }
    if (stored_len + 4 <= opt_lenb && buf != NULL) {
        _tr_stored_block(s, buf, stored_len, last);
    } else if (static_lenb == opt_lenb) {
        send_bits(s, (STATIC_TREES << 1) + last, 3);
        compress_block(s, lbl_80348F30, lbl_803493B0);
    } else {
        send_bits(s, (DYN_TREES << 1) + last, 3);
        send_all_trees(s, s->l_max + 1, s->d_max + 1, max_blindex + 1);
        compress_block(s, s->dyn_ltree, s->dyn_dtree);
    }
    init_block(s);
    if (last != 0) {
        bi_windup(s);
    }
}
