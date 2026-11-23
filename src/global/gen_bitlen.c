/* gen_bitlen @ 0x8025A374 (size: 0x24C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

#define HEAP_SIZE 573
#define MAX_BITS 15

typedef struct { u16 freq; u16 dad_len; } ct_data;
typedef struct { ct_data *static_tree; s32 *extra; s32 base; s32 pad; s32 max_length; } static_desc;
typedef struct { ct_data *dyn_tree; s32 max_code; static_desc *stat_desc; } tree_desc;
typedef struct {
    char pad0[0xB34];
    u16 bl_count[16];
    s32 heap[574];
    s32 heap_max;
    char pad1[0x16A0 - 0x1450];
    u32 opt_len;
    u32 static_len;
} GState;

void gen_bitlen(GState *s, tree_desc *desc) {
    ct_data *tree = desc->dyn_tree;
    s32 max_code = desc->max_code;
    ct_data *stree = desc->stat_desc->static_tree;
    s32 *extra = desc->stat_desc->extra;
    s32 base = desc->stat_desc->base;
    s32 max_length = desc->stat_desc->max_length;
    s32 h, n, m, bits, xbits;
    s32 overflow = 0;
    u16 f;

    for (bits = MAX_BITS; bits >= 0; bits--) {
        s->bl_count[bits] = 0;
    }
    tree[s->heap[s->heap_max]].dad_len = 0;
    for (h = s->heap_max + 1; h < HEAP_SIZE; h++) {
        n = s->heap[h];
        bits = tree[tree[n].dad_len].dad_len + 1;
        if (bits > max_length) {
            bits = max_length;
            overflow++;
        }
        tree[n].dad_len = bits;
        if (n > max_code) {
            continue;
        }
        s->bl_count[bits]++;
        xbits = 0;
        if (n >= base) {
            xbits = extra[n - base];
        }
        f = tree[n].freq;
        s->opt_len += f * (bits + xbits);
        if (stree != NULL) {
            s->static_len += f * (stree[n].dad_len + xbits);
        }
    }
    if (overflow == 0) {
        return;
    }
    do {
        bits = max_length - 1;
        while (s->bl_count[bits] == 0) {
            bits--;
        }
        s->bl_count[bits]--;
        s->bl_count[bits + 1] += 2;
        s->bl_count[max_length]--;
        overflow -= 2;
    } while (overflow > 0);
    for (bits = max_length; bits != 0; bits--) {
        n = s->bl_count[bits];
        while (n != 0) {
            m = s->heap[--h];
            if (m > max_code) {
                continue;
            }
            if (tree[m].dad_len != bits) {
                s->opt_len += (bits - tree[m].dad_len) * tree[m].freq;
                tree[m].dad_len = bits;
            }
            n--;
        }
    }
}
