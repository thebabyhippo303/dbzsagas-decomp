/* WorldLighting__RegisterLightVariables @ 0x8029002C (size: 0x1C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
s32 sprintf(char *, char *, ...);
s32 VarBool__Create(void *, void *, void *, void *, void *, void *, void *);
s32 VarVector__Create(char *, char *, s32, void *, void *, s32, s32, s32);
void VarRealUnit__CreateWithScale(char *, char *, s32, s32, s32, s32, s32, u32, f32);
extern s8 lbl_8034F78C[];
extern u8 lbl_8034F794[] __attribute__((section(".data")));
extern u8 lbl_8034F798[];
extern u8 lbl_8034F7A4[];
extern u8 lbl_8034F7A8[];
extern u8 lbl_8034F7B0[];
extern u8 lbl_8034F7C0[];
extern f32 lbl_8034F7C8 __attribute__((section(".data")));
extern s8 *lbl_803DCC10;
void WorldLighting__RegisterLightVariables(u8 *arg0, s8 *arg1, u32 arg2, void *arg3) {
    union { s8 value; unsigned char bytes[256]; } sp8;
    s32 n;
    if (arg2 > 4) {
        return;
    }
    n = arg2 + 1;
    sprintf((char *)sp8.bytes, lbl_8034F78C, n, (s32)&lbl_8034F794);
    VarBool__Create(lbl_803DCC10, arg1, sp8.bytes, arg3, NULL, (void *)-1, NULL);
    sprintf((char *)sp8.bytes, lbl_8034F78C, n, (s32)&lbl_8034F798);
    VarBool__Create(lbl_803DCC10, arg1, sp8.bytes, (char *)arg3 + 4, NULL, (void *)-1, NULL);
    sprintf((char *)sp8.bytes, lbl_8034F78C, n, (s32)&lbl_8034F7A4);
    VarVector__Create(lbl_803DCC10, arg1, (s32)sp8.bytes, (char *)arg3 + 8, NULL, 0, -1, 0);
    sprintf((char *)sp8.bytes, lbl_8034F78C, n, (s32)&lbl_8034F7A8);
    VarVector__Create(lbl_803DCC10, arg1, (s32)sp8.bytes, (char *)arg3 + 20, NULL, 0, -1, 0);
    sprintf((char *)sp8.bytes, lbl_8034F78C, n, (s32)&lbl_8034F7B0);
    VarRealUnit__CreateWithScale(lbl_803DCC10, arg1, (s32)sp8.bytes, (s32)((char *)arg3 + 32), 0, 0, -1, 0, lbl_8034F7C8);
    sprintf((char *)sp8.bytes, lbl_8034F78C, n, (s32)&lbl_8034F7C0);
    VarRealUnit__CreateWithScale(lbl_803DCC10, arg1, (s32)sp8.bytes, (s32)((char *)arg3 + 36), 0, 0, -1, 0, lbl_8034F7C8);
}
