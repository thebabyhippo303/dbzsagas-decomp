/* Preload__CachePrototype2Assets @ 0x8012D678 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Preload__LoadDblAsset(char *);
void * Preload__ResolveFile(char *);
extern s8 lbl_80329444 __attribute__((section(".data")));
extern s8 lbl_803294A0 __attribute__((section(".data")));
extern s8 lbl_803294BC __attribute__((section(".data")));
extern s8 lbl_803294D8 __attribute__((section(".data")));
extern s8 lbl_803294F8 __attribute__((section(".data")));
extern s8 lbl_80329514 __attribute__((section(".data")));
extern s8 lbl_80329528 __attribute__((section(".data")));
extern s8 lbl_80329540 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

s32 Preload__CachePrototype2Assets(void) {
    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 0xD) {
        Preload__LoadDblAsset(&lbl_803294A0);
    } else {
        Preload__LoadDblAsset(&lbl_803294BC);
    }
    Preload__LoadDblAsset(&lbl_80329444);
    Preload__LoadDblAsset(&lbl_803294D8);
    Preload__ResolveFile(&lbl_803294F8);
    Preload__ResolveFile(&lbl_80329514);
    Preload__ResolveFile(&lbl_80329528);
    Preload__ResolveFile(&lbl_80329540);
    return 1;
}

