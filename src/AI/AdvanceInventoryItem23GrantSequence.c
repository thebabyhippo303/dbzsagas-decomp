/* AI__AdvanceInventoryItem23GrantSequence @ 0x800641C0 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__ComputeTargetingInfo(void *, void *);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__SetState(void *, s32);
extern f32 lbl_8031E790 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceInventoryItem23GrantSequence(void *arg0) {
    char sp8[32];
    s32 temp_r0;

    AI__ComputeTargetingInfo(&sp8, arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        AI__SetState(arg0, 1);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2C;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0x17;
        AI__SetState(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 2:
        if ((AI__HasPrimaryTimerElapsed(arg0, lbl_8031E790) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x560) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2B;
            AI__SetState(arg0, 3);
        }
        return;
    }
}
