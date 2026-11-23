/* Avatar__HandleKnockout @ 0x8008DDD0 (size: 0x194, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int AIBoss__IsQuickRecoveryBlocked(void *);
int Avatar__StartAnimationImpl(void *, unsigned short, int, int, int, int);
void * Game__FindBossActor(void);
void * Game__FindNearestEligibleAvatar(void *);
int Game__GetConfiguredPlayerCount(void *);
void * Game__GetPlayerImpl(void *, int);
void HUD__HideAllPlayerWidgets(void *);
void MissionProgress__DisplayAll(int, void *);
void MissionUI__InitializeFailureAndRetryScreen(void *, const char *, float);
M2C_UNK HUD__AnimateQuickRecoveryBlockWidgets(void *, void *, f32); /* extern */
extern s8 lbl_8031D820 __attribute__((section(".data")));
extern f32 lbl_8031F7A0 __attribute__((section(".data")));
extern f32 lbl_8031F7A4 __attribute__((section(".data")));
extern f32 lbl_8031F7A8 __attribute__((section(".data")));
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));
extern void *lbl_803DC654 __attribute__((section(".sdata")));
extern void *lbl_803DC6A0 __attribute__((section(".sdata")));

void Avatar__HandleKnockout(void *arg0) {
    f32 temp_f31;
    s32 var_r30;
    s32 var_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *var_r4;

    temp_f31 = lbl_8031F7A0;
    if (!(M2C_FIELD(arg0, f32 *, 0x288) > temp_f31)) {
        Avatar__StartAnimationImpl(arg0, 0x900U, 0, 0, 0, 1);
        var_r30 = 0;
        HUD__AnimateQuickRecoveryBlockWidgets(lbl_803DC654, arg0, lbl_8031F7A4);
        for (var_r31 = 0; var_r31 < Game__GetConfiguredPlayerCount(lbl_803DC3C0); var_r31++) {
            temp_r3 = Game__GetPlayerImpl(lbl_803DC3C0, var_r31);
            if (!(M2C_FIELD(temp_r3, f32 *, 0x288) > temp_f31) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x290) == 0)) {
                var_r30 += 1;
            }
        }
        if (var_r30 == Game__GetConfiguredPlayerCount(lbl_803DC3C0)) {
            temp_r3_2 = Game__FindBossActor();
            if (temp_r3_2 != NULL) {
                var_r4 = M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x19D8), void **, 0xC);
                if (var_r4 == (void *)0x1B) {
                    var_r4 = (void *)0x21;
                } else if (var_r4 == (void *)0x12) {
                    var_r4 = (void *)0x11;
                }
                MissionProgress__DisplayAll(0x192, var_r4);
                return;
            }
            HUD__HideAllPlayerWidgets(lbl_803DC654);
            MissionUI__InitializeFailureAndRetryScreen(lbl_803DC6A0, &lbl_8031D820, lbl_8031F7A8);
        }
    } else if (AIBoss__IsQuickRecoveryBlocked(arg0) != 0) {
        Avatar__StartAnimationImpl(arg0, 0xF00U, 0, 0, 0, 1);
        HUD__AnimateQuickRecoveryBlockWidgets(lbl_803DC654, arg0, lbl_8031F7A4);
        temp_r3_3 = Game__FindNearestEligibleAvatar(arg0);
        if ((temp_r3_3 != NULL) && ((s32) M2C_FIELD(arg0, s32 *, 0x7E4) != 0)) {
            MissionProgress__DisplayAll(0x192, M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x19D8), void **, 0xC));
        }
    }
}
