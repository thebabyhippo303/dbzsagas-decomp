/* Avatar__GetStatRatioPercent @ 0x8009998C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


static const char pool_pad[0xFB00] = {1};
extern f32 lbl_8031FAF8 __attribute__((section(".data")));
extern f32 lbl_8031FB08 __attribute__((section(".data")));

s32 Avatar__GetStatRatioPercent(char *self) {
    s32 cur = *(s32 *)(self + 0x1B04);
    f32 ratio = lbl_8031FAF8;
    s32 total = *(s32 *)(self + 0x1AE4) + cur;
    if (total != 0) { ratio = (f32)cur / (f32)total; }
    ratio = ratio * lbl_8031FB08;
    return (s32)ratio;
}
