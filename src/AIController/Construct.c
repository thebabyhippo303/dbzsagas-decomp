/* AIController__Construct @ 0x80086A00 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_800B617C();                              /* extern */
extern M2C_UNK lbl_803345C0 __attribute__((section(".data")));
extern f32 lbl_803A35C4 __attribute__((section(".data")));
extern volatile s32 lbl_803DC530;
extern volatile s32 lbl_803DC534;

void *AIController__Construct(void *arg0) {
    f32 value;
    fn_800B617C();
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_803345C0;
    value = lbl_803A35C4;
    *(volatile s32 *)((char *)arg0 + 0xA4) = 0;
    *(volatile f32 *)((char *)arg0 + 0x8C) = value;
    lbl_803DC530 = 1;
    lbl_803DC534 = 0;
    return arg0;
}
