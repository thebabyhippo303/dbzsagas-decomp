/* InventoryMenu__DestroyWidgetGroups @ 0x8010DBE8 (size: 0x2E0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void InventoryMenu__DestroyWidgetGroups(void *arg0) {
    char *p_b84;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r30_3;
    s32 var_r30_4;
    s32 var_r30_5;
    s32 var_r30_6;
    s32 var_r30_7;
    s32 var_r31;
    s32 var_r31_2;
    s32 var_r31_3;
    s32 var_r31_4;
    s32 var_r31_5;
    s32 var_r31_7;
    void *temp_r11;
    void *temp_r11_10;
    void *temp_r11_11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r11_7;
    void *temp_r11_8;
    void *temp_r11_9;
    void *temp_r21;
    void *temp_r22;
    void *temp_r23;
    void *temp_r25;
    void *temp_r26;
    void *temp_r27;
    void *temp_r29;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;

    p_b84 = (char *)arg0 + 0xb84;
    temp_r11 = M2C_FIELD(p_b84, void **, 0x0);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    temp_r29 = arg0 + 0xB88;
    M2C_FIELD(p_b84, void **, 0x0) = NULL;
    temp_r27 = arg0 + 0xA44;
    temp_r26 = arg0 + 0xC34;
    temp_r25 = arg0 + 0xBB0;
    temp_r23 = arg0 + 0xCC0;
    temp_r22 = arg0 + 0xC5C;
    temp_r21 = arg0 + 0xCE0;
    var_r30 = 0;
    var_r31 = 8;
    do {
        temp_r11_2 = *(void * *)(var_r30 + temp_r29);
        if (temp_r11_2 != NULL) {
            temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
        }
        *(s32 *)(var_r30 + temp_r29) = 0;
        var_r31 -= 1;
        var_r30 += 4;
    } while (var_r31 != 0);
    var_r30_2 = 0;
    var_r31_2 = 0x50;
    do {
        temp_r11_3 = *(void * *)(var_r30_2 + temp_r27);
        if (temp_r11_3 != NULL) {
            temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
        }
        *(s32 *)(var_r30_2 + temp_r27) = 0;
        var_r31_2 -= 1;
        var_r30_2 += 4;
    } while (var_r31_2 != 0);
    temp_r11_4 = M2C_FIELD(arg0, void **, 0xC30);
    if (temp_r11_4 != NULL) {
        temp_r9_4 = M2C_FIELD(temp_r11_4, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0xC)(M2C_FIELD(temp_r9_4, s16 *, 8) + temp_r11_4, 3);
    }
    var_r30_3 = 0;
    M2C_FIELD(arg0, void **, 0xC30) = NULL;
    var_r31_3 = 8;
    do {
        temp_r11_5 = *(void * *)(var_r30_3 + temp_r26);
        if (temp_r11_5 != NULL) {
            temp_r9_5 = M2C_FIELD(temp_r11_5, void **, 0x19C);
            M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_5 + M2C_FIELD(temp_r9_5, s16 *, 8), 3);
        }
        *(s32 *)(var_r30_3 + temp_r26) = 0;
        var_r31_3 -= 1;
        var_r30_3 += 4;
    } while (var_r31_3 != 0);
    var_r30_4 = 0;
    for (var_r31_4 = 0; var_r31_4 < 0x20; var_r31_4 += 1) {
        temp_r11_6 = *(void * *)(var_r30_4 + temp_r25);
        if (temp_r11_6 != NULL) {
            temp_r9_6 = M2C_FIELD(temp_r11_6, void **, 0x19C);
            M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_6 + M2C_FIELD(temp_r9_6, s16 *, 8), 3);
        }
        *(s32 *)(var_r30_4 + temp_r25) = 0;
        var_r30_4 += 4;
    }
    temp_r11_7 = M2C_FIELD(arg0, void **, 0xCBC);
    if (temp_r11_7 != NULL) {
        temp_r9_7 = M2C_FIELD(temp_r11_7, void **, 0x19C);
        M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_7 + M2C_FIELD(temp_r9_7, s16 *, 8), 3);
    }
    M2C_FIELD(arg0, void **, 0xCBC) = NULL;
    var_r30_5 = 0;
    var_r31_5 = 8;
    do {
        temp_r11_8 = *(void * *)(var_r30_5 + temp_r23);
        if (temp_r11_8 != NULL) {
            temp_r9_8 = M2C_FIELD(temp_r11_8, void **, 0x19C);
            M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_8 + M2C_FIELD(temp_r9_8, s16 *, 8), 3);
        }
        *(s32 *)(var_r30_5 + temp_r23) = 0;
        var_r31_5 -= 1;
        var_r30_5 += 4;
    } while (var_r31_5 != 0);
    var_r30_6 = 0;
    var_r30_5 = 0x18;
    do {
        temp_r11_9 = *(void * *)(var_r30_6 + temp_r22);
        if (temp_r11_9 != NULL) {
            temp_r9_9 = M2C_FIELD(temp_r11_9, void **, 0x19C);
            M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_9 + M2C_FIELD(temp_r9_9, s16 *, 8), 3);
        }
        *(s32 *)(var_r30_6 + temp_r22) = 0;
        var_r30_5 -= 1;
        var_r30_6 += 4;
    } while (var_r30_5 != 0);
    var_r30_7 = 0;
    var_r31_7 = 4;
    do {
        temp_r11_10 = *(void * *)(var_r30_7 + temp_r21);
        if (temp_r11_10 != NULL) {
            temp_r9_10 = M2C_FIELD(temp_r11_10, void **, 0x19C);
            M2C_FIELD(temp_r9_10, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_10 + M2C_FIELD(temp_r9_10, s16 *, 8), 3);
        }
        *(s32 *)(var_r30_7 + temp_r21) = 0;
        var_r31_7 -= 1;
        var_r30_7 += 4;
    } while (var_r31_7 != 0);
    temp_r11_11 = M2C_FIELD(arg0, void **, 0xCF0);
    if (temp_r11_11 != NULL) {
        temp_r9_11 = M2C_FIELD(temp_r11_11, void **, 0x19C);
        M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_11 + M2C_FIELD(temp_r9_11, s16 *, 8), 3);
    }
    M2C_FIELD(arg0, void **, 0xCF0) = NULL;
}
