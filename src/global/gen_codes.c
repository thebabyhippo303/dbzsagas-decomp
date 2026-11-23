/* gen_codes @ 0x8025A5C0 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

typedef struct { u16 Code; u16 Len; } ct_data;
u32 bi_reverse(u32 code, s32 len);

void gen_codes(ct_data *tree, s32 max_code, u16 *bl_count) {
    u16 next_code[16];
    u16 code = 0;
    s32 bits;
    s32 n;
    for (bits = 1; bits <= 15; bits++) {
        next_code[bits] = code = (code + bl_count[bits - 1]) << 1;
    }
    for (n = 0; n <= max_code; n++) {
        u16 len = tree[n].Len;
        if (len != 0) {
            tree[n].Code = bi_reverse(next_code[len]++, len);
        }
    }
}
