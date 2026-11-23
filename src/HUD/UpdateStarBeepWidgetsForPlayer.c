/* HUD__UpdateStarBeepWidgetsForPlayer @ 0x8010A16C (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Game__GetConfiguredPlayerCount(void *);
void * Game__GetPlayerImpl(void *, int);
void HUD__UpdateStarBeepWidget(void *, void *, int);
extern void *lbl_803DC3C0;

void HUD__UpdateStarBeepWidgetsForPlayer(void *arg0, s32 arg1) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r30_3;

    if (Game__GetPlayerImpl(lbl_803DC3C0, 0) == arg1) {
        var_r30 = 0;
        while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x2F20)) {
            temp_r5 = var_r30;
            var_r30 += 1;
            HUD__UpdateStarBeepWidget(arg0, arg0 + 0x1268, temp_r5);
        }
    } else if (Game__GetConfiguredPlayerCount(lbl_803DC3C0) == 2) {
        var_r30_2 = 0;
        while (var_r30_2 < (s32) M2C_FIELD(arg0, s32 *, 0x2F20)) {
            temp_r5_2 = var_r30_2;
            var_r30_2 += 1;
            HUD__UpdateStarBeepWidget(arg0, arg0 + 0x1774, temp_r5_2);
        }
    } else {
        var_r30_3 = 0;
        while (var_r30_3 < (s32) M2C_FIELD(arg0, s32 *, 0x2F20)) {
            temp_r5_3 = var_r30_3;
            var_r30_3 += 1;
            HUD__UpdateStarBeepWidget(arg0, arg0 + 0x1C80, temp_r5_3);
        }
    }
}
