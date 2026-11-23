/* Sphere__SetClipQuad @ 0x8026E2A4 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__SetClipQuad(void *arg0, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f, f32 g, f32 h) {
    M2C_FIELD(arg0, f32 *, 240) = a;
    M2C_FIELD(arg0, f32 *, 244) = b;
    M2C_FIELD(arg0, f32 *, 248) = c;
    M2C_FIELD(arg0, f32 *, 252) = d;
    M2C_FIELD(arg0, f32 *, 256) = e;
    M2C_FIELD(arg0, f32 *, 260) = f;
    M2C_FIELD(arg0, f32 *, 264) = g;
    M2C_FIELD(arg0, f32 *, 268) = h;
}
