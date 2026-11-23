/* ShadowMgr__AddLightToAll @ 0x8022D838 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
extern char lbl_803ADB30[] __attribute__((section(".bss")));
extern f32 lbl_80346B78 __attribute__((section(".rodata")));
void ShadowMgr__AddLight(void *, void *, f32);

void ShadowMgr__AddLightToAll(void *arg0) {
    void *n = M2C_FIELD(lbl_803ADB30, void **, 0);

    if (n == NULL) {
        return;
    }
    do {
        if (M2C_FIELD(n, s32 *, 148) != 0) {
            ShadowMgr__AddLight(M2C_FIELD(n, void **, 144), arg0, lbl_80346B78);
        }
        n = M2C_FIELD(n, void **, 0);
    } while (n != NULL);
}
