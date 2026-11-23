/* FluffLoop__ReturnToMainMenu @ 0x800529D4 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SaveMenu__StartReturnTransition(void *);
void MainMenu__StartScreenTransition(void *, f32);
void MainMenu__ConfigureScreen(void *, int);
void * fn_80267318(void *, int, float);
extern f32 lbl_8031A168 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern void *lbl_803DC704;

void FluffLoop__ReturnToMainMenu(s32 arg0) {
    register f32 arg_load;
    SaveMenu__StartReturnTransition(arg0);
    arg_load = lbl_8031A168;
    M2C_FIELD(lbl_803DC368, s32 *, 0xB4) = 0;
    fn_80267318(arg0 + 0xD4C4, 0, arg_load);
    MainMenu__StartScreenTransition(lbl_803DC704, lbl_8031A168);
    MainMenu__ConfigureScreen(lbl_803DC704, 1);
}

