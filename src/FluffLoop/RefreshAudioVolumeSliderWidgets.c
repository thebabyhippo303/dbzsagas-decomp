/* FluffLoop__RefreshAudioVolumeSliderWidgets @ 0x80055E08 (size: 0x510, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_8031A830 __attribute__((section(".data")));
extern f32 lbl_8031A834 __attribute__((section(".data")));
extern f32 lbl_8031A838 __attribute__((section(".data")));
extern f32 lbl_8031A83C __attribute__((section(".data")));
extern f32 lbl_8031A840 __attribute__((section(".data")));
extern f32 lbl_8031A844 __attribute__((section(".data")));
extern f32 lbl_8031A848 __attribute__((section(".data")));

void FluffLoop__RefreshAudioVolumeSliderWidgets(void *arg0) {
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f31_2;
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r30_3;
    s32 var_r25;
    s32 var_r26;
    s32 var_r27;
    s32 var_r28;
    void *temp_r30_4;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;
    void *temp_r9_13;
    void *temp_r9_14;
    void *temp_r9_15;
    void *temp_r9_16;
    void *temp_r9_17;
    void *temp_r9_18;
    void *temp_r9_19;
    void *temp_r9_20;
    void *temp_r9_21;
    void *temp_r9_22;
    void *temp_r9_23;
    void *temp_r9_24;
    void *temp_r9_25;
    void *temp_r9_26;
    void *temp_r9_27;
    void *temp_r9_28;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r31;

    temp_f30 = lbl_8031A830;
    var_r26 = arg0 + 0x17580;
    temp_f29 = lbl_8031A844;
    var_r25 = 0;
    var_r31 = arg0 + 0x19600;
    var_r27 = arg0 + 0x185C0;
    var_r28 = arg0 + 0x16540;
    do {
        temp_r9 = M2C_FIELD(var_r31, void **, -0x1EE4);
        M2C_FIELD(temp_r9, M2C_UNK (**)(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x74)(var_r26 + M2C_FIELD(temp_r9, s16 *, 0x70), 0x12345678, 0, 1, 1);
        temp_r9_2 = M2C_FIELD(var_r31, void **, -0x1EE4);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(s32), 0x84)(var_r26 + M2C_FIELD(temp_r9_2, s16 *, 0x80));
        temp_r9_3 = M2C_FIELD(var_r31, void **, -0x1EE4);
        temp_r30 = var_r26 + M2C_FIELD(temp_r9_3, s16 *, 0xF0);
        temp_f31 = (f32) (f64) var_r25;
        M2C_FIELD((temp_r9_3 + 0xF0), M2C_UNK (**)(s32, f32, f32), 4)(temp_r30, (M2C_FIELD(temp_r9_3, f32 (**)(s32), 0x234)(var_r26 + M2C_FIELD(temp_r9_3, s16 *, 0x230)) * temp_f31) + temp_f30, lbl_8031A834);
        temp_r9_4 = M2C_FIELD(var_r31, void **, -0x1EE4);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(s32, f32, f32, f32, f32), 0x10C)(var_r26 + M2C_FIELD(temp_r9_4, s16 *, 0x108), lbl_8031A838, lbl_8031A838, lbl_8031A838, lbl_8031A838);
        temp_r9_5 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9_5, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(var_r26 + M2C_FIELD(temp_r9_5, s16 *, 0x1B0), 0x6000);
        temp_r9_6 = M2C_FIELD(var_r31, void **, -0x1EE4);
        M2C_FIELD(temp_r9_6, M2C_UNK (**)(s32), 0x1DC)(var_r26 + M2C_FIELD(temp_r9_6, s16 *, 0x1D8));
        temp_r9_7 = M2C_FIELD(var_r31, void **, -0x2F24);
        M2C_FIELD(temp_r9_7, M2C_UNK (**)(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x74)(var_r28 + M2C_FIELD(temp_r9_7, s16 *, 0x70), 0x12345678, 0, 1, 1);
        temp_r9_8 = M2C_FIELD(var_r31, void **, -0x2F24);
        temp_r30_2 = var_r28 + M2C_FIELD(temp_r9_8, s16 *, 0xF0);
        M2C_FIELD((temp_r9_8 + 0xF0), M2C_UNK (**)(s32, f32, f32), 4)(temp_r30_2, (M2C_FIELD(temp_r9_8, f32 (**)(s32), 0x234)(var_r28 + M2C_FIELD(temp_r9_8, s16 *, 0x230)) * temp_f31) + temp_f30, lbl_8031A834);
        temp_r9_9 = M2C_FIELD(var_r31, void **, -0x2F24);
        M2C_FIELD(temp_r9_9, M2C_UNK (**)(s32), 0x84)(var_r28 + M2C_FIELD(temp_r9_9, s16 *, 0x80));
        temp_r9_10 = M2C_FIELD(var_r31, void **, -0x2F24);
        M2C_FIELD(temp_r9_10, M2C_UNK (**)(s32, f32, f32, f32, f32), 0x10C)(var_r28 + M2C_FIELD(temp_r9_10, s16 *, 0x108), lbl_8031A838, lbl_8031A838, lbl_8031A838, lbl_8031A838);
        temp_r9_11 = M2C_FIELD(var_r31, void **, -0x2F24);
        M2C_FIELD(temp_r9_11, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(var_r28 + M2C_FIELD(temp_r9_11, s16 *, 0x1B0), 0x6000);
        temp_r9_12 = M2C_FIELD(var_r31, void **, -0x2F24);
        M2C_FIELD(temp_r9_12, M2C_UNK (**)(s32), 0x1DC)(var_r28 + M2C_FIELD(temp_r9_12, s16 *, 0x1D8));
        temp_f11 = M2C_FIELD(arg0, f32 *, 0x1A658);
        if ((var_r25 < (s32) ((temp_f11 * lbl_8031A83C) + lbl_8031A840)) && !(temp_f11 <= temp_f29)) {
            temp_r9_13 = M2C_FIELD(var_r31, void **, -0x1EE4);
            M2C_FIELD(temp_r9_13, M2C_UNK (**)(s32), 0x1CC)(var_r26 + M2C_FIELD(temp_r9_13, s16 *, 0x1C8));
        } else {
            temp_r9_14 = M2C_FIELD(var_r31, void **, -0x2F24);
            M2C_FIELD(temp_r9_14, M2C_UNK (**)(s32), 0x1CC)(var_r28 + M2C_FIELD(temp_r9_14, s16 *, 0x1C8));
        }
        temp_r9_15 = M2C_FIELD(var_r31, void **, -0xEA4);
        M2C_FIELD(temp_r9_15, M2C_UNK (**)(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x74)(var_r27 + M2C_FIELD(temp_r9_15, s16 *, 0x70), 0x12345678, 0, 1, 1);
        temp_r9_16 = M2C_FIELD(var_r31, void **, -0xEA4);
        M2C_FIELD(temp_r9_16, M2C_UNK (**)(s32), 0x84)(var_r27 + M2C_FIELD(temp_r9_16, s16 *, 0x80));
        temp_r9_17 = M2C_FIELD(var_r31, void **, -0xEA4);
        temp_r30_3 = var_r27 + M2C_FIELD(temp_r9_17, s16 *, 0xF0);
        temp_f31_2 = (f32) (f64) var_r25;
        M2C_FIELD((temp_r9_17 + 0xF0), M2C_UNK (**)(s32, f32, f32), 4)(temp_r30_3, (M2C_FIELD(temp_r9_17, f32 (**)(s32), 0x234)(var_r27 + M2C_FIELD(temp_r9_17, s16 *, 0x230)) * temp_f31_2) + temp_f30, lbl_8031A848);
        temp_r9_18 = M2C_FIELD(var_r31, void **, -0xEA4);
        M2C_FIELD(temp_r9_18, M2C_UNK (**)(s32, f32, f32, f32, f32), 0x10C)(var_r27 + M2C_FIELD(temp_r9_18, s16 *, 0x108), lbl_8031A838, lbl_8031A838, lbl_8031A838, lbl_8031A838);
        temp_r9_19 = M2C_FIELD(var_r31, void **, -0xEA4);
        M2C_FIELD(temp_r9_19, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(var_r27 + M2C_FIELD(temp_r9_19, s16 *, 0x1B0), 0x6000);
        temp_r9_20 = M2C_FIELD(var_r31, void **, -0xEA4);
        M2C_FIELD(temp_r9_20, M2C_UNK (**)(s32), 0x1DC)(var_r27 + M2C_FIELD(temp_r9_20, s16 *, 0x1D8));
        temp_r9_21 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9_21, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x74)(var_r31 + M2C_FIELD(temp_r9_21, s16 *, 0x70), 0x12345678, 0, 1, 1);
        temp_r9_22 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9_22, M2C_UNK (**)(void *), 0x84)(var_r31 + M2C_FIELD(temp_r9_22, s16 *, 0x80));
        temp_r9_23 = M2C_FIELD(var_r31, void **, 0x19C);
        temp_r30_4 = var_r31 + M2C_FIELD(temp_r9_23, s16 *, 0xF0);
        M2C_FIELD((temp_r9_23 + 0xF0), M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_4, (M2C_FIELD(temp_r9_23, f32 (**)(void *), 0x234)(var_r31 + M2C_FIELD(temp_r9_23, s16 *, 0x230)) * temp_f31_2) + temp_f30, lbl_8031A848);
        temp_r9_24 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9_24, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(var_r31 + M2C_FIELD(temp_r9_24, s16 *, 0x108), lbl_8031A838, lbl_8031A838, lbl_8031A838, lbl_8031A838);
        temp_r9_25 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9_25, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(var_r31 + M2C_FIELD(temp_r9_25, s16 *, 0x1B0), 0x6000);
        temp_r9_26 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9_26, M2C_UNK (**)(void *), 0x1DC)(var_r31 + M2C_FIELD(temp_r9_26, s16 *, 0x1D8));
        temp_f11_2 = M2C_FIELD(arg0, f32 *, 0x1A65C);
        if ((var_r25 < (s32) ((temp_f11_2 * lbl_8031A83C) + lbl_8031A840)) && !(temp_f11_2 <= temp_f29)) {
            temp_r9_27 = M2C_FIELD(var_r31, void **, -0xEA4);
            M2C_FIELD(temp_r9_27, M2C_UNK (**)(s32), 0x1CC)(var_r27 + M2C_FIELD(temp_r9_27, s16 *, 0x1C8));
        } else {
            temp_r9_28 = M2C_FIELD(var_r31, void **, 0x19C);
            M2C_FIELD(temp_r9_28, M2C_UNK (**)(void *), 0x1CC)(var_r31 + M2C_FIELD(temp_r9_28, s16 *, 0x1C8));
        }
        var_r25 += 1;
        var_r31 += 0x1A0;
        var_r27 += 0x1A0;
        var_r28 += 0x1A0;
        var_r26 += 0x1A0;
    } while (var_r25 <= 9);
}
