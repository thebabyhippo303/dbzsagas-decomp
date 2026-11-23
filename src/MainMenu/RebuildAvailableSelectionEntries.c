/* MainMenu__RebuildAvailableSelectionEntries @ 0x800128E0 (size: 0x430, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
char * Mem__NewArray(s32);
int PersistentData__GetCurrentLevel(void);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
M2C_UNK Debug__FormatMessage(M2C_UNK *, s32, s32);  /* extern */
extern M2C_UNK lbl_8030D930 __attribute__((section(".data")));
extern void *lbl_803DC368;

void MainMenu__RebuildAvailableSelectionEntries(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r27;
    s32 temp_r27_2;
    s32 temp_r28;
    s32 temp_r28_3;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r25;
    s32 var_r25_2;
    s32 var_r26;
    s32 var_r26_2;
    s32 var_r30;
    s32 var_r30_2;
    register s32 var_r31;
    s32 var_r31_2;
    s32 var_r9;
    s32 var_r9_2;
    s8 *temp_r3;
    s8 *temp_r3_2;
    s8 *temp_r3_3;
    s8 *temp_r3_4;
    s8 *temp_r3_5;
    s8 *temp_r4;
    s8 *temp_r4_2;
    u32 temp_r28_2;
    u32 temp_r28_4;
    void *temp_r23;
    void *temp_r23_2;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r31_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *var_r11;
    void *var_r11_2;
    void *var_r4;
    void *var_r4_2;

    temp_r31 = arg0 + 0x508;
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
        temp_r3 = M2C_FIELD(arg0, s8 **, 0x508);
        if (temp_r3 != NULL) {
            memset(temp_r3, 0, M2C_FIELD(temp_r31, s32 *, 8) * 0x24);
        }
    }
    M2C_FIELD(temp_r31, s32 *, 4) = 0;
    switch (arg1) {                                 /* irregular */
    case 0:
        temp_r9 = lbl_803DC368;
        var_r26 = 0;
loop_21:
        if (var_r26 < (s32) M2C_FIELD(temp_r9, s32 *, 0x13C)) {
            temp_r28 = var_r26 * 0x24;
            var_r25 = var_r26 + 1;
            PersistentData__GetCurrentLevel();
            temp_r30 = M2C_FIELD(lbl_803DC368, s32 *, 0x138) + temp_r28;
            if ((u32) M2C_FIELD(temp_r30, u32 *, 0x14) <= PersistentData__GetCurrentLevel()) {
                temp_r31_2 = arg0 + 0x508;
                temp_r29 = M2C_FIELD(temp_r31_2, s32 *, 4);
                temp_r23 = M2C_FIELD(lbl_803DC368, s32 *, 0x138) + temp_r28;
                if (temp_r29 == (s32) M2C_FIELD(temp_r31_2, s32 *, 8)) {
                    temp_r28_2 = temp_r29 * 0x24;
                    temp_r27 = (temp_r29 + M2C_FIELD(temp_r31_2, u32 *, 0xC)) * 0x24;
                    temp_r3_2 = Mem__NewArray(temp_r27);
                    if (temp_r3_2 != NULL) {
                        temp_r4 = M2C_FIELD(arg0, s8 **, 0x508);
                        if (temp_r4 != NULL) {
                            memcpy(temp_r3_2, temp_r4, temp_r28_2);
                            temp_r3_3 = M2C_FIELD(arg0, s8 **, 0x508);
                            if (temp_r3_3 != NULL) {
                                Mem__Delete(temp_r3_3);
                            }
                        }
                        M2C_FIELD(arg0, s8 **, 0x508) = temp_r3_2;
                        M2C_FIELD(temp_r31_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_2, s32 *, 8) + M2C_FIELD(temp_r31_2, u32 *, 0xC));
                        if ((s32) M2C_FIELD(temp_r31_2, s32 *, 0x10) != 0) {
                            memset(temp_r3_2 + temp_r28_2, 0, temp_r27 - temp_r28_2);
                        }
                        goto block_15;
                    }
                } else {
block_15:
                    temp_r0 = M2C_FIELD(temp_r31_2, s32 *, 4) - temp_r29;
                    temp_r30_2 = M2C_FIELD(arg0, s8 **, 0x508) + (temp_r29 * 0x24);
                    if (temp_r0 != 0) {
                        memmove(temp_r30_2 + 0x24, temp_r30_2, temp_r0 * 0x24);
                    }
                    var_r4 = temp_r30_2;
                    var_r11 = temp_r23;
                    var_r25 = var_r26 + 1;
                    var_r9 = 0x18;
                    do {
                        var_r9 -= 0x18;
                        M2C_FIELD(var_r4, s32 *, 0) = (s32) M2C_FIELD(var_r11, s32 *, 0);
                        M2C_FIELD(var_r4, s32 *, 4) = (s32) M2C_FIELD(var_r11, s32 *, 4);
                        M2C_FIELD(var_r4, s32 *, 8) = (s32) M2C_FIELD(var_r11, s32 *, 8);
                        M2C_FIELD(var_r4, s32 *, 0xC) = (s32) M2C_FIELD(var_r11, s32 *, 0xC);
                        M2C_FIELD(var_r4, s32 *, 0x10) = (s32) M2C_FIELD(var_r11, s32 *, 0x10);
                        temp_r0_2 = M2C_FIELD(var_r11, s32 *, 0x14);
                        var_r11 += 0x18;
                        M2C_FIELD(var_r4, s32 *, 0x14) = temp_r0_2;
                        var_r4 += 0x18;
                    } while (var_r9 != 0);
                    M2C_FIELD(var_r4, s32 *, 0) = (s32) M2C_FIELD(var_r11, s32 *, 0);
                    M2C_FIELD(var_r4, s32 *, 4) = (s32) M2C_FIELD(var_r11, s32 *, 4);
                    M2C_FIELD(var_r4, s32 *, 8) = (s32) M2C_FIELD(var_r11, s32 *, 8);
                    M2C_FIELD(temp_r31_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_2, s32 *, 4) + 1);
                }
            }
            var_r26 = var_r25;
            goto loop_21;
        }
        var_r31 = 0;
        if ((s32) M2C_FIELD(temp_r9, s32 *, 0x13C) > 0) {
            var_r30 = 0;
            do {
                var_r31 += 1;
                temp_r9_2 = M2C_FIELD(lbl_803DC368, s32 *, 0x138) + var_r30;
                temp_r5 = M2C_FIELD(temp_r9_2, s32 *, 0x14);
                var_r30 += 0x24;
                Debug__FormatMessage(&lbl_8030D930, M2C_FIELD(temp_r9_2, s32 *, 0x20), temp_r5);
            } while (var_r31 < (s32) M2C_FIELD(lbl_803DC368, s32 *, 0x13C));
            return;
        }
        return;
    case 1:
        temp_r9_3 = lbl_803DC368;
        var_r26_2 = 0;
