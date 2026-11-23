/* Profiler__AccumulateSection @ 0x801858C4 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern s32 lbl_803DCBC8;
extern s32 lbl_803DCBD8;
extern s32 lbl_803DD4DC;

void Profiler__AccumulateSection(s32 arg0) {
    s32 temp_r9;
    s32 var_r11;
    void *temp_r3;

    temp_r3 = (arg0 * 0x228) + lbl_803DCBC8;
    var_r11 = lbl_803DD4DC - M2C_FIELD(temp_r3, s32 *, 0x1D4);
    if (var_r11 < 0) {
        var_r11 = 0;
    }
    temp_r9 = lbl_803DCBD8 * 4;
    *(s32 *)(temp_r3 + temp_r9) = *(s32 *)(temp_r3 + temp_r9) + var_r11;
}
