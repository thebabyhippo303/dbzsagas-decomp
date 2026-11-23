/* AI__AdvanceTimedAction7Sequence @ 0x8007083C (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__SetState(void *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void Avatar__StartAnimationByIdAndFlags(void *, s32, s32, s32);
extern f32 lbl_8031EE28 __attribute__((section(".data")));
extern f32 lbl_8031EE2C __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceTimedAction7Sequence(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x380) = 7;
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 1:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EE28) != 0) {
            AI__SetState(arg0, 2);
            return;
        }
        return;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EE2C) != 0) {
            Avatar__StartAnimationByIdAndFlags(M2C_FIELD(arg0, void **, 0x390), 0x03E80000, 0x60, 1);
            M2C_FIELD(arg0, s32 *, 0x380) = 0;
            AI__SetState(arg0, 3);
        }
        break;
    }
}
