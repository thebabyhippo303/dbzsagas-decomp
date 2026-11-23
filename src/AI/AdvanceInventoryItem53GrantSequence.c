/* AI__AdvanceInventoryItem53GrantSequence @ 0x80067CD4 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern void AI__ComputeTargetingInfo(void *, void *);
extern void AI__SetState(void *, s32);
extern s32 AI__HasPrimaryTimerElapsed(void *, f32);
extern f32 lbl_8031EA60 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));
void AI__AdvanceInventoryItem53GrantSequence(void *arg0) {
    char sp8[32];
    switch (M2C_FIELD(arg0, s32 *, 0x7c)) {
    case 0:
        AI__ComputeTargetingInfo(sp8, arg0);
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2c;
        M2C_FIELD(arg0, s32 *, 0x41c) = 53;
        M2C_FIELD(arg0, f32 *, 0xdc) = lbl_803A35C0;
        break;
    case 1:
        AI__SetState(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0xdc) = lbl_803A35C0;
        break;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EA60) && M2C_FIELD(arg0, s32 *, 0x560) == 0) {
            M2C_FIELD(arg0, s32 *, 0x380) = 0;
            AI__SetState(arg0, 3);
        }
        break;
    }
}
