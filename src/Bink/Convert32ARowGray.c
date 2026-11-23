/* Bink__Convert32ARowGray @ 0x802F38F4 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr,type,offset) (*(type)((char *)(expr)+(offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type,expr) ({ typedef char mt_same_width[(sizeof(type)==sizeof(expr))?1:-1]; union { __typeof__(expr) from; type to; } mt_bits={(expr)}; mt_bits.to; })
typedef struct { u32 *dst; u32 pad4; u8 *src; u32 pad12[3]; u8 *alpha; } GrayState;
extern GrayState lbl_80389240 __attribute__((section(".data")));
extern u32 lbl_80388E40[] __attribute__((section(".data")));
void Bink__Convert32ARowGray(s32 unused, s32 count) {
    u8 *src;
    u8 *alpha;
    u32 *dst;
    u32 pixel;
    count -= 1;
    if (count == -1) return;
    do {
        count--;
        src = lbl_80389240.src;
        alpha = lbl_80389240.alpha;
        pixel = lbl_80388E40[src[0]];
        src++;
        dst = lbl_80389240.dst;
        pixel |= ((u32)alpha[0]) << 24;
        alpha++;
        *dst = pixel;
        lbl_80389240.alpha = alpha;
        lbl_80389240.src = src;
        lbl_80389240.dst++;
    } while (count != -1);
}