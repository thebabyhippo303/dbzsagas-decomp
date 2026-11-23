/* AI__AdvanceActionAnimationSequence @ 0x80065870 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__SetState(void *, int);
M2C_UNK AI__ResolveTargetPose(M2C_UNK *, void *);   /* extern */
M2C_UNK AI__StartActionAnimation(void *);           /* extern */
extern f32 lbl_8031E834 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceActionAnimationSequence(void *arg0) {
    f32 arg_load;
    unsigned char sp8[0x20];
    s32 temp_r0;

    AI__ResolveTargetPose((M2C_UNK *)sp8, arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x1F;
        AI__StartActionAnimation(arg0);
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 1:
        if (AI__HasPrimaryTimerElapsed(arg0, M2C_FIELD(arg0, f32 *, 0x3A0)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x380) = 0x20;
            AI__SetState(arg0, 2);
            M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
            M2C_FIELD(arg0, s32 *, 0x39C) = 0;
            return;
        }
        return;
    case 2:
        arg_load = lbl_8031E834;
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2B;
        if (AI__HasPrimaryTimerElapsed(arg0, arg_load) != 0) {
            AI__SetState(arg0, 3);
        }
        break;
    }
}
