/* DebugOverlay__SetStatusFieldsVisible @ 0x80138A8C (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_8026D498(void *);
void fn_8026D514(void *);
void DebugOverlay__SetStatusFieldsVisible(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6BAC) = arg1;
    if (arg1 != 0) {
        fn_8026D498(arg0 + 0x43D0);
        fn_8026D498(arg0 + 0x45C4);
        return;
    }
    fn_8026D514(arg0 + 0x43D0);
    fn_8026D514(arg0 + 0x45C4);
}
