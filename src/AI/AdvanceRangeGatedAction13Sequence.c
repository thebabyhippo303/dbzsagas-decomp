/* AI__AdvanceRangeGatedAction13Sequence @ 0x80064F78 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__SetState(void *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__ComputeTargetingInfo(void *, void *);
extern f32 lbl_8031E7F0 __attribute__((section(".data")));
extern f32 lbl_8031E7F4 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceRangeGatedAction13Sequence(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    f32 temp_f13;
    f32 temp_f0;

    switch (M2C_FIELD(arg0, s32 *, 0x7C)) {                              /* irregular */
    case 0:
        AI__ComputeTargetingInfo(((M2C_UNK *)sp8.bytes), arg0);
        AI__SetState(arg0, 1);
        temp_f13 = M2C_FIELD(((M2C_UNK *)sp8.bytes), f32 *, 0x18);
        temp_f0 = lbl_8031E7F0;
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        if (temp_f13 <= temp_f0) {
            return;
        } else {
            AI__SetState(arg0, 3);
            return;
        }
    case 1:
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        M2C_FIELD(arg0, s32 *, 0x380) = 0xD;
        AI__SetState(arg0, 2);
        return;
    case 2:
        if ((AI__HasPrimaryTimerElapsed(arg0, lbl_8031E7F4) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x550) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
            M2C_FIELD(arg0, s32 *, 0x538) = 3;
            AI__SetState(arg0, 3);
        }
        break;
    }
}
