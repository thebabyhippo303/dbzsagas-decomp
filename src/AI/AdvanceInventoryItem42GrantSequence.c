/* AI__AdvanceInventoryItem42GrantSequence @ 0x80068E3C (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__ComputeTargetingInfo(void *, void *);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__SetState(void *, s32);
extern f32 lbl_8031EABC __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceInventoryItem42GrantSequence(void *arg0) {
    char sp8[32];
    s32 temp_r0;
    s32 temp_r0_2;

    AI__ComputeTargetingInfo(&sp8, arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2C;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0x2A;
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        AI__SetState(arg0, 2);
        return;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EABC) != 0) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x560);
            if (temp_r0_2 == 0) {
                M2C_FIELD(arg0, s32 *, 0x380) = temp_r0_2;
                AI__SetState(arg0, 3);
            }
        }
        return;
    }
}
