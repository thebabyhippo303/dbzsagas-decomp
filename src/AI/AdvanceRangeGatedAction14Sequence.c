/* AI__AdvanceRangeGatedAction14Sequence @ 0x80065074 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
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
extern f32 lbl_8031E7F8 __attribute__((section(".data")));
extern f32 lbl_8031E7FC __attribute__((section(".data")));
extern f32 lbl_8031E800 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceRangeGatedAction14Sequence(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    s32 st;

    switch (M2C_FIELD(arg0, s32 *, 0x7C)) {
    case 0:
        AI__ComputeTargetingInfo(((M2C_UNK *)sp8.bytes), arg0);
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        if (M2C_FIELD(((M2C_UNK *)sp8.bytes), f32 *, 0x18) > lbl_8031E7F8) {
            AI__SetState(arg0, 3);
        }
        break;
    case 1:
        AI__SetState(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0xDC) = lbl_803A35C0;
        M2C_FIELD(arg0, f32 *, 0x180) = lbl_8031E7FC;
        M2C_FIELD(arg0, s32 *, 0x380) = 0xE;
        M2C_FIELD(arg0, f32 *, 0x174) = lbl_8031E7FC;
        M2C_FIELD(arg0, f32 *, 0x178) = lbl_8031E7FC;
        M2C_FIELD(arg0, f32 *, 0x17C) = lbl_8031E7FC;
        break;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031E800) != 0) {
            st = M2C_FIELD(arg0, s32 *, 0x550);
            if (st == 0) {
                M2C_FIELD(arg0, s32 *, 0x380) = st;
                AI__SetState(arg0, 3);
            }
        }
        break;
    }
}
