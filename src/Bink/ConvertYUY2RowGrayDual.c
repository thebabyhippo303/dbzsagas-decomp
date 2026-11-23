/* Bink__ConvertYUY2RowGrayDual @ 0x802F6400 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef struct { u32 *dst; s32 unk4; u8 *src; char pad[0x20 - 0x0C]; s32 stride; } BinkRowState;
extern BinkRowState lbl_80389240 __attribute__((section(".data")));
void Bink__ConvertYUY2RowGrayDual(void *arg0, s32 arg1) {
    s32 n = arg1 - 2;
    u8 *src;
    u8 *next;
    u32 *dst;
    u32 u;
    u32 y;
    if (n < 0) return;
    do {
        src = lbl_80389240.src;
        n -= 2;
        dst = lbl_80389240.dst;
        u = src[1];
        next = src + 2;
        y = src[0];
        u <<= 16;
        lbl_80389240.src = next;
        u |= 0x80008000u;
        dst[0] = y | u;
        *(u32 *)((u8 *)lbl_80389240.dst + lbl_80389240.stride) = y | u;
        lbl_80389240.dst++;
    } while (n >= 0);
}