loop_41:
        if (var_r26_2 < (s32) M2C_FIELD(temp_r9_3, s32 *, 0x154)) {
            temp_r28_3 = var_r26_2 * 0x24;
            var_r25_2 = var_r26_2 + 1;
            PersistentData__GetCurrentLevel();
            temp_r30_3 = temp_r28_3 + M2C_FIELD(lbl_803DC368, s32 *, 0x150);
            if ((u32) M2C_FIELD(temp_r30_3, u32 *, 0x14) <= PersistentData__GetCurrentLevel()) {
                temp_r31_3 = arg0 + 0x508;
                temp_r29_2 = M2C_FIELD(temp_r31_3, s32 *, 4);
                temp_r23_2 = M2C_FIELD(lbl_803DC368, s32 *, 0x150) + temp_r28_3;
                if (temp_r29_2 == (s32) M2C_FIELD(temp_r31_3, s32 *, 8)) {
                    temp_r28_4 = temp_r29_2 * 0x24;
                    temp_r27_2 = (temp_r29_2 + M2C_FIELD(temp_r31_3, s32 *, 0xC)) * 0x24;
                    temp_r3_4 = Mem__NewArray(temp_r27_2);
                    if (temp_r3_4 != NULL) {
                        temp_r4_2 = M2C_FIELD(arg0, s8 **, 0x508);
                        if (temp_r4_2 != NULL) {
                            memcpy(temp_r3_4, temp_r4_2, temp_r28_4);
                            temp_r3_5 = M2C_FIELD(arg0, s8 **, 0x508);
                            if (temp_r3_5 != NULL) {
                                Mem__Delete(temp_r3_5);
                            }
                        }
                        M2C_FIELD(arg0, s8 **, 0x508) = temp_r3_4;
                        M2C_FIELD(temp_r31_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_3, s32 *, 8) + M2C_FIELD(temp_r31_3, s32 *, 0xC));
                        if ((s32) M2C_FIELD(temp_r31_3, s32 *, 0x10) != 0) {
                            memset(temp_r3_4 + temp_r28_4, 0, temp_r27_2 - temp_r28_4);
                        }
                        goto block_35;
                    }
                } else {
block_35:
                    temp_r0_3 = M2C_FIELD(temp_r31_3, s32 *, 4) - temp_r29_2;
                    temp_r30_4 = M2C_FIELD(arg0, s8 **, 0x508) + (temp_r29_2 * 0x24);
                    if (temp_r0_3 != 0) {
                        memmove(temp_r30_4 + 0x24, temp_r30_4, temp_r0_3 * 0x24);
                    }
                    var_r4_2 = temp_r30_4;
                    var_r11_2 = temp_r23_2;
                    var_r25_2 = var_r26_2 + 1;
                    var_r9_2 = 0x18;
                    do {
                        var_r9_2 -= 0x18;
                        M2C_FIELD(var_r4_2, s32 *, 0) = (s32) M2C_FIELD(var_r11_2, s32 *, 0);
                        M2C_FIELD(var_r4_2, s32 *, 4) = (s32) M2C_FIELD(var_r11_2, s32 *, 4);
                        M2C_FIELD(var_r4_2, s32 *, 8) = (s32) M2C_FIELD(var_r11_2, s32 *, 8);
                        M2C_FIELD(var_r4_2, s32 *, 0xC) = (s32) M2C_FIELD(var_r11_2, s32 *, 0xC);
                        M2C_FIELD(var_r4_2, s32 *, 0x10) = (s32) M2C_FIELD(var_r11_2, s32 *, 0x10);
                        temp_r0_4 = M2C_FIELD(var_r11_2, s32 *, 0x14);
                        var_r11_2 += 0x18;
                        M2C_FIELD(var_r4_2, s32 *, 0x14) = temp_r0_4;
                        var_r4_2 += 0x18;
                    } while (var_r9_2 != 0);
                    M2C_FIELD(var_r4_2, s32 *, 0) = (s32) M2C_FIELD(var_r11_2, s32 *, 0);
                    M2C_FIELD(var_r4_2, s32 *, 4) = (s32) M2C_FIELD(var_r11_2, s32 *, 4);
                    M2C_FIELD(var_r4_2, s32 *, 8) = (s32) M2C_FIELD(var_r11_2, s32 *, 8);
                    M2C_FIELD(temp_r31_3, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_3, s32 *, 4) + 1);
                }
            }
            var_r26_2 = var_r25_2;
            goto loop_41;
        }
        var_r31_2 = 0;
        if ((s32) M2C_FIELD(temp_r9_3, s32 *, 0x154) > 0) {
            var_r30_2 = 0;
            do {
                var_r31_2 += 1;
                temp_r9_4 = M2C_FIELD(lbl_803DC368, s32 *, 0x150) + var_r30_2;
                temp_r5_2 = M2C_FIELD(temp_r9_4, s32 *, 0x14);
                var_r30_2 += 0x24;
                Debug__FormatMessage(&lbl_8030D930, M2C_FIELD(temp_r9_4, s32 *, 0x20), temp_r5_2);
            } while (var_r31_2 < (s32) M2C_FIELD(lbl_803DC368, s32 *, 0x154));
        }
        break;
    }
}
