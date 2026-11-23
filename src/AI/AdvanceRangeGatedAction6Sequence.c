/* AI__AdvanceRangeGatedAction6Sequence @ 0x8006A4B8 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__SetState(void *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
M2C_UNK AI__ComputeTargetingInfo(s32, s32);
extern f32 lbl_8031EB90 __attribute__((section(".data")));
extern f32 lbl_8031EB94 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceRangeGatedAction6Sequence(s32 arg0) {
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    f32 temp_f0;
    s32 temp_r0;

    AI__ComputeTargetingInfo((s32) ((M2C_UNK *)sp8.bytes), arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xE8);
    switch (temp_r0) {                              /* irregular */
    case 0:
        if ((!(temp_f0 >= M2C_FIELD(((M2C_UNK *)sp8.bytes), f32 *, 0x18)) && ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 7)) || (!((temp_f0 * temp_f0) >= M2C_FIELD(((M2C_UNK *)sp8.bytes), f32 *, 0x18)) && ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 7))) {
            M2C_FIELD(arg0, s32 *, 0x380) = 6;
            M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
            AI__SetState((void *) arg0, 1);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        AI__SetState((void *) arg0, 3);
        return;
    case 1:
        if ((AI__HasPrimaryTimerElapsed((void *) arg0, lbl_8031EB90) != 0) || !(M2C_FIELD(((M2C_UNK *)sp8.bytes), f32 *, 0x18) >= lbl_8031EB94)) {
            AI__SetState((void *) arg0, 2);
            return;
        }
        return;
    case 2:
        AI__SetState((void *) arg0, 3);
        break;
    }
}
