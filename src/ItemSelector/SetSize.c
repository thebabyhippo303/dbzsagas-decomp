/* ItemSelector__SetSize @ 0x802661C8 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void Sphere__SetSize(void *);
s32 ItemSelector__SetSize(void *arg0) {
    Sphere__SetSize((char *)arg0 + 12184);
}
