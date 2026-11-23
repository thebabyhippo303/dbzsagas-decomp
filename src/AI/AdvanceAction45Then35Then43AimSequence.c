/* AI__AdvanceAction45Then35Then43AimSequence @ 0x8006C29C (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__SetState(void *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void Avatar__ClearPurpleSpiralEffects(void *);
void AI__ComputeTargetingInfo(void *, void *);
typedef struct { f32 x, y, z; } Vec3;
void AI__UpdateAimingIndicator(void *, Vec3 *, s32);
extern f32 lbl_8031ECF0 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceAction45Then35Then43AimSequence(void *arg0) {
    struct { Vec3 pos; char rest[20]; } info;
    s32 temp_r0;

    AI__ComputeTargetingInfo(&info, arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        AI__SetState(arg0, 1);
        return;
    case 1:
        info.pos = *(Vec3 *)(M2C_FIELD(arg0, char **, 0x390) + 0x38);
        AI__UpdateAimingIndicator(arg0, &info.pos, 0);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x23;
        AI__SetState(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 2:
        if ((AI__HasPrimaryTimerElapsed(arg0, lbl_8031ECF0) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x564) == 0)) {
            Avatar__ClearPurpleSpiralEffects(arg0);
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2B;
            AI__SetState(arg0, 3);
        }
        return;
    }
}

