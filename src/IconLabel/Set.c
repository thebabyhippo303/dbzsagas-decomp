/* IconLabel__Set @ 0x802617A0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__InitWithTexture(void *, void *, void *, s32, s32, s32);
void SphereText__SetText(void *, void *);

void IconLabel__Set(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    Sphere__InitWithTexture((char *)arg0 + 432, arg2, arg3, 0, 1, 1);
    SphereText__SetText((char *)arg0 + 848, arg1);
    M2C_FIELD(arg0, void **, 424) = arg3;
    M2C_FIELD(arg0, void **, 428) = arg4;
}
