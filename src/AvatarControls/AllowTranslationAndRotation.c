/* AvatarControls__AllowTranslationAndRotation @ 0x80089CDC (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__SetAnimScriptVarIntImpl(void *, char *, int, int);
void Avatar__SetControlCallbackState(void *, void *);
extern s8 lbl_8031F3F4 __attribute__((section(".data")));
extern s8 lbl_8031F408 __attribute__((section(".data")));

void AvatarControls__AllowTranslationAndRotation(void **arg0) {
    Avatar__SetAnimScriptVarIntImpl(*arg0, &lbl_8031F3F4, 1, 0);
    Avatar__SetAnimScriptVarIntImpl(*arg0, &lbl_8031F408, 1, 0);
    Avatar__SetControlCallbackState(*arg0, (char *)arg0 + 8);
}
