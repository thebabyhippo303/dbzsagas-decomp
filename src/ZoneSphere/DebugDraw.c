/* ZoneSphere__DebugDraw @ 0x8025E6B0 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void DebugDraw__Sphere(void *, s32, f32);
void ZoneSphere__DebugDraw(void *arg0) {
    char *vt;
    vt = *(char **)((char *)arg0 + 4);
    if (((void *(*)(void *))*(void **)(vt + 44))((char *)arg0 + *(s16 *)(vt + 40)) != NULL) {
        DebugDraw__Sphere((char *)arg0 + 8, 0, *(f32 *)((char *)arg0 + 20));
    }
    else {
        DebugDraw__Sphere((char *)arg0 + 8, 2, *(f32 *)((char *)arg0 + 20));
    }
}
