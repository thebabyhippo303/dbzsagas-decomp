/* Sphere__SetUVRect @ 0x8026CD98 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void Sphere__SetUVRect(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    M2C_FIELD(arg0, f32 *, 0x88) = farg0;
    M2C_FIELD(arg0, f32 *, 0x8C) = farg1;
    M2C_FIELD(arg0, f32 *, 0xA8) = farg2;
    M2C_FIELD(arg0, f32 *, 0xCC) = farg3;
    M2C_FIELD(arg0, f32 *, 0xE8) = farg0;
    M2C_FIELD(arg0, f32 *, 0xAC) = farg1;
    M2C_FIELD(arg0, f32 *, 0xC8) = farg2;
    M2C_FIELD(arg0, f32 *, 0xEC) = farg3;
}
