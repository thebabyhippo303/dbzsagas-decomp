/* MainMenu__HandleLeftChoiceInput @ 0x8014BE14 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ConfirmationDialog__SelectPreviousChoice(void *);
void fn_80188B64(char *, int);
extern s8 lbl_803251F0 __attribute__((section(".data")));

void MainMenu__HandleLeftChoiceInput(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCBAC) == 2) {
        fn_80188B64(&lbl_803251F0, 0);
        ConfirmationDialog__SelectPreviousChoice(arg0 + 0xAE94);
    }
}
