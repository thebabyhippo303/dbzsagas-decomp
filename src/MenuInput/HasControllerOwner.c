/* MenuInput__HasControllerOwner @ 0x80007D70 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 MenuInput__HasControllerOwner(void *arg0) {
    return (s32) M2C_FIELD(arg0, s32 *, 0xD4) != -1;
}
