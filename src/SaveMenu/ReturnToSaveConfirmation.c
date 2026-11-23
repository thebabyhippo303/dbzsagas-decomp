/* SaveMenu__ReturnToSaveConfirmation @ 0x80054044 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void MainMenu__ShowSaveGameConfirmation(s32);
void SaveMenu__StartReturnTransition(void *);
void fn_80267318(void *, int, float);
extern f32 lbl_8031A54C __attribute__((section(".data")));
extern s32 lbl_803DC40C;
extern s32 lbl_803DC714;

void SaveMenu__ReturnToSaveConfirmation(void *arg0) {
    if ((s32) lbl_803DC40C == 0) {
        SaveMenu__StartReturnTransition(arg0);
        fn_80267318(arg0 + 0xD4C4, 0, lbl_8031A54C);
        if ((s32) lbl_803DC714 != 0) {
            MainMenu__ShowSaveGameConfirmation(lbl_803DC714);
        }
    }
}
