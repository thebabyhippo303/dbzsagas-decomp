/* _tr_stored_block @ 0x8025B304 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef signed short s16; typedef unsigned short u16; typedef signed int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
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
#define put_byte(s, c) { (s)->pending_buf[(s)->pending++] = (c); }
#define put_short(s, w) { put_byte(s, (u8)((w) & 0xff)); put_byte(s, (u8)((u16)(w) >> 8)); }
void copy_block(DeflateState *s, char *buf, u32 len, s32 header);
void _tr_stored_block(DeflateState *s, char *buf, u32 stored_len, s32 last) {
    if (s->bi_valid > 16 - 3) {
        s->bi_buf |= (last << s->bi_valid);
        put_short(s, s->bi_buf);
        s->bi_buf = (u16)last >> (16 - s->bi_valid);
        s->bi_valid += 3 - 16;
    } else {
        s->bi_buf |= (last << s->bi_valid);
        s->bi_valid += 3;
    }
    copy_block(s, buf, stored_len, 1);
}
