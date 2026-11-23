/* ZoneSphere__IntersectsRect @ 0x8025E520 (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK ZoneSphere__IntersectsSegmentXZ(s32, f32, f32, f32, f32);
s32 ZoneSphere__IntersectsRect(void *arg0, void *arg1) {
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 var_r0;
    s32 var_r29;

    temp_f13 = M2C_FIELD(arg0, f32 *, 8);
    var_r29 = 0;
    var_r0 = 0;
    temp_f12 = M2C_FIELD(arg0, f32 *, 0x10);
    if (!(temp_f13 < M2C_FIELD(arg1, f32 *, 0)) && !(temp_f13 > M2C_FIELD(arg1, f32 *, 8)) && !(temp_f12 < M2C_FIELD(arg1, f32 *, 4))) {
        var_r0 = temp_f12 <= M2C_FIELD(arg1, f32 *, 0xC);
    }
    if ((var_r0 != 0) || (temp_f2 = M2C_FIELD(arg1, f32 *, 4), ((ZoneSphere__IntersectsSegmentXZ((s32) arg0, M2C_FIELD(arg1, f32 *, 0), temp_f2, M2C_FIELD(arg1, f32 *, 8), temp_f2) == 0) == 0)) || (temp_f1 = M2C_FIELD(arg1, f32 *, 8), ((ZoneSphere__IntersectsSegmentXZ((s32) arg0, temp_f1, M2C_FIELD(arg1, f32 *, 4), temp_f1, M2C_FIELD(arg1, f32 *, 0xC)) == 0) == 0)) || (temp_f2_2 = M2C_FIELD(arg1, f32 *, 0xC), ((ZoneSphere__IntersectsSegmentXZ((s32) arg0, M2C_FIELD(arg1, f32 *, 8), temp_f2_2, M2C_FIELD(arg1, f32 *, 0), temp_f2_2) == 0) == 0)) || (temp_f1_2 = M2C_FIELD(arg1, f32 *, 0), ((ZoneSphere__IntersectsSegmentXZ((s32) arg0, temp_f1_2, M2C_FIELD(arg1, f32 *, 0xC), temp_f1_2, M2C_FIELD(arg1, f32 *, 4)) == 0) == 0))) {
        var_r29 = 1;
    }
    return var_r29;
}
