/* AnimScript__MakeStackAbsolute @ 0x80234C50 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: AnimScript__MakeStackAbsolute @ 0x80234C50 (0x34). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AnimScript__MakeStackAbsolute(s32 arg0, void *arg1) {
    s32 i = M2C_FIELD(arg1, s8 *, 9);
    s32 *base = M2C_FIELD(arg1, s32 **, 56);
    s32 off;

    if (i < 0) {
        return;
    }
    off = i * 4;
    do {
        i--;
        M2C_FIELD((char *)off + (s32)base, s32 *, 0) = arg0 + M2C_FIELD((char *)off + (s32)base, s32 *, 0);
        off -= 4;
    } while (i >= 0);
}
