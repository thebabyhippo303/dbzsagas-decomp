/* Voice3D__GetMinDistance @ 0x8019C2E4 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern float SoundDef__GetMinDistance(void *def);
extern float lbl_8033FBA4 __attribute__((section(".data")));
extern float lbl_8033FBA8 __attribute__((section(".data")));

float Voice3D__GetMinDistance(char *self) {
    float v = *(float *)(self + 0x90) + SoundDef__GetMinDistance(*(void **)(self + 4));
    float lo = lbl_8033FBA4;
    float hi = lbl_8033FBA8;
    float r;
    if (!(v >= lo)) {
        r = lo;
    } else if (!(v <= hi)) {
        r = hi;
    } else {
        r = v;
    }
    return r;
}
