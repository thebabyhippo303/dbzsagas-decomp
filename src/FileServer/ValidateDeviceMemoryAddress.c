/* FileServer__ValidateDeviceMemoryAddress @ 0x8015E404 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 FileServer__ValidateDeviceMemoryAddress(s32 arg0) {
    if (arg0 > 0x5705FFFF) {
        return 0x52100;
    }
    return 0;
}
