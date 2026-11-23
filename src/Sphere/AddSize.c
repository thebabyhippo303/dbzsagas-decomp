/* Sphere__AddSize @ 0x8026C6AC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef void (*AddSizeFn)(void *, f32, f32);
void Sphere__AddSize(void *arg0, f32 arg1, f32 arg2) {
    char *t = *(char **)((char *)arg0 + 412);
    AddSizeFn fn = *(AddSizeFn *)(t + 140);
    fn((char *)arg0 + *(s16 *)(t + 136), *(f32 *)((char *)arg0 + 44) + arg1, *(f32 *)((char *)arg0 + 48) + arg2);
}
