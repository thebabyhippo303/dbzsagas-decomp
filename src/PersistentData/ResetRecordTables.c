/* PersistentData__ResetRecordTables @ 0x80126DCC (size: 0x358, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
s32 PersistentData__SetGlobalImpl(void *, void *, s32);
char * Mem__NewArray(s32);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
extern M2C_UNK lbl_8033B900 __attribute__((section(".data")));
extern M2C_UNK lbl_8033C17C __attribute__((section(".data")));
extern s32 lbl_803DC368 __attribute__((section(".data")));

void PersistentData__ResetRecordTables(char *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r25;
    s32 temp_r26;
    s32 temp_r31;
    s32 temp_r31_3;
    s32 var_r10;
    s32 var_r10_2;
    s32 var_r24;
    s32 var_r25;
    s32 var_r30;
    s32 var_r9;
    s8 *temp_r3;
    s8 *temp_r3_2;
    s8 *temp_r3_3;
    s8 *temp_r3_4;
    s8 *temp_r3_5;
    s8 *temp_r3_6;
    s8 *temp_r4;
    s8 *temp_r4_2;
    u32 temp_r28;
    u32 temp_r29;
    void **var_r31;
    void *temp_r27;
    void *temp_r31_2;
    void *temp_r31_4;
    void *temp_r4_3;
    void *var_r11;
    void *var_r11_2;
    void *var_r4;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        temp_r3 = M2C_FIELD(arg0, s8 **, 0);
        if (temp_r3 != NULL) {
            memset(temp_r3, 0, M2C_FIELD(arg0, s32 *, 8) * 0x24);
        }
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    var_r24 = 0;
    temp_r27 = arg0 + 0x18;
    do {
        temp_r31 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_r31 == (s32) M2C_FIELD(arg0, s32 *, 8)) {
            temp_r28 = temp_r31 * 0x24;
            temp_r25 = (temp_r31 + M2C_FIELD(arg0, s32 *, 0xC)) * 0x24;
            temp_r3_2 = Mem__NewArray(temp_r25);
            var_r10 = var_r24 + 1;
            if (temp_r3_2 != NULL) {
                temp_r4 = M2C_FIELD(arg0, s8 **, 0);
                if (temp_r4 != NULL) {
                    memcpy(temp_r3_2, temp_r4, temp_r28);
                    temp_r3_3 = M2C_FIELD(arg0, s8 **, 0);
                    if (temp_r3_3 != NULL) {
                        Mem__Delete(temp_r3_3);
                    }
                }
                M2C_FIELD(arg0, s8 **, 0) = temp_r3_2;
                M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0xC));
                if ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0) {
                    memset(temp_r3_2 + temp_r28, 0, temp_r25 - temp_r28);
                }
                goto block_11;
            }
        } else {
block_11:
            temp_r0 = M2C_FIELD(arg0, s32 *, 4) - temp_r31;
            temp_r31_2 = M2C_FIELD(arg0, s8 **, 0) + (temp_r31 * 0x24);
            if (temp_r0 != 0) {
                memmove(temp_r31_2 + 0x24, temp_r31_2, temp_r0 * 0x24);
            }
            var_r4 = temp_r31_2;
            var_r11 = (var_r24 * 0x24) + &lbl_8033B900;
            var_r10 = var_r24 + 1;
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
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
        }
        var_r24 = var_r10;
    } while (var_r24 < 0x13);
    if ((s32) M2C_FIELD(temp_r27, s32 *, 0x10) != 0) {
        temp_r3_4 = M2C_FIELD(arg0, s8 **, 0x18);
        if (temp_r3_4) {
            memset(temp_r3_4, 0, M2C_FIELD(temp_r27, s32 *, 8) * 0x24);
        }
    }
    M2C_FIELD(temp_r27, s32 *, 4) = 0;
    var_r25 = 0;
    do {
        temp_r31_3 = M2C_FIELD(temp_r27, s32 *, 4);
        if (temp_r31_3 == (s32) M2C_FIELD(temp_r27, s32 *, 8)) {
            temp_r29 = temp_r31_3 * 0x24;
            temp_r26 = (temp_r31_3 + M2C_FIELD(temp_r27, s32 *, 0xC)) * 0x24;
            temp_r3_5 = Mem__NewArray(temp_r26);
            var_r10_2 = var_r25 + 1;
            if (temp_r3_5 != NULL) {
                temp_r4_2 = M2C_FIELD(arg0, s8 **, 0x18);
                if (temp_r4_2 != NULL) {
                    memcpy(temp_r3_5, temp_r4_2, temp_r29);
                    temp_r3_6 = M2C_FIELD(arg0, s8 **, 0x18);
                    if (temp_r3_6 != NULL) {
                        Mem__Delete(temp_r3_6);
                    }
                }
                M2C_FIELD(arg0, s8 **, 0x18) = temp_r3_5;
                M2C_FIELD(temp_r27, s32 *, 8) = (s32) (M2C_FIELD(temp_r27, s32 *, 8) + M2C_FIELD(temp_r27, s32 *, 0xC));
                if ((s32) M2C_FIELD(temp_r27, s32 *, 0x10) != 0) {
                    memset(temp_r3_5 + temp_r29, 0, temp_r26 - temp_r29);
                }
                goto block_28;
            }
        } else {
block_28:
            temp_r0_3 = M2C_FIELD(temp_r27, s32 *, 4) - temp_r31_3;
            temp_r31_4 = M2C_FIELD(arg0, s8 **, 0x18) + (temp_r31_3 * 0x24);
            if (temp_r0_3 != 0) {
                memmove(temp_r31_4 + 0x24, temp_r31_4, temp_r0_3 * 0x24);
            }
            var_r11 = temp_r31_4;
            var_r11_2 = (var_r25 * 0x24) + &lbl_8033C17C;
            var_r10_2 = var_r25 + 1;
            var_r10 = 0x18;
            do {
                var_r10 -= 0x18;
                M2C_FIELD(var_r11, s32 *, 0) = (s32) M2C_FIELD(var_r11_2, s32 *, 0);
                M2C_FIELD(var_r11, s32 *, 4) = (s32) M2C_FIELD(var_r11_2, s32 *, 4);
                M2C_FIELD(var_r11, s32 *, 8) = (s32) M2C_FIELD(var_r11_2, s32 *, 8);
                M2C_FIELD(var_r11, s32 *, 0xC) = (s32) M2C_FIELD(var_r11_2, s32 *, 0xC);
                M2C_FIELD(var_r11, s32 *, 0x10) = (s32) M2C_FIELD(var_r11_2, s32 *, 0x10);
                temp_r0_4 = M2C_FIELD(var_r11_2, s32 *, 0x14);
                var_r11_2 += 0x18;
                M2C_FIELD(var_r11, s32 *, 0x14) = temp_r0_4;
                var_r11 += 0x18;
            } while (var_r10 != 0);
            M2C_FIELD(var_r11, s32 *, 0) = (s32) M2C_FIELD(var_r11_2, s32 *, 0);
            M2C_FIELD(var_r11, s32 *, 4) = (s32) M2C_FIELD(var_r11_2, s32 *, 4);
            M2C_FIELD(var_r11, s32 *, 8) = (s32) M2C_FIELD(var_r11_2, s32 *, 8);
            M2C_FIELD(temp_r27, s32 *, 4) = (s32) (M2C_FIELD(temp_r27, s32 *, 4) + 1);
        }
        var_r25 = var_r10_2;
    } while (var_r25 < 0x32);
    var_r31 = &lbl_8033B900 + 0x20;
    for (var_r30 = 0; var_r30 < 0x13; var_r30 += 1) {
        temp_r4_3 = *var_r31;
        var_r31 += 0x24;
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, temp_r4_3, 1);
    }
}
