/* PathFollower__UpdateRestartDelay @ 0x802BEAD8 (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_80352728 __attribute__((section(".data")));

s32 PathFollower__UpdateRestartDelay(void *arg0, f32 farg0) {
    union { M2C_UNK value; unsigned char bytes[16]; } sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f31;
    void *temp_r11;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x70);
        temp_f31 = lbl_80352728;
        if (!(temp_f0 <= temp_f31)) {
            temp_f0_2 = temp_f0 - farg0;
            M2C_FIELD(arg0, f32 *, 0x70) = temp_f0_2;
            if (!(temp_f0_2 > temp_f31)) {
                temp_r11 = M2C_FIELD(arg0, void **, 0);
                temp_r9 = M2C_FIELD(temp_r11, void **, 0x34);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x64)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x60), 0);
                M2C_FIELD(arg0, f32 *, 0x70) = temp_f31;
                M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
                M2C_FIELD(arg0, f32 *, 0x1C) = temp_f31;
            }
        }
    }
    temp_r9_2 = M2C_FIELD(arg0, void **, 0xB4);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32), 0x5C)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x58), farg0);
    temp_r9_3 = M2C_FIELD(arg0, void **, 0xB4);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32), 0x54)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x50), farg0);
    temp_r9_4 = M2C_FIELD(arg0, void **, 0xB4);
    M2C_FIELD(temp_r9_4, M2C_UNK (**)(M2C_UNK *, void *), 0x3C)(((M2C_UNK *)sp8.bytes), arg0 + M2C_FIELD(temp_r9_4, s16 *, 0x38));
    temp_r9_5 = M2C_FIELD(arg0, void **, 0xB4);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x44)(arg0 + M2C_FIELD(temp_r9_5, s16 *, 0x40));
    return 1;
}
