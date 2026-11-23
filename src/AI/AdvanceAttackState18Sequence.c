/* AI__AdvanceAttackState18Sequence @ 0x80070694 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__SetState(void *, int);
extern f32 lbl_8031EE18 __attribute__((section(".data")));
extern f32 lbl_8031EE1C __attribute__((section(".data")));
extern f32 lbl_8031EE20 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceAttackState18Sequence(void *arg0) {
    f32 var_f1;
    s32 temp_r0;

    var_f1 = lbl_8031EE18;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4FC) == 0) {
        var_f1 = lbl_8031EE1C;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x380) = 0x21;
        if (AI__HasPrimaryTimerElapsed(arg0, var_f1) != 0) {
            M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
            AI__SetState(arg0, 2);
            return;
        }
        return;
    case 2: {
        f32 timer = lbl_8031EE20;
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
        if (AI__HasPrimaryTimerElapsed(arg0, timer) != 0) {
            AI__SetState(arg0, 3);
        }
        break;
    }
    }
}
