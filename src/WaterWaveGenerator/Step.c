/* WaterWaveGenerator__Step @ 0x80293B88 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern f32 lbl_8034F93C __attribute__((section(".data")));

s32 WaterWaveGenerator__Step(void *arg0, f32 arg1) {
    void *p = arg0;
    f32 z = lbl_8034F93C;
    f32 v = M2C_FIELD(p, f32 *, 28);

    if (v != z) {
        v -= arg1;
        M2C_FIELD(p, f32 *, 28) = v;
        if (v <= z) {
            return 1;
        }
    }
    return 0;
}
