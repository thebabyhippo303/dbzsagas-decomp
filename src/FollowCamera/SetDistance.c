/* FollowCamera__SetDistance @ 0x800CA1AC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_80321A50 __attribute__((section(".data")));
extern f32 lbl_80321A54 __attribute__((section(".data")));

void FollowCamera__SetDistance(void *arg0, f32 farg0, f32 farg1) {
    f32 a;
    f32 b;
    f32 old;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x144) != 0) {
        return;
    }
    a = farg0 + lbl_80321A50;
    b = farg0 + lbl_80321A54;
    old = M2C_FIELD(arg0, f32 *, 0x12C);
    M2C_FIELD(arg0, f32 *, 0x138) = farg1;
    M2C_FIELD(arg0, f32 *, 0x13C) = old;
    M2C_FIELD(arg0, s32 *, 0x144) = 1;
    M2C_FIELD(arg0, f32 *, 0x128) = a;
    M2C_FIELD(arg0, f32 *, 0x12C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x130) = b;
}
