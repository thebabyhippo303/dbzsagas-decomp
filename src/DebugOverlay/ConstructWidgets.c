/* DebugOverlay__ConstructWidgets @ 0x80138AE4 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_8026B590(void *);
M2C_UNK fn_80270450();                              /* extern */

void *DebugOverlay__ConstructWidgets(void *arg0) {
    fn_80270450();
    fn_8026B590(arg0 + 0x1F4);
    fn_8026B590(arg0 + 0x394);
    fn_8026B590(arg0 + 0x534);
    fn_8026B590(arg0 + 0x6D4);
    M2C_FIELD(arg0, s32 *, 0x87C) = 0;
    return arg0;
}
