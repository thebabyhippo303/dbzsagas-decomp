/* AvaSurf__ConstructRowTable @ 0x800B7E48 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK AvaSurf__Construct(void *);                 /* extern */
extern M2C_UNK lbl_803335C8 __attribute__((section(".data")));
extern M2C_UNK lbl_80333648 __attribute__((section(".data")));
extern M2C_UNK lbl_803485F8 __attribute__((section(".data")));

void *AvaSurf__ConstructRowTable(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_803485F8;
    AvaSurf__Construct(arg0 + 0xC);
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &lbl_803335C8;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80333648;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}
