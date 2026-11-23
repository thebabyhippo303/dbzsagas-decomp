/* StreamQueue__SetPaused @ 0x801949E0 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 StreamQueue__SetPaused(void *arg0, u32 arg1) {
    s32 var_r3;
    void *temp_r11;
    void *temp_r9;
    void *temp_r9_2;

    var_r3 = arg1;
    if (var_r3 != M2C_FIELD(arg0, s32 *, 0x84)) {
        temp_r11 = M2C_FIELD(arg0, void **, 0x80);
        M2C_FIELD(arg0, s32 *, 0x84) = var_r3;
        if (temp_r11 != NULL) {
            if (var_r3 != 0) {
                temp_r9 = M2C_FIELD(temp_r11, void **, 0x28);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x1C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x18), 0);
            } else {
                temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x28);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x14)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x10));
            }
        }
        var_r3 = M2C_FIELD(arg0, s32 *, 0x84);
    }
    return var_r3;
}
