/* isspace @ 0x80166E74 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern u8 lbl_8033C9D9 __attribute__((section(".data")));

s32 isspace(s32 arg0) {
    return *((u8 *)&lbl_8033C9D9 + arg0) & 8;
}
