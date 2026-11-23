/* AI__AdvanceAction45Then30Then43AimSequence @ 0x8006BF1C (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__SetState(void *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void Avatar__ClearPurpleSpiralEffects(void *);
void AI__ComputeTargetingInfo(void *, void *);
typedef struct { f32 x, y, z; } Vec3;
void AI__UpdateAimingIndicator(void *, Vec3 *, s32);
extern f32 lbl_8031ECE4 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceAction45Then30Then43AimSequence(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    Vec3 pos;
    register s32 temp_r0;

    AI__ComputeTargetingInfo(((M2C_UNK *)sp8.bytes), arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        AI__SetState(arg0, 1);
        return;
    case 1:
        pos = *(Vec3 *)(M2C_FIELD(arg0, char **, 0x390) + 0x38);
        AI__UpdateAimingIndicator(arg0, &pos, 0);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x1E;
        AI__SetState(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031ECE4) != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x564) == 0) {
                Avatar__ClearPurpleSpiralEffects(arg0);
                AI__SetState(arg0, 3);
                M2C_FIELD(arg0, s32 *, 0x380) = 0x2B;
            }
        }
        return;
    }
}
