/* Bink__Convert32RowGrayX2 @ 0x802F1F44 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8; typedef int s32; typedef unsigned int u32;
typedef struct { u32 *dst; u32 _p4; u8 *src; } GrayX2State;
extern GrayX2State lbl_80389240 __attribute__((section(".data")));
extern u32 lbl_80388E40[] __attribute__((section(".data")));
void Bink__Convert32RowGrayX2(s32 unused, s32 count) {
    u8 *src;
    u32 pixel;
    count -= 1;
    if (count == -1) {
        return;
    }
    do {
        count--;
        pixel = lbl_80388E40[lbl_80389240.src[0]];
        src = lbl_80389240.src + 1;
        lbl_80389240.src = src;
        lbl_80389240.dst[0] = pixel;
        lbl_80389240.dst[1] = pixel;
        lbl_80389240.dst += 2;
    } while (count != -1);
}