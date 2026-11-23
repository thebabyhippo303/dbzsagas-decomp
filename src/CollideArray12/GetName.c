/* CollideArray12__GetName @ 0x801D46F0 (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern M2C_UNK lbl_80341E74 __attribute__((section(".data")));

M2C_UNK *CollideArray12__GetName(void) {
    return &lbl_80341E74;
}
