/* Rand__FloatClosed @ 0x8025475C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int Rand__Next(void *);
extern f32 lbl_80347F38 __attribute__((section(".data")));

static const char pool_pad[0x7F30] = {1};

f32 Rand__FloatClosed(void *arg0) {
    return (f32) (f64) Rand__Next(arg0) * lbl_80347F38;
}
