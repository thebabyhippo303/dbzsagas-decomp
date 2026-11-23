/* SplinePath__GetDistanceAtPoint @ 0x801FE054 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


typedef struct { f32 x, y, z; } V3;

f32 SplinePath__GetDistanceAtPoint(void *arg0, V3 *arg1) {
    s32 var_r0;
    void *temp_r9;
    void *temp_r9_2;

    temp_r9 = arg0 + 0x30;
    var_r0 = 0;
    if ((M2C_FIELD(arg0, f32 *, 0x30) == M2C_FIELD(arg1, f32 *, 0)) && (M2C_FIELD(temp_r9, f32 *, 4) == M2C_FIELD(arg1, f32 *, 4))) {
        var_r0 = M2C_FIELD(temp_r9, f32 *, 8) == M2C_FIELD(arg1, f32 *, 8);
    }
    if (var_r0 == 0) {
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x14);
        M2C_FIELD(temp_r9_2, void (**)(void *, V3), 0x24)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x20), *arg1);
    }
    return M2C_FIELD(arg0, f32 *, 0x3C);
}
