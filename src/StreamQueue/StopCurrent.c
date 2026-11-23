/* StreamQueue__StopCurrent @ 0x801953DC (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_8033F5CC __attribute__((section(".data")));

void StreamQueue__StopCurrent(void *arg0) {
    M2C_UNK (*temp_r0)(s32);
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r9;
    void *temp_r9_2;
    register void *cur;

    cur = M2C_FIELD(arg0, void **, 0x80);
    if (cur != NULL) {
        temp_r0 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x94);
        if (temp_r0 != NULL) {
            temp_r0(M2C_FIELD(arg0, s32 *, 0x98));
            M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x94) = NULL;
        }
        temp_r10 = M2C_FIELD(arg0, void **, 0x80);
        temp_r11 = M2C_FIELD(temp_r10, void **, 0x28);
        M2C_FIELD(temp_r11, M2C_UNK (**)(void *, f32), 0x3C)(temp_r10 + M2C_FIELD(temp_r11, s16 *, 0x38), lbl_8033F5CC);
        temp_r11_2 = M2C_FIELD(arg0, void **, 0x80);
        temp_r9 = M2C_FIELD(temp_r11_2, void **, 0x28);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x1C)(temp_r11_2 + M2C_FIELD(temp_r9, s16 *, 0x18), 0);
        temp_r11_3 = M2C_FIELD(arg0, void **, 0x80);
        if (temp_r11_3 != NULL) {
            temp_r9_2 = M2C_FIELD(temp_r11_3, void **, 0x28);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_3 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
        }
        M2C_FIELD(arg0, void **, 0x80) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = 2;
}
