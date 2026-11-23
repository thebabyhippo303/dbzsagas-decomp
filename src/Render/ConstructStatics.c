/* Render__ConstructStatics @ 0x80250CD8 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern void Render__ConstructOrDestroyStatics(s32 a, s32 b);
void Render__ConstructStatics(void) {
    Render__ConstructOrDestroyStatics(1, 0xFFFF);
}
