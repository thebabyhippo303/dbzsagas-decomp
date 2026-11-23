/* IconLabel__GetHeight @ 0x802618F0 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EzString__GetLength(void *);
float SphereText__GetTextHeight(void *);
extern float lbl_80349BBC __attribute__((section(".data")));

float IconLabel__GetHeight(void *arg0) {
    float h = lbl_80349BBC;
    float th = h;
    if (M2C_FIELD(arg0, s32 *, 452) != 0) {
        h = M2C_FIELD(arg0, float *, 480);
    }
    if (EzString__GetLength((char *)arg0 + 1268) > 0) {
        th = SphereText__GetTextHeight((char *)arg0 + 848);
    }
    if (M2C_BITWISE(s32, h) < M2C_BITWISE(s32, th)) {
        h = th;
    }
    return h;
}
