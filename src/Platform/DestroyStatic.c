/* Platform__DestroyStatic @ 0x801D9040 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK Platform__ConstructOrDestroyStatic(M2C_UNK, M2C_UNK); /* extern */

void Platform__DestroyStatic(void) {
    Platform__ConstructOrDestroyStatic(0, 0xFFFF);
}
