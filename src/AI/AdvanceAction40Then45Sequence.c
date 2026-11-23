/* AI__AdvanceAction40Then45Sequence @ 0x800705B4 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
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
extern f32 lbl_8031EE14 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceAction40Then45Sequence(s32 arg0) {
    union { M2C_UNK value; unsigned char bytes[28]; } sp8;
    s32 temp_r11;

    AI__ComputeTargetingInfo((s32) ((M2C_UNK *)sp8.bytes), arg0);
    temp_r11 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r11) {                             /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x28;
        M2C_FIELD(arg0, s32 *, 0xD4) = temp_r11;
        M2C_FIELD(arg0, s32 *, 0xF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xF0) ^ 1);
        AI__SetState((void *) arg0, 1);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 1:
        if (AI__HasPrimaryTimerElapsed((void *) arg0, lbl_8031EE14) != 0) {
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
            AI__SetState((void *) arg0, 2);
            return;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        AI__SetState((void *) arg0, 3);
        M2C_FIELD(arg0, s32 *, 0xD8) = 0;
        M2C_FIELD(arg0, s32 *, 0x4DC) = 0;
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        break;
    }
}
