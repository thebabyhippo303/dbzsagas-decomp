/* SoundDriver__UpdateLevelScopes @ 0x801934AC (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void SoundDriver__UpdateLevelScopes(void *arg0) {
    s32 var_r30;
    void **var_r31;
    void *temp_r11;
    void *temp_r9;

    var_r30 = 0;
    if (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
        var_r31 = arg0 + 0x10;
        do {
            temp_r11 = *var_r31;
            var_r30 += 1;
            var_r31 += 1;
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x24);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8));
        } while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0xC));
    }
}
