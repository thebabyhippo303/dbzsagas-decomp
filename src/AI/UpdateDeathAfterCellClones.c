/* AI__UpdateDeathAfterCellClones @ 0x80070358 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__SetAttackSuppressed(void *, int);
void AI__SetState(void *, int);
void Actor__ToNonProtagonistCastImpl(void *);
void Avatar__SetHealthImpl(void *, float);
extern f32 lbl_8031EE00 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__UpdateDeathAfterCellClones(void *arg0) {
    s32 temp_r0;
    void *temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        AI__SetAttackSuppressed(arg0, 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0x390);
        Avatar__SetHealthImpl(temp_r3, -M2C_FIELD(temp_r3, f32 *, 0x288));
        Actor__ToNonProtagonistCastImpl(M2C_FIELD(arg0, void **, 0x390));
        AI__SetState(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2C;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0x45;
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 1:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EE00) != 0) {
            AI__SetState(arg0, 2);
            return;
        }
        return;
    case 2:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x56C) == 0) {
            AI__SetState(arg0, 3);
        }
        break;
    }
}
