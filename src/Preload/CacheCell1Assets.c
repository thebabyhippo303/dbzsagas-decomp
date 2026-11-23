/* Preload__CacheCell1Assets @ 0x8012C9C4 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Preload__LoadDblAsset(char *);
void Preload__ResolveFile(char *);
extern s8 lbl_80328734 __attribute__((section(".data")));
extern s8 lbl_8032874C __attribute__((section(".data")));
extern s8 lbl_80328764 __attribute__((section(".data")));
extern s8 lbl_80328778 __attribute__((section(".data")));
extern s8 lbl_80328790 __attribute__((section(".data")));
extern s8 lbl_803287A8 __attribute__((section(".data")));
extern s8 lbl_803287C4 __attribute__((section(".data")));

s32 Preload__CacheCell1Assets(void) {
    Preload__LoadDblAsset(&lbl_80328734);
    Preload__LoadDblAsset(&lbl_8032874C);
    Preload__LoadDblAsset(&lbl_80328764);
    Preload__ResolveFile(&lbl_80328778);
    Preload__ResolveFile(&lbl_80328790);
    Preload__ResolveFile(&lbl_803287A8);
    Preload__ResolveFile(&lbl_803287C4);
    return 1;
}
