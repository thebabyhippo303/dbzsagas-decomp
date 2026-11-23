/* HUD__HideAllPlayerWidgets @ 0x800FFB74 (size: 0x3AC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_80325154 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void HUD__HideAllPlayerWidgets(s32 arg0) {
    f32 temp_f31;
    s32 var_r29;
    s32 var_r29_2;
    s32 var_r29_3;
    s32 var_r31;
    s32 var_r31_3;
    s32 var_r31_4;
    s32 var_r31_5;
    void **var_r31_2;
    void *temp_r11;
    void *temp_r11_10;
    void *temp_r11_11;
    void *temp_r11_12;
    void *temp_r11_13;
    void *temp_r11_14;
    void *temp_r11_15;
    void *temp_r11_16;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r11_7;
    void *temp_r11_8;
    void *temp_r11_9;
    void *temp_r30;
    char *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;
    void *temp_r9_13;
    void *temp_r9_14;
    void *temp_r9_15;
    void *temp_r9_16;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;

    var_r31 = 0;
    if (var_r31 < (s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x10)) {
        temp_f31 = lbl_80325154;
        do {
            temp_r30 = arg0 + ((var_r31 * 0x50C) + 0x1268);
            temp_r11 = M2C_FIELD(temp_r30, void **, 0x2C0);
            if (temp_r11 != NULL) {
                temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x198), temp_f31, temp_f31);
            }
            var_r31_2 = temp_r30 + 0x2B0;
loop_5:
            temp_r11_2 = *var_r31_2;
            var_r31_2 += 4;
            if (temp_r11_2 != NULL) {
                temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x19C)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x198));
            }
            if (var_r31_2 <= (void *) (temp_r30 + 0x2BC)) {
                goto loop_5;
            }
            var_r29 = 2;
            var_r31_3 = 0;
loop_9:
            temp_r11_3 = *(void * *)(var_r31_3 + (temp_r30 + 0xC4));
            if (temp_r11_3 != NULL) {
                temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
                M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 0x198), temp_f31, temp_f31);
            }
            temp_r11_4 = *(void * *)(var_r31_3 + (temp_r30 + 0x1A8));
            if (temp_r11_4 != NULL) {
                temp_r9_4 = M2C_FIELD(temp_r11_4, void **, 0x19C);
                M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_4 + M2C_FIELD(temp_r9_4, s16 *, 0x198), temp_f31, temp_f31);
            }
            temp_r11_5 = *(void * *)(var_r31_3 + (temp_r30 + 0x28C));
            if (temp_r11_5 != NULL) {
                temp_r9_5 = M2C_FIELD(temp_r11_5, void **, 0x19C);
                M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_5 + M2C_FIELD(temp_r9_5, s16 *, 0x198), temp_f31, temp_f31);
            }
            var_r31_3 += 4;
            var_r29 -= 1;
            if (var_r29 != 0) {
                goto loop_9;
            }
            var_r29_2 = 0x30;
            var_r31_4 = 0;
loop_17:
            temp_r11_6 = *(void * *)(var_r31_4 + (temp_r30 + 4));
            if (temp_r11_6 != NULL) {
                temp_r9_6 = M2C_FIELD(temp_r11_6, void **, 0x19C);
                M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *), 0x19C)(temp_r11_6 + M2C_FIELD(temp_r9_6, s16 *, 0x198));
            }
            temp_r11_7 = *(void * *)(var_r31_4 + (temp_r30 + 0xE8));
            if (temp_r11_7 != NULL) {
                temp_r9_7 = M2C_FIELD(temp_r11_7, void **, 0x19C);
                M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_7 + M2C_FIELD(temp_r9_7, s16 *, 0x198), temp_f31, temp_f31);
            }
            temp_r11_8 = *(void * *)(var_r31_4 + (temp_r30 + 0x1CC));
            if (temp_r11_8 != NULL) {
                temp_r9_8 = M2C_FIELD(temp_r11_8, void **, 0x19C);
                M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_8 + M2C_FIELD(temp_r9_8, s16 *, 0x198), temp_f31, temp_f31);
            }
            var_r31_4 += 4;
            var_r29_2 -= 1;
            if (var_r29_2 != 0) {
                goto loop_17;
            }
            var_r31_5 = 0;
            var_r29_3 = 0xB;
loop_25:
            temp_r11_9 = *(void * *)(var_r31_5 + (temp_r30 + 0x450));
            if (temp_r11_9 != NULL) {
                temp_r9_9 = M2C_FIELD(temp_r11_9, void **, 0x19C);
                M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_9 + M2C_FIELD(temp_r9_9, s16 *, 0x198), temp_f31, temp_f31);
            }
            temp_r11_10 = *(void * *)(var_r31_5 + (temp_r30 + 0x47C));
            if (temp_r11_10 != NULL) {
                temp_r9_10 = M2C_FIELD(temp_r11_10, void **, 0x19C);
                M2C_FIELD(temp_r9_10, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_10 + M2C_FIELD(temp_r9_10, s16 *, 0x198), temp_f31, temp_f31);
            }
            temp_r11_11 = *(void * *)(var_r31_5 + (temp_r30 + 0x4A8));
            if (temp_r11_11 != NULL) {
                temp_r9_11 = M2C_FIELD(temp_r11_11, void **, 0x19C);
                M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_11 + M2C_FIELD(temp_r9_11, s16 *, 0x198), temp_f31, temp_f31);
            }
            var_r31_5 += 4;
            var_r29_3 -= 1;
            if (var_r29_3 != 0) {
                goto loop_25;
            }
            temp_r11_12 = M2C_FIELD(temp_r30, void **, 0x4D4);
            if (temp_r11_12 != NULL) {
                temp_r9_12 = M2C_FIELD(temp_r11_12, void **, 0x19C);
                M2C_FIELD(temp_r9_12, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_12 + M2C_FIELD(temp_r9_12, s16 *, 0x198), temp_f31, temp_f31);
            }
            temp_r11_13 = M2C_FIELD(temp_r30, void **, 0x4D8);
            if (temp_r11_13 != NULL) {
                temp_r9_13 = M2C_FIELD(temp_r11_13, void **, 0x19C);
                M2C_FIELD(temp_r9_13, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_13 + M2C_FIELD(temp_r9_13, s16 *, 0x198), temp_f31, temp_f31);
            }
            temp_r11_14 = M2C_FIELD(temp_r30, void **, 0x2C4);
            if (temp_r11_14 != NULL) {
                temp_r9_14 = M2C_FIELD(temp_r11_14, void **, 0x19C);
                M2C_FIELD(temp_r9_14, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_14 + M2C_FIELD(temp_r9_14, s16 *, 0x198), temp_f31, temp_f31);
            }
            temp_r11_15 = M2C_FIELD(temp_r30, void **, 0x2C8);
            if (temp_r11_15 != NULL) {
                temp_r9_15 = M2C_FIELD(temp_r11_15, void **, 0x19C);
                M2C_FIELD(temp_r9_15, M2C_UNK (**)(void *), 0x19C)(temp_r11_15 + M2C_FIELD(temp_r9_15, s16 *, 0x198));
            }
            temp_r11_16 = M2C_FIELD(temp_r30, void **, 0x2CC);
            if (temp_r11_16 != NULL) {
                temp_r9_16 = M2C_FIELD(temp_r11_16, void **, 0x19C);
                M2C_FIELD(temp_r9_16, M2C_UNK (**)(void *, f32, f32), 0x19C)(temp_r11_16 + M2C_FIELD(temp_r9_16, s16 *, 0x198), temp_f31, temp_f31);
            }
            var_r31 += 1;
        } while (var_r31 < M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x10));
    }
}
