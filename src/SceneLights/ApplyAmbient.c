/* SceneLights__ApplyAmbient @ 0x8021A6C4 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Gfx__SetAmbientColor(void *);
void SceneLights__SetAmbientIntensity(f32);
void SceneLights__ApplyAmbient(void *arg0, f32 farg0) {
    s32 c[3];
    s32 *p = c;
    c[0] = ((s32 *) arg0)[0];
    p[1] = ((s32 *) arg0)[1];
    p[2] = ((s32 *) arg0)[2];
    Gfx__SetAmbientColor(p);
    SceneLights__SetAmbientIntensity(farg0);
}
