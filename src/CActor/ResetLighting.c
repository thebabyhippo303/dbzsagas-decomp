/* CActor__ResetLighting @ 0x801DD5CC (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_80343BB8 __attribute__((section(".data")));
extern f32 lbl_80343BBC __attribute__((section(".data")));
extern f32 lbl_80343BC0 __attribute__((section(".data")));

void CActor__ResetLighting(char *arg0) {
    f32 a = lbl_80343BB8;
    f32 b = lbl_80343BBC;
    f32 c = lbl_80343BC0;

    M2C_FIELD(arg0, f32 *, 0xCC) = a;
    M2C_FIELD(arg0, f32 *, 0xD0) = a;
    M2C_FIELD(arg0, u32 *, 0xD4) = 1;
    M2C_FIELD(arg0, f32 *, 0xD8) = b;
    M2C_FIELD(arg0, f32 *, 0xEC) = a;
    M2C_FIELD(arg0, u32 *, 0x104) = 1;
    M2C_FIELD(arg0, f32 *, 0x108) = c;
    M2C_FIELD(arg0, f32 *, 0xF0) = a;
    M2C_FIELD(arg0, f32 *, 0xF4) = a;
    M2C_FIELD(arg0, f32 *, 0xC0) = a;
    M2C_FIELD(arg0, u16 *, 0xBC) = -1;
    M2C_FIELD(arg0, f32 *, 0xC4) = a;
    M2C_FIELD(arg0, f32 *, 0xC8) = a;
}
