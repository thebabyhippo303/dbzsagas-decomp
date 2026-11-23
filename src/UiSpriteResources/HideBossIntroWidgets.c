/* UiSpriteResources__HideBossIntroWidgets @ 0x8000E0E4 (size: 0x1FC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void UiSpriteResources__HideOverlayRows(void *);
void UiSpriteResources__UpdateOverlayRowWidgets(void *);
void UiSpriteResources__HideBossIntroWidgets(void *arg0) {
    void *temp_r19;
    void *temp_r20;
    void *temp_r21;
    void *temp_r22;
    void *temp_r23;
    void *temp_r24;
    void *temp_r25;
    void *temp_r26;
    void *temp_r28;
    void *temp_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;
    void *temp_r9_13;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x7C94);
    temp_r29 = arg0 + 0x7AF8;
    temp_r28 = arg0 + 0x7CEC;
    temp_r26 = arg0 + 0x7EE0;
    temp_r25 = arg0 + 0x698;
    temp_r24 = arg0 + 0x1728;
    temp_r23 = arg0 + 0x27B8;
    temp_r22 = arg0 + 0x3848;
    temp_r21 = arg0 + 0x48D8;
    temp_r20 = arg0 + 0x5968;
    temp_r19 = arg0 + 0x69F8;
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1DC)(temp_r29 + M2C_FIELD(temp_r9, s16 *, 0x1D8));
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x7C94);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1E4)(temp_r29 + M2C_FIELD(temp_r9_2, s16 *, 0x1E0));
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x7C94);
    temp_r3 = M2C_FIELD(temp_r9_3, void *(**)(void *), 0x38C)(temp_r29 + M2C_FIELD(temp_r9_3, s16 *, 0x388));
    temp_r9_4 = M2C_FIELD(temp_r3, void **, 8);
    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x1C)(temp_r3 + M2C_FIELD(temp_r9_4, s16 *, 0x18));
    temp_r9_5 = M2C_FIELD(arg0, void **, 0x7C94);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x3C)(temp_r29 + M2C_FIELD(temp_r9_5, s16 *, 0x38));
    temp_r9_6 = M2C_FIELD(arg0, void **, 0x7E88);
    M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *), 0x1DC)(temp_r28 + M2C_FIELD(temp_r9_6, s16 *, 0x1D8));
    temp_r9_7 = M2C_FIELD(arg0, void **, 0x7E88);
    M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x1E4)(temp_r28 + M2C_FIELD(temp_r9_7, s16 *, 0x1E0));
    temp_r9_8 = M2C_FIELD(arg0, void **, 0x7E88);
    temp_r3_2 = M2C_FIELD(temp_r9_8, void *(**)(void *), 0x38C)(temp_r28 + M2C_FIELD(temp_r9_8, s16 *, 0x388));
    temp_r9_9 = M2C_FIELD(temp_r3_2, void **, 8);
    M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *), 0x1C)(temp_r3_2 + M2C_FIELD(temp_r9_9, s16 *, 0x18));
    temp_r9_10 = M2C_FIELD(arg0, void **, 0x7E88);
    M2C_FIELD(temp_r9_10, M2C_UNK (**)(void *), 0x3C)(temp_r28 + M2C_FIELD(temp_r9_10, s16 *, 0x38));
    temp_r9_11 = M2C_FIELD(arg0, void **, 0x807C);
    M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *), 0x1DC)(temp_r26 + M2C_FIELD(temp_r9_11, s16 *, 0x1D8));
    temp_r9_12 = M2C_FIELD(arg0, void **, 0x807C);
    M2C_FIELD(temp_r9_12, M2C_UNK (**)(void *), 0x1E4)(temp_r26 + M2C_FIELD(temp_r9_12, s16 *, 0x1E0));
    temp_r9_13 = M2C_FIELD(arg0, void **, 0x807C);
    M2C_FIELD(temp_r9_13, M2C_UNK (**)(void *), 0x3C)(temp_r26 + M2C_FIELD(temp_r9_13, s16 *, 0x38));
    UiSpriteResources__HideOverlayRows(temp_r25);
    UiSpriteResources__UpdateOverlayRowWidgets(temp_r25);
    UiSpriteResources__HideOverlayRows(temp_r24);
    UiSpriteResources__UpdateOverlayRowWidgets(temp_r24);
    UiSpriteResources__HideOverlayRows(temp_r23);
    UiSpriteResources__UpdateOverlayRowWidgets(temp_r23);
    UiSpriteResources__HideOverlayRows(temp_r22);
    UiSpriteResources__UpdateOverlayRowWidgets(temp_r22);
    UiSpriteResources__HideOverlayRows(temp_r21);
    UiSpriteResources__UpdateOverlayRowWidgets(temp_r21);
    UiSpriteResources__HideOverlayRows(temp_r20);
    UiSpriteResources__UpdateOverlayRowWidgets(temp_r20);
    UiSpriteResources__HideOverlayRows(temp_r19);
    UiSpriteResources__UpdateOverlayRowWidgets(temp_r19);
}
