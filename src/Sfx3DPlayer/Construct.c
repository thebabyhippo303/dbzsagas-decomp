/* Sfx3DPlayer__Construct @ 0x80198700 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_801985A4(s32);                           /* extern */
M2C_UNK fn_801987A4(void *);                        /* extern */
M2C_UNK fn_801987B0(void *, M2C_UNK);               /* extern */
M2C_UNK fn_80198E30();                              /* extern */
extern M2C_UNK lbl_803401D0 __attribute__((section(".data")));

void *Sfx3DPlayer__Construct(void *arg0) {
    fn_80198E30();
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &lbl_803401D0;
    fn_801985A4(arg0 + 0x40);
    fn_801987A4(arg0);
    fn_801987B0(arg0, 0);
    return arg0;
}
