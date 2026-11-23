/* Bink__ConvertRectRowPair @ 0x802F0010 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    s32 _f0;
    s32 f4;
    s32 f8;
    s32 f12;
    s32 f16;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f32;
} BState;

typedef void (*DCFn)(void *);
extern s32 lbl_80389240 __attribute__((section(".data")));
extern DCFn lbl_803DC110 __attribute__((section(".data")));

void Bink__ConvertRectRowPair(void *arg0) {
    BState *s;
    s32 f0;
    s32 f4;
    s32 f8;
    s32 f12;
    s32 f16;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f32;
    s32 d;
    s32 rf4;

    s = (BState *)&lbl_80389240;
    f4 = s->f4;
    f0 = lbl_80389240;
    f8 = s->f8;
    f12 = s->f12;
    f24 = s->f24;
    f28 = s->f28;
    f16 = s->f16;
    f20 = s->f20;
    lbl_803DC110(arg0);
    f32 = s->f32;
    s->f8 = f8;
    s->f12 = f12;
    s->f24 = f24;
    s->f28 = f28;
    s->f16 = f16;
    s->f20 = f20;
    rf4 = s->f4;
    lbl_80389240 = f0 + f32;
    d = rf4 - f4;
    s->f4 = f4 + f32;
    lbl_803DC110(arg0);
    lbl_80389240 = f0 + d;
    s->f4 = f4 + d;
}
