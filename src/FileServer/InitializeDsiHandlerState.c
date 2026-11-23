/* FileServer__InitializeDsiHandlerState @ 0x8015E74C (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern s32 lbl_8036F8AC __attribute__((section(".data")));
extern s32 lbl_8036FB60 __attribute__((section(".data")));

void FileServer__InitializeDsiHandlerState(s32 arg0) {
    if (arg0 == -0x8000) {
        lbl_8036FB60 = arg0;
        lbl_8036F8AC = 0;
    }
}
