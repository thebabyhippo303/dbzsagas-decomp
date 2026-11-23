/* MissionProgressListener__Activate @ 0x8011E4A8 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void MissionProgressListener__Activate(void *arg0) {
    s32 var_r30;
    s32 var_r29;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    M2C_FIELD(arg0, s32 *, 0x60) = 1;
    var_r30 = 0;
    if (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 4)) {
        var_r29 = 0;
        do {
            var_r30 += 1;
            temp_r3 = var_r29 + M2C_FIELD(arg0, s32 *, 0x44);
            temp_r9 = M2C_FIELD(temp_r3, void **, 0x19C);
            var_r29 += 0x1A0;
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1CC)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x1C8));
        } while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 4));
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0x50);
    if (temp_r11 != NULL) {
        temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1CC)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x1C8));
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x48);
    if (temp_r11_2 != NULL) {
        temp_r9_3 = M2C_FIELD(temp_r11_2, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x1CC)(temp_r11_2 + M2C_FIELD(temp_r9_3, s16 *, 0x1C8));
    }
    temp_r11_3 = M2C_FIELD(arg0, void **, 0x4C);
    if (temp_r11_3 != NULL) {
        temp_r9_4 = M2C_FIELD(temp_r11_3, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x1CC)(temp_r11_3 + M2C_FIELD(temp_r9_4, s16 *, 0x1C8));
    }
    temp_r9_5 = M2C_FIELD(arg0, void **, 0x64);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0xC)(arg0 + M2C_FIELD(temp_r9_5, s16 *, 8));
}
