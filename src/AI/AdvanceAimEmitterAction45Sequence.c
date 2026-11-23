/* AI__AdvanceAimEmitterAction45Sequence @ 0x8006B84C (size: 0x1C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void AI__SetState(void *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void Avatar__ClearPurpleSpiralEffects(void *);
void AI__ComputeTargetingInfo(void *, void *);
void AI__UpdateAimEmitter(void *, void *);
void AI__UpdateAimingIndicator(void *, void *, s32);
extern f32 lbl_8031ECB4 __attribute__((section(".data")));
extern f32 lbl_8031ECB8 __attribute__((section(".data")));
extern f32 lbl_8031ECBC __attribute__((section(".data")));
extern f32 lbl_8031ECC0 __attribute__((section(".data")));
extern f32 lbl_8031ECC4 __attribute__((section(".data")));
extern f32 lbl_8031ECC8 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));
typedef struct { f32 x, y, z; } Vec3;

void AI__AdvanceAimEmitterAction45Sequence(void *arg0) {
    char scratch[48];
    f32 var_f31;
    f32 t8;
    s32 temp_r0;

    AI__ComputeTargetingInfo(scratch, arg0);
    var_f31 = M2C_FIELD(scratch, f32 *, 0x18) * lbl_8031ECB4;
    if (!(var_f31 <= lbl_8031ECB8)) {
        var_f31 = lbl_8031ECB8;
    } else if (!(var_f31 >= lbl_8031ECBC)) {
        var_f31 = lbl_8031ECBC;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {
    case 0:
        *(Vec3 *)(scratch + 32) = *(Vec3 *)(M2C_FIELD(arg0, char **, 0x390) + 0x38);
        AI__UpdateAimingIndicator(arg0, (Vec3 *)(scratch + 32), 1);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        M2C_FIELD(arg0, f32 *, 0xDC) = lbl_803A35C0;
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x560) = 1;
        return;
    case 1:
        t8 = lbl_8031ECC0;
        M2C_FIELD(arg0, s32 *, 0x380) = 0xF;
        if (AI__HasPrimaryTimerElapsed(arg0, t8) != 0) {
            AI__SetState(arg0, 2);
        }
        return;
    case 2:
        *(Vec3 *)(scratch + 32) = *(Vec3 *)(M2C_FIELD(arg0, char **, 0x390) + 0x38);
        AI__UpdateAimEmitter(arg0, (Vec3 *)(scratch + 32));
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031ECC4) != 0) {
            Avatar__ClearPurpleSpiralEffects(arg0);
        }
        if (AI__HasPrimaryTimerElapsed(arg0, var_f31 * lbl_8031ECC8) != 0) {
            AI__SetState(arg0, 3);
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
            M2C_FIELD(arg0, s32 *, 0x560) = 0;
        }
        return;
    }
}
