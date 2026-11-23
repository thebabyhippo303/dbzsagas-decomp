/* build_tree @ 0x8025A664 (size: 0x284, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
#define HEAP_SIZE 573

typedef struct { u16 freq; u16 dad_len; } ct_data;
typedef struct { ct_data *static_tree; s32 *extra; s32 base; s32 elems; s32 max_length; } sdesc;
typedef struct { ct_data *dyn_tree; s32 max_code; sdesc *stat_desc; } tree_desc;
typedef struct {
    char pad0[0xB34];
    u16 bl_count[16];
    s32 heap[573];
    s32 heap_len;
    s32 heap_max;
    u8 depth[573];
    char pad1[0x16A0 - 0x1450 - 573];
    u32 opt_len;
    u32 static_len;
} BState;

void pqdownheap(void *, void *, s32);
void gen_bitlen(void *, void *);
void gen_codes(void *, s32, void *);

/* build_tree: stock zlib Huffman build. 98.1% (id 4820297d, 8 mismatches).
 * Open: fill node-read needs hoisted heap addr (add r11,r6,r9 before
 * ternary + lwz/mr via r11) but ANY fill-live hp formulation recolors
 * max_code r23->r24 globally (proven 4x: new var, tm-reuse x2, best+hp).
 * Fill must stay chained-indexed; main fixes that worked: tn/tm via
 * (n*4+(s32)tree) for idx-first add order, dad m-then-n, if-form depth
 * (bge). Next: brute_force on 98.1% id, or find hp formulation that holds
 * r23 (try hp live-range AFTER max_code dies? max_code live to gen_codes;
 * try u16-range hp? try hp as s32 index not pointer?). */

void build_tree(BState *s, tree_desc *desc) {
    ct_data *tree = desc->dyn_tree;
    ct_data *stree = desc->stat_desc->static_tree;
    s32 elems = desc->stat_desc->elems;
    s32 n;
    s32 m;
    s32 max_code = -1;
    s32 node;
    ct_data *tn;
    ct_data *tm;
    u8 dn;
    u8 dm;
    u8 mx;

    s->heap_len = 0;
    s->heap_max = HEAP_SIZE;
    for (n = 0; n < elems; n++) {
        if (tree[n].freq != 0) {
            s->heap[++s->heap_len] = max_code = n;
            s->depth[n] = 0;
        } else {
            tree[n].dad_len = 0;
        }
    }
    while (s->heap_len <= 1) {
        s->heap[++s->heap_len] = (max_code < 2 ? ++max_code : 0);
        node = s->heap[s->heap_len];
        tree[node].freq = 1;
        s->depth[node] = 0;
        s->opt_len--;
        if (stree != NULL) {
            s->static_len -= stree[node].dad_len;
        }
    }
    desc->max_code = max_code;
    for (n = s->heap_len / 2; n >= 1; n--) {
        pqdownheap(s, tree, n);
    }
    node = elems;
    do {
        n = s->heap[1];
        s->heap[1] = s->heap[s->heap_len--];
        pqdownheap(s, tree, 1);
        m = s->heap[1];
        tn = (ct_data *)(n * 4 + (s32)tree);
        s->heap[--s->heap_max] = n;
        tm = (ct_data *)(m * 4 + (s32)tree);
        s->heap[--s->heap_max] = m;
        tree[node].freq = tree[n].freq + tree[m].freq;
        dn = s->depth[n];
        dm = s->depth[m];
        mx = dn;
        if (dn < dm) {
            mx = dm;
        }
        s->depth[node] = mx + 1;
        tm->dad_len = (u16)node;
        tn->dad_len = (u16)node;
        s->heap[1] = node++;
        pqdownheap(s, tree, 1);
    } while (s->heap_len > 1);
    s->heap[--s->heap_max] = s->heap[1];
    gen_bitlen(s, desc);
    gen_codes(tree, max_code, s->bl_count);
}
