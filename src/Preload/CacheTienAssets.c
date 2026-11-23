/* Preload__CacheTienAssets @ 0x8012D458 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Preload__LoadDblAsset(char *);
void Preload__RegisterBank(char *);
void Preload__ResolveFile(char *);
extern s8 lbl_803291FC __attribute__((section(".data")));
extern s8 lbl_80329210 __attribute__((section(".data")));
extern s8 lbl_80329228 __attribute__((section(".data")));
extern s8 lbl_8032923C __attribute__((section(".data")));
extern s8 lbl_80329244 __attribute__((section(".data")));

s32 Preload__CacheTienAssets(void) {
    Preload__LoadDblAsset(&lbl_803291FC);
    Preload__LoadDblAsset(&lbl_80329210);
    Preload__LoadDblAsset(&lbl_80329228);
    Preload__RegisterBank(&lbl_8032923C);
    Preload__ResolveFile(&lbl_80329244);
    return 1;
}
