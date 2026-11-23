/* MenuController__UpdateExitMenuAndHud @ 0x8004B690 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK HUD__ShowAllPlayerWidgets(s32);             /* extern */
M2C_UNK MenuController__ProcessExitConfirmation();  /* extern */
extern s32 lbl_803DC654;

void MenuController__UpdateExitMenuAndHud(void) {
    MenuController__ProcessExitConfirmation();
    HUD__ShowAllPlayerWidgets(lbl_803DC654);
}
