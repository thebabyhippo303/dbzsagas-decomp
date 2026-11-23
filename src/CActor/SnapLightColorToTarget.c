/* CActor__SnapLightColorToTarget @ 0x801DDC9C (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void CActor__SnapLightColorToTarget(void *arg0) {
    void *temp_r9;
    void *temp_r11;
    register s32 temp_r8;
    register s32 temp_r0;
    register s32 temp_r10;
    register s32 temp_r7;

    temp_r8 = M2C_FIELD(arg0, s32 *, 0xF8);
    temp_r9 = arg0 + 0xF8;
    temp_r10 = M2C_FIELD(temp_r9, s32 *, 4);
    temp_r11 = arg0 + 0xEC;
    temp_r0 = M2C_FIELD(temp_r9, s32 *, 8);
    temp_r7 = 1;
    M2C_FIELD(arg0, s32 *, 0xEC) = temp_r8;
    M2C_FIELD(temp_r11, s32 *, 4) = temp_r10;
    M2C_FIELD(temp_r11, s32 *, 8) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x104) = temp_r7;
}
