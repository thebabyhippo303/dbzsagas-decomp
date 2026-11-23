/* AABB__ContainsPoint @ 0x80200874 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 AABB__ContainsPoint(void *arg0, void *arg1) {
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    s32 var_r0;
    void *temp_r3;

    temp_f11 = M2C_FIELD(arg1, f32 *, 0);
    var_r0 = 0;
    if (!(temp_f11 < M2C_FIELD(arg0, f32 *, 0))) {
        temp_f12 = M2C_FIELD(arg1, f32 *, 4);
        if (!(temp_f12 < M2C_FIELD(arg0, f32 *, 4))) {
            temp_f13 = M2C_FIELD(arg1, f32 *, 8);
            if (!(temp_f13 < M2C_FIELD(arg0, f32 *, 8))) {
                temp_r3 = arg0 + 0xC;
                if (!(temp_f11 > M2C_FIELD(arg0, f32 *, 0xC)) && !(temp_f12 > M2C_FIELD(temp_r3, f32 *, 4))) {
                    var_r0 = temp_f13 <= M2C_FIELD(temp_r3, f32 *, 8);
                }
            }
        }
    }
    return var_r0;
}
