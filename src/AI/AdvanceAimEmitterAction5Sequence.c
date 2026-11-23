/* AI__AdvanceAimEmitterAction5Sequence @ 0x8006BC58 (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__ComputeTargetingInfo(void *, void *);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__SetState(void *, s32);
void AI__UpdateAimEmitter(void *, void *);
void AI__UpdateAimingIndicator(void *, void *, s32);
void Avatar__ClearPurpleSpiralEffects(void *);
extern f32 lbl_8031ECD4 __attribute__((section(".data")));
extern f32 lbl_8031ECD8 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

typedef struct { f32 x, y, z; } Vec3;

void AI__AdvanceAimEmitterAction5Sequence(void *arg0) {
    char scratch[80];

    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x560) = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x78) != 0xA)
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        AI__SetState(arg0, 1);
        return;
    case 1:
        *(Vec3 *)(scratch + 32) = *(Vec3 *)(M2C_FIELD(arg0, char **, 0x390) + 0x38);
        AI__UpdateAimingIndicator(arg0, (Vec3 *)(scratch + 32), 1);
        M2C_FIELD(arg0, f32 *, 0xDC) = lbl_803A35C0;
        AI__ComputeTargetingInfo(scratch + 48, arg0);
        M2C_FIELD(arg0, s32 *, 0x380) = 5;
        AI__SetState(arg0, 2);
        return;
    case 2:
        *(Vec3 *)(scratch + 32) = *(Vec3 *)(M2C_FIELD(arg0, char **, 0x390) + 0x38);
        AI__UpdateAimEmitter(arg0, (Vec3 *)(scratch + 32));
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031ECD4))
            Avatar__ClearPurpleSpiralEffects(arg0);
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031ECD8)) {
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
            AI__SetState(arg0, 3);
            M2C_FIELD(arg0, s32 *, 0x560) = 0;
        }
        return;
    }
}
