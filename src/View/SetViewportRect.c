/* View__SetViewportRect @ 0x80246680 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 Gfx__GetScreenAspectRatio(void);
extern M2C_UNK lbl_80374294 __attribute__((section(".data")));

void View__SetViewportRect(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 temp_f1;

    M2C_FIELD(arg0, f32 *, 0x74) = farg2;
    M2C_FIELD(arg0, f32 *, 0x6C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x70) = farg1;
    M2C_FIELD(arg0, f32 *, 0x78) = farg3;
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) ((f32) (f64) M2C_FIELD(&lbl_80374294, s32 *, 0) * farg2);
    M2C_FIELD(arg0, s32 *, 0x84) = (s32) ((f32) (f64) M2C_FIELD(&lbl_80374294, s32 *, 4) * farg3);
    temp_f1 = Gfx__GetScreenAspectRatio();
    M2C_FIELD(arg0, volatile s32 *, 0x88) = 1;
    M2C_FIELD(arg0, volatile s32 *, 0x68) = 1;
    M2C_FIELD(arg0, volatile s32 *, 0x7C) = 1;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_f1 * (farg2 / farg3));
}
