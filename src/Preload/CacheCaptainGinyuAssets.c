/* Preload__CacheCaptainGinyuAssets @ 0x8012C8DC (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Preload__LoadDblAsset(char *);
void Preload__ResolveFile(char *);
extern s8 lbl_803285E4 __attribute__((section(".data")));
extern s8 lbl_80328600 __attribute__((section(".data")));
extern s8 lbl_80328620 __attribute__((section(".data")));
extern s8 lbl_80328634 __attribute__((section(".data")));
extern s8 lbl_80328650 __attribute__((section(".data")));
extern s8 lbl_80328664 __attribute__((section(".data")));
extern s8 lbl_80328678 __attribute__((section(".data")));
extern s8 lbl_80328688 __attribute__((section(".data")));

s32 Preload__CacheCaptainGinyuAssets(void) {
    Preload__LoadDblAsset(&lbl_803285E4);
    Preload__LoadDblAsset(&lbl_80328600);
    Preload__LoadDblAsset(&lbl_80328620);
    Preload__ResolveFile(&lbl_80328634);
    Preload__ResolveFile(&lbl_80328650);
    Preload__ResolveFile(&lbl_80328664);
    Preload__ResolveFile(&lbl_80328678);
    Preload__ResolveFile(&lbl_80328688);
    return 1;
}

