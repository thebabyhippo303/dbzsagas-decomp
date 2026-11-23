/* AI__AdvanceRangeGatedAction12Sequence @ 0x80064E84 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__ComputeTargetingInfo(void *, void *);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__SetState(void *, s32);
extern f32 lbl_8031E7E8 __attribute__((section(".data")));
extern f32 lbl_8031E7EC __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceRangeGatedAction12Sequence(void *arg0) {
    u8 sp8[0x20];
    s32 temp_r0;
    f32 f;

    AI__ComputeTargetingInfo(sp8, arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        AI__SetState(arg0, 1);
        f = lbl_8031E7E8;
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        if (!(*(f32 *)(sp8 + 0x18) <= f)) {
            AI__SetState(arg0, 3);
        }
        return;
    case 1:
        AI__SetState(arg0, 2);
        M2C_FIELD(arg0, s32 *, 0x380) = 0xC;
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 2:
        if ((AI__HasPrimaryTimerElapsed(arg0, lbl_8031E7EC) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x550) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
            AI__SetState(arg0, 3);
        }
        break;
    }
}
