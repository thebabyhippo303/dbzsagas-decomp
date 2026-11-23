/* ProblemSelectionDialog__DismissAndResumeGameplay @ 0x80008DC0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void HUD__ShowAllPlayerWidgets(int);
void SimLoop__PauseSimulation(int, int, int, int);
M2C_UNK ProblemSelectionDialog__Dismiss(s32);       /* extern */
extern s32 lbl_803DC394;
extern s32 lbl_803DC3C0;
extern s32 lbl_803DC654;

void ProblemSelectionDialog__DismissAndResumeGameplay(void) {
    ProblemSelectionDialog__Dismiss(lbl_803DC394);
    SimLoop__PauseSimulation(lbl_803DC3C0, 0, 0, 1);
    HUD__ShowAllPlayerWidgets(lbl_803DC654);
}
