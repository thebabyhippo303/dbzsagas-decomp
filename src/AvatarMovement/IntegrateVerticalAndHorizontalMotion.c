/* AvatarMovement__IntegrateVerticalAndHorizontalMotion @ 0x800A83C0 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AvatarMovement__BlendHorizontalVelocityAndDisplacement(void *, f32, f32, f32 *, f32 *);
void AvatarMovement__IntegrateVerticalMotion(void *, f32, f32 *, f32 *, f32 *);
void AvatarMovement__IntegrateVerticalAndHorizontalMotion(void **arg0, f32 *arg1, f32 farg0, f32 farg1) {
    f32 sp10;
    f32 spC;
    f32 sp8;

    spC = M2C_FIELD(*arg0, f32 *, 0x6C);
    sp8 = M2C_FIELD(arg1, f32 *, 4);
    AvatarMovement__IntegrateVerticalMotion(arg0, farg0, &sp8, &spC, &sp10);
    M2C_FIELD(arg1, f32 *, 4) = sp8;
    M2C_FIELD(*arg0, f32 *, 0x6C) = spC;
    AvatarMovement__BlendHorizontalVelocityAndDisplacement(arg0, farg0, farg1, arg1, *arg0 + 0x68);
}
