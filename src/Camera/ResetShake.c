/* Camera__ResetShake @ 0x802A913C (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern f32 lbl_803512E4 __attribute__((section(".data")));

void Camera__ResetShake(void *arg0) {
    f32 v = lbl_803512E4;

    M2C_FIELD(arg0, f32 *, 0xC4) = v;
    M2C_FIELD(arg0, f32 *, 0xC8) = v;
    M2C_FIELD(arg0, f32 *, 0xCC) = v;
    M2C_FIELD(arg0, f32 *, 0xD0) = v;
}
