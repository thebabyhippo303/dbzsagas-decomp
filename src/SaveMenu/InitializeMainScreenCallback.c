/* SaveMenu__InitializeMainScreenCallback @ 0x80054FCC (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SaveMenu__InitializeMainScreen(void *);
void SaveMenu__InitializeMainScreenCallback(void *arg0) {
    SaveMenu__InitializeMainScreen(arg0);
}
