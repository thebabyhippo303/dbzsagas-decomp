/* MissionUI__BuildProgressCounters @ 0x8012429C (size: 0x524, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Mem__New(s32);
s32 MissionStats__GetSummaryEntryByIndex(s32);
s32 MissionStats__GetSummaryEntryCount(void);
void * UI__ConstructAnimatedTextEffect(void *, void *);
void * sprintf(s8 *, void *, s8 *, s32);
extern M2C_UNK lbl_80321478 __attribute__((section(".data")));
extern M2C_UNK lbl_803274F4 __attribute__((section(".data")));
extern M2C_UNK lbl_803274FC __attribute__((section(".data")));
extern f32 lbl_80327504 __attribute__((section(".data")));
extern f32 lbl_80327508 __attribute__((section(".data")));

void MissionUI__BuildProgressCounters(void *arg0) {
    s32 temp_r23;
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r25;
    s32 var_r28;
    s8 *temp_r26;
    void *temp_r11;
    void *temp_r30_5;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r29_4;
    void *temp_r29_5;
    void *temp_r29_6;
    void *temp_r30;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r29;
    void *temp_r30_6;
    void *temp_r3_10;
    void *temp_r3_11;
    void *temp_r3_12;
    void *temp_r3_13;
    void *temp_r3_14;
    void *temp_r3_15;
    void *temp_r3_16;
    void *temp_r3_17;
    void *temp_r3_18;
    void *temp_r3_19;
    void *temp_r3_20;
    void *temp_r3_21;
    void *temp_r3_22;
    void *temp_r3_23;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;
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
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;

    temp_r31 = (s32) M2C_FIELD(arg0, f32 *, 0xB7BC);
    M2C_FIELD(arg0, s32 *, 0xB7AC) = temp_r31;
    temp_r23 = temp_r31 - 1;
    temp_r3 = MissionStats__GetSummaryEntryCount();
    if (temp_r23 < temp_r3) {
        var_r25 = temp_r23;
        if (var_r25 < temp_r31) {
            var_r28 = var_r25 * 0x1F4;
            do {
                temp_r3_2 = MissionStats__GetSummaryEntryByIndex(var_r25);
                temp_r11 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB084);
                temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x36C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x368), temp_r3_2 + 0x18);
                temp_r3_3 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB084);
                temp_r9_2 = M2C_FIELD(temp_r3_3, void **, 0x19C);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r3_3 + M2C_FIELD(temp_r9_2, s16 *, 0x108), lbl_80327504, lbl_80327504, lbl_80327504, lbl_80327504);
                temp_r3_4 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB084);
                temp_r9_3 = M2C_FIELD(temp_r3_4, void **, 0x19C);
                M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32), 0x3EC)(temp_r3_4 + M2C_FIELD(temp_r9_3, s16 *, 0x3E8), lbl_80327508);
                temp_r3_5 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB084);
                temp_r9_4 = M2C_FIELD(temp_r3_5, void **, 0x19C);
                M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r3_5 + M2C_FIELD(temp_r9_4, s16 *, 0x1B0), 0x6000);
                temp_r29 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB084);
                temp_r30 = M2C_FIELD(temp_r29, void **, 0x19C);
                temp_r29_2 = temp_r29 + M2C_FIELD(temp_r30, s16 *, 0x380);
                M2C_FIELD((temp_r30 + 0x380), M2C_UNK (**)(void *, void *), 4)(temp_r29_2, UI__ConstructAnimatedTextEffect(Mem__New(0x3C8), M2C_FIELD(arg0, s32 *, 0xB084) + var_r28));
                temp_r3_6 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB084);
                temp_r9_5 = M2C_FIELD(temp_r3_6, void **, 0x19C);
                temp_r3_7 = M2C_FIELD(temp_r9_5, void *(**)(void *), 0x38C)(temp_r3_6 + M2C_FIELD(temp_r9_5, s16 *, 0x388));
                temp_r9_6 = M2C_FIELD(temp_r3_7, void **, 8);
                M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *), 0x1C)(temp_r3_7 + M2C_FIELD(temp_r9_6, s16 *, 0x18));
                temp_r3_8 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB084);
                temp_r9_7 = M2C_FIELD(temp_r3_8, void **, 0x19C);
                M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x3C)(temp_r3_8 + M2C_FIELD(temp_r9_7, s16 *, 0x38));
                temp_r6 = M2C_FIELD(temp_r3_2, s32 *, 0x10);
                if (temp_r6 != -1) {
                    sprintf(arg0 + 0xB090, &lbl_803274F4, M2C_FIELD(temp_r3_2, s8 **, 8), temp_r6);
                } else if ((var_r25 == (s32) (temp_r3 - 1)) || (var_r25 == (s32) (temp_r3 - 2))) {
                    sprintf(arg0 + 0xB090, &lbl_803274FC, M2C_FIELD(temp_r3_2, s8 **, 8), temp_r6);
                } else {
                    sprintf(arg0 + 0xB090, &lbl_80321478, M2C_FIELD(temp_r3_2, s8 **, 8), temp_r6);
                }
                temp_r26 = arg0 + 0xB090;
                temp_r3_9 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB088);
                temp_r9_8 = M2C_FIELD(temp_r3_9, void **, 0x19C);
                M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, s8 *), 0x36C)(temp_r3_9 + M2C_FIELD(temp_r9_8, s16 *, 0x368), temp_r26);
                temp_r3_10 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB088);
                temp_r9_9 = M2C_FIELD(temp_r3_10, void **, 0x19C);
                M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *), 0x1FC)(temp_r3_10 + M2C_FIELD(temp_r9_9, s16 *, 0x1F8));
                temp_r29_3 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB088);
                temp_r30_3 = M2C_FIELD(temp_r29_3, void **, 0x19C);
                temp_r30_4 = temp_r30_3 + 0x380;
                temp_r29_4 = temp_r29_3 + M2C_FIELD(temp_r30_3, s16 *, 0x380);
                M2C_FIELD(temp_r30_4, M2C_UNK (**)(void *, void *), 4)(temp_r29_4, UI__ConstructAnimatedTextEffect(Mem__New(0x3C8), M2C_FIELD(arg0, s32 *, 0xB088) + var_r28));
                temp_r3_11 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB088);
                temp_r9_10 = M2C_FIELD(temp_r3_11, void **, 0x19C);
                temp_r3_12 = M2C_FIELD(temp_r9_10, void *(**)(void *), 0x38C)(temp_r3_11 + M2C_FIELD(temp_r9_10, s16 *, 0x388));
                temp_r9_11 = M2C_FIELD(temp_r3_12, void **, 8);
                M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *), 0x1C)(temp_r3_12 + M2C_FIELD(temp_r9_11, s16 *, 0x18));
                temp_r3_13 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB088);
                temp_r9_12 = M2C_FIELD(temp_r3_13, void **, 0x19C);
                M2C_FIELD(temp_r9_12, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r3_13 + M2C_FIELD(temp_r9_12, s16 *, 0x108), lbl_80327504, lbl_80327504, lbl_80327504, lbl_80327504);
                temp_r3_14 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB088);
                temp_r9_13 = M2C_FIELD(temp_r3_14, void **, 0x19C);
                M2C_FIELD(temp_r9_13, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r3_14 + M2C_FIELD(temp_r9_13, s16 *, 0x1B0), 0x6000);
                temp_r3_15 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB088);
                temp_r9_14 = M2C_FIELD(temp_r3_15, void **, 0x19C);
                M2C_FIELD(temp_r9_14, M2C_UNK (**)(void *), 0x3C)(temp_r3_15 + M2C_FIELD(temp_r9_14, s16 *, 0x38));
                if ((s32) M2C_FIELD(arg0, s32 *, 0xB7A8) == 2) {
                    temp_r3_16 = MissionStats__GetSummaryEntryByIndex(var_r25);
                    temp_r6_2 = M2C_FIELD(temp_r3_16, s32 *, 0x14);
                    if (temp_r6_2 != -1) {
                        sprintf(temp_r26, &lbl_803274F4, M2C_FIELD(temp_r3_16, s8 **, 0xC), temp_r6_2);
                    } else if ((var_r25 == (s32) (temp_r3 - 1)) || (var_r25 == (s32) (temp_r3 - 2))) {
                        sprintf(temp_r26, &lbl_803274FC, M2C_FIELD(temp_r3_16, s8 **, 0xC), temp_r6_2);
                    } else {
                        sprintf(temp_r26, &lbl_80321478, M2C_FIELD(temp_r3_16, s8 **, 0xC), temp_r6_2);
                    }
                    temp_r3_17 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB08C);
                    temp_r9_15 = M2C_FIELD(temp_r3_17, void **, 0x19C);
                    M2C_FIELD(temp_r9_15, M2C_UNK (**)(void *, void *), 0x36C)(temp_r3_17 + M2C_FIELD(temp_r9_15, s16 *, 0x368), arg0 + 0xB090);
                    temp_r3_18 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB08C);
                    temp_r9_16 = M2C_FIELD(temp_r3_18, void **, 0x19C);
                    M2C_FIELD(temp_r9_16, M2C_UNK (**)(void *), 0x1FC)(temp_r3_18 + M2C_FIELD(temp_r9_16, s16 *, 0x1F8));
                    temp_r29_5 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB08C);
                    temp_r30_5 = M2C_FIELD(temp_r29_5, void **, 0x19C);
                    temp_r30_6 = temp_r30_5 + 0x380;
                    temp_r29_6 = temp_r29_5 + M2C_FIELD(temp_r30_5, s16 *, 0x380);
                    M2C_FIELD(temp_r30_6, M2C_UNK (**)(void *, void *), 4)(temp_r29_6, UI__ConstructAnimatedTextEffect(Mem__New(0x3C8), M2C_FIELD(arg0, s32 *, 0xB08C) + var_r28));
                    temp_r3_19 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB08C);
                    temp_r9_17 = M2C_FIELD(temp_r3_19, void **, 0x19C);
                    temp_r3_20 = M2C_FIELD(temp_r9_17, void *(**)(void *), 0x38C)(temp_r3_19 + M2C_FIELD(temp_r9_17, s16 *, 0x388));
                    temp_r9_18 = M2C_FIELD(temp_r3_20, void **, 8);
                    M2C_FIELD(temp_r9_18, M2C_UNK (**)(void *), 0x1C)(temp_r3_20 + M2C_FIELD(temp_r9_18, s16 *, 0x18));
                    temp_r3_21 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB08C);
                    temp_r9_19 = M2C_FIELD(temp_r3_21, void **, 0x19C);
                    M2C_FIELD(temp_r9_19, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r3_21 + M2C_FIELD(temp_r9_19, s16 *, 0x108), lbl_80327504, lbl_80327504, lbl_80327504, lbl_80327504);
                    temp_r3_22 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB08C);
                    temp_r9_20 = M2C_FIELD(temp_r3_22, void **, 0x19C);
                    M2C_FIELD(temp_r9_20, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r3_22 + M2C_FIELD(temp_r9_20, s16 *, 0x1B0), 0x6000);
                    temp_r3_23 = var_r28 + M2C_FIELD(arg0, s32 *, 0xB08C);
                    temp_r9_21 = M2C_FIELD(temp_r3_23, void **, 0x19C);
                    M2C_FIELD(temp_r9_21, M2C_UNK (**)(void *), 0x3C)(temp_r3_23 + M2C_FIELD(temp_r9_21, s16 *, 0x38));
                }
                var_r25 += 1;
                var_r28 += 0x1F4;
            } while (var_r25 < (s32) (temp_r23 + 1));
        }
    }
}
