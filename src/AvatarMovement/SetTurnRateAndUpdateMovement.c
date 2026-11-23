/* AvatarMovement__SetTurnRateAndUpdateMovement @ 0x800A1CAC (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AvatarMovement__UpdateMovementState(void *);
extern f32 lbl_80320124 __attribute__((section(".data")));

void AvatarMovement__SetTurnRateAndUpdateMovement(void *arg0) {
    s32 three = 3;
    f32 f = lbl_80320124;
    void *inner = M2C_FIELD(arg0, void **, 0x7C);
    s32 v;
    M2C_FIELD(inner, s32 *, 0x554) = three;
    M2C_FIELD(inner, f32 *, 0x560) = f;
    v = M2C_FIELD(arg0, s32 *, 0xC8);
    if (v != 0) {
        inner = M2C_FIELD(arg0, void **, 0x7C);
        v = 7;
    } else {
        inner = M2C_FIELD(arg0, void **, 0x7C);
        M2C_FIELD(inner, f32 *, 0x568) = f;
    }
    M2C_FIELD(inner, s32 *, 0x564) = v;
    AvatarMovement__UpdateMovementState(M2C_FIELD(arg0, void **, 0x7C));
}
