/* AI__AdvanceAction40AnimationSequence @ 0x8006648C (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__ComputeTargetingInfo(void *, void *);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__SetState(void *, s32);
void Avatar__StartAnimationByIdAndFlags(void *, int, int, int);
extern f32 lbl_8031E9AC __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceAction40AnimationSequence(void *arg0) {
    char sp8[32];
    s32 temp_r9;

    AI__ComputeTargetingInfo(&sp8, arg0);
    temp_r9 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r9) {                              /* irregular */
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x380) == 0x28) {
            M2C_FIELD(arg0, s32 *, 0x380) = temp_r9;
            Avatar__StartAnimationByIdAndFlags(M2C_FIELD(M2C_FIELD(arg0, void **, 0x38C), void **, 0xC8), 0x03E8010A, 0x60, 1);
            AI__SetState(arg0, 1);
            M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xD4) = temp_r9;
        M2C_FIELD(arg0, s32 *, 0x380) = 0x28;
        return;
    case 1:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031E9AC) != 0) {
            AI__SetState(arg0, 2);
            return;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        Avatar__StartAnimationByIdAndFlags(M2C_FIELD(M2C_FIELD(arg0, void **, 0x38C), void **, 0xC8), 0x03E80000, 0x24, 1);
        AI__SetState(arg0, 3);
        break;
    }
}
