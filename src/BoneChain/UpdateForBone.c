/* BoneChain__UpdateForBone @ 0x801DC088 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Profiler__BeginSection(s32);
M2C_UNK DynamicBoneChain__Update(void *, f32, s32); /* extern */
M2C_UNK Profiler__EndSection(M2C_UNK);              /* extern */

void BoneChain__UpdateForBone(void *arg0, void *arg1) {
    s32 temp_r30;
    void *temp_r9;

    temp_r30 = M2C_FIELD(arg0, s32 *, 0x188);
    if (temp_r30 == 0) {
        Profiler__BeginSection(0x1E);
        if (M2C_FIELD(arg1, s32 *, 8) & 0x8000) {
            temp_r9 = M2C_FIELD(arg0, void **, 0x34);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x38));
            M2C_FIELD(arg1, s16 *, 2) = (s16) temp_r30;
        } else {
            DynamicBoneChain__Update(arg0, M2C_FIELD(arg0, f32 *, 0x180), M2C_FIELD(arg0, s32 *, 0x184));
        }
        Profiler__EndSection(0x1E);
    }
}
