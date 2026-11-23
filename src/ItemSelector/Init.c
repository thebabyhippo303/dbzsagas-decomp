/* ItemSelector__Init @ 0x80265E58 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern void Sphere__InitWithTexture(void *dst, s32 a, s32 b, s32 c, s32 d, s32 e);
typedef struct ItemSelector { char pad[27484]; s32 f27484; } ItemSelector;
s32 ItemSelector__Init(ItemSelector *this, s32 arg1, s32 arg2, s32 arg3) {
    Sphere__InitWithTexture((char *)this + 436, arg2, arg3, 0, 1, 1);
    Sphere__InitWithTexture((char *)this + 12184, arg2, arg3 + 9, 0, 1, 1);
    this->f27484 = arg1;
    return 1;
}
