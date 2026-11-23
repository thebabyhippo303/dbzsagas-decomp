/* FileServer__ResetDeviceWindow @ 0x8015E340 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_8015E294(void);
M2C_UNK fn_8015E274();                              /* extern */

void FileServer__ResetDeviceWindow(void) {
    fn_8015E274();
    *(s32 *)0xCC006008 = 0;
    *(s32 *)0xCC00601C = 1;
    fn_8015E294();
}

