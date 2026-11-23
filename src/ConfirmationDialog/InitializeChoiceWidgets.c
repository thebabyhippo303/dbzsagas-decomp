/* ConfirmationDialog__InitializeChoiceWidgets @ 0x80018008 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ConfirmationDialog__RefreshChoiceLayout(void *);
void fn_8026BF14(void *);
void fn_80270784(void *, char *);
void ConfirmationDialog__InitializeChoiceWidgets(void *arg0, s8 *arg1) {
    void *temp_r30;

    temp_r30 = arg0 + 0x1A0;
    fn_80270784(temp_r30, arg1);
    fn_8026BF14(temp_r30);
    ConfirmationDialog__RefreshChoiceLayout(arg0);
}
