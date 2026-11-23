/* AI__UpdateBossStatBarState @ 0x80071828 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void HUD__DisableBossStatBars(void);
void AI__SetState(void *, s32);
void AI__SetAttackSuppressed(void *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
M2C_UNK AI__ComputeTargetingInfo(s32, s32);
M2C_UNK HUD__SetBossStatBarsEnabledForGameMode(void);
extern f32 lbl_8031EEEC __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__UpdateBossStatBarState(s32 arg0) {
    f32 arg_load;
    union { M2C_UNK value; unsigned char bytes[32]; } sp8;
    s32 temp_r0;

    AI__ComputeTargetingInfo((s32) ((M2C_UNK *)sp8.bytes), arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        HUD__DisableBossStatBars();
        AI__SetState((void *) arg0, 1);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x30;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4EC) != 0) {
            AI__SetAttackSuppressed((void *) arg0, 0);
            AI__SetState((void *) arg0, 2);
            return;
        }
        return;
    case 2:
        arg_load = lbl_8031EEEC;
        M2C_FIELD(arg0, s32 *, 0x380) = 0x20;
        if (AI__HasPrimaryTimerElapsed((void *) arg0, arg_load) != 0) {
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
            M2C_FIELD(arg0, s32 *, 0x39C) = 0;
            AI__SetState((void *) arg0, 3);
            HUD__SetBossStatBarsEnabledForGameMode();
        }
        break;
    }
}
