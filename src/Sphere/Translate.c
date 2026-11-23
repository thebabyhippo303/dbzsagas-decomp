/* Sphere__Translate @ 0x8026C708 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef void (*SetFF)(void *, f32, f32);
void Sphere__Translate(void *arg0, f32 farg0, f32 farg1) {
    void *tab = *(void **)((char *)arg0 + 412);
    ((SetFF)*(void **)((char *)tab + 172))(
        (char *)arg0 + *(s16 *)((char *)tab + 168),
        *(f32 *)((char *)arg0 + 36) + farg0,
        *(f32 *)((char *)arg0 + 40) + farg1);
}
