/* Sphere__Update @ 0x8026BFF8 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef void (*VFn)(void *);
extern float lbl_80349F0C __attribute__((section(".data")));

void Sphere__Update(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 276) != 0) {
        if (M2C_FIELD(arg0, float *, 80) != lbl_80349F0C) {
            goto three;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        ((VFn)M2C_FIELD(M2C_FIELD(arg0, void **, 412), void **, 84))((char *)arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 412), s16 *, 80));
    } else {
    three:
        ((VFn)M2C_FIELD(M2C_FIELD(arg0, void **, 412), void **, 844))((char *)arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 412), s16 *, 840));
        ((VFn)M2C_FIELD(M2C_FIELD(arg0, void **, 412), void **, 748))((char *)arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 412), s16 *, 744));
        ((VFn)M2C_FIELD(M2C_FIELD(arg0, void **, 412), void **, 764))((char *)arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 412), s16 *, 760));
    }
}
