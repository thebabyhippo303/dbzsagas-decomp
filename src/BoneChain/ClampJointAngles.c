/* BoneChain__ClampJointAngles @ 0x801E26C0 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void BoneChain__ClampJointAngles(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    void *temp_r4;
    void *temp_r9;

    temp_f13 = M2C_FIELD(arg1, f32 *, 0xDC);
    temp_r9 = arg1 + 0xDC;
    if (!(temp_f13 <= M2C_FIELD(arg2, f32 *, 0))) {
        M2C_FIELD(arg2, f32 *, 0) = temp_f13;
    }
    temp_r4 = arg1 + 0xD0;
    temp_f13_2 = -M2C_FIELD(arg1, f32 *, 0xD0);
    if (!(temp_f13_2 <= M2C_FIELD(arg2, f32 *, 0))) {
        M2C_FIELD(arg2, f32 *, 0) = temp_f13_2;
    }
    temp_f13_3 = M2C_FIELD(temp_r9, f32 *, 4);
    if (!(temp_f13_3 <= M2C_FIELD(arg2, f32 *, 4))) {
        M2C_FIELD(arg2, f32 *, 4) = temp_f13_3;
    }
    temp_f0 = -M2C_FIELD(temp_r4, f32 *, 4);
    if (!(temp_f0 <= M2C_FIELD(arg2, f32 *, 4))) {
        M2C_FIELD(arg2, f32 *, 4) = temp_f0;
    }
    temp_f13_4 = M2C_FIELD(temp_r9, f32 *, 8);
    if (!(temp_f13_4 <= M2C_FIELD(arg2, f32 *, 8))) {
        M2C_FIELD(arg2, f32 *, 8) = temp_f13_4;
    }
    temp_f0_2 = -M2C_FIELD(temp_r4, f32 *, 8);
    if (!(temp_f0_2 <= M2C_FIELD(arg2, f32 *, 8))) {
        M2C_FIELD(arg2, f32 *, 8) = temp_f0_2;
    }
}
