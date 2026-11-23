/* Avatar__EatBean @ 0x80042DA0 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__SetHealthImpl(void *, float);
void CombatHUD__ResetAttemptBreakerState(void *);
void * Script__PopInt(void *, void *);
M2C_UNK Avatar__FinishEatingBean();                 /* extern */
M2C_UNK CombatHUD__ClearAttemptBreakerWidgets(void *); /* extern */
M2C_UNK HUD__AnimateBeanRecoveryForAvatar(void *, void *, f32); /* extern */
M2C_UNK HUD__RefreshStarBeepWidgets(void *);        /* extern */
extern f32 lbl_80311D60 __attribute__((section(".data")));
extern f32 lbl_80311D64 __attribute__((section(".data")));
extern void *lbl_803DC654;

void Avatar__EatBean(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = Script__PopInt(arg0, arg1);
    M2C_FIELD(temp_r3, s32 *, 0x290) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x290) - 1);
    Avatar__FinishEatingBean();
    Avatar__SetHealthImpl(temp_r3, M2C_FIELD(temp_r3, f32 *, 0x28C));
    M2C_FIELD(temp_r3, f32 *, 0x2B4) = (f32) lbl_80311D60;
    HUD__AnimateBeanRecoveryForAvatar(lbl_803DC654, temp_r3, lbl_80311D64);
    CombatHUD__ClearAttemptBreakerWidgets(lbl_803DC654);
    CombatHUD__ResetAttemptBreakerState(lbl_803DC654);
    HUD__RefreshStarBeepWidgets(lbl_803DC654);
}
