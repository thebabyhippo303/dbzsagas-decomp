/* AI__AdvanceAction28Then29Sequence @ 0x80063AF8 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
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
extern f32 lbl_8031E750 __attribute__((section(".data")));
extern f32 lbl_8031E754 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceAction28Then29Sequence(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[28]; } sp8;
    s32 temp_r30;

    AI__ComputeTargetingInfo(((M2C_UNK *)sp8.bytes), arg0);
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r30) {                             /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x1C;
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        M2C_FIELD(arg0, s32 *, 0x12C) = temp_r30;
        return;
    case 1:
        if ((AI__HasPrimaryTimerElapsed(arg0, lbl_8031E750) != 0) && (M2C_FIELD(arg0, s32 *, 0x12C) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x12C) = temp_r30;
            M2C_FIELD(arg0, s32 *, 0x380) = 0x1D;
            return;
        }
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031E754) != 0) {
            AI__SetState(arg0, 2);
            return;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        AI__SetState(arg0, 3);
        break;
    }
}
