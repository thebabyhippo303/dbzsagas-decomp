/* Sphere__SetColorFromVector @ 0x8026C998 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef void (*SetColorFn)(void *, f32, f32, f32, f32);
void Sphere__SetColorFromVector(void *arg0, f32 *arg1) {
    char *vt = *(char **)((char *)arg0 + 412);
    f32 a = arg1[3];
    s16 adj = *(s16 *)(vt + 264);
    SetColorFn fn = *(SetColorFn *)(vt + 268);
    fn((char *)arg0 + adj, arg1[0], arg1[1], arg1[2], a);
}
