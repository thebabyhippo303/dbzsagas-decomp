/* DisplayInfo__InitializeEntryList @ 0x8000AAEC (size: 0xC3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
char * Mem__NewArray(s32);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
extern M2C_UNK lbl_8035F03C __attribute__((section(".data")));
extern M2C_UNK lbl_8035F18C __attribute__((section(".data")));
extern M2C_UNK lbl_8035F1A8 __attribute__((section(".data")));
extern M2C_UNK lbl_8035F1C4 __attribute__((section(".data")));
extern M2C_UNK lbl_8035F1E0 __attribute__((section(".data")));
extern M2C_UNK lbl_8035F234 __attribute__((section(".data")));
extern M2C_UNK lbl_8035F288 __attribute__((section(".data")));
extern M2C_UNK lbl_8035F2C0 __attribute__((section(".data")));
extern M2C_UNK lbl_8035F2DC __attribute__((section(".data")));
extern M2C_UNK lbl_8035F2F8 __attribute__((section(".data")));
extern M2C_UNK lbl_8035F34C __attribute__((section(".data")));
extern M2C_UNK lbl_8035F368 __attribute__((section(".data")));
extern M2C_UNK lbl_8035F3A0 __attribute__((section(".data")));
extern M2C_UNK lbl_8035FD5C __attribute__((section(".data")));

void DisplayInfo__InitializeEntryList(void *arg0) {
    M2C_UNK *sp3C;
    M2C_UNK *sp38;
    M2C_UNK *sp34;
    M2C_UNK *sp30;
    M2C_UNK *sp2C;
    M2C_UNK *sp28;
    M2C_UNK *sp24;
    M2C_UNK *sp20;
    M2C_UNK *sp1C;
    M2C_UNK *sp18;
    M2C_UNK *sp14;
    M2C_UNK *sp10;
    M2C_UNK *spC;
    M2C_UNK *sp8;
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r0_14;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r26;
    s32 temp_r26_10;
    s32 temp_r26_11;
    s32 temp_r26_12;
    s32 temp_r26_13;
    s32 temp_r26_14;
    s32 temp_r26_2;
    s32 temp_r26_3;
    s32 temp_r26_4;
    s32 temp_r26_5;
    s32 temp_r26_6;
    s32 temp_r26_7;
    s32 temp_r26_8;
    s32 temp_r26_9;
    s32 temp_r28;
    s32 temp_r29_10;
    s32 temp_r29_11;
    s32 temp_r29_12;
    s32 temp_r29_13;
    s32 temp_r29_14;
    s32 temp_r29_2;
    s32 temp_r29_3;
    s32 temp_r29_4;
    s32 temp_r29_5;
    s32 temp_r29_6;
    s32 temp_r29_7;
    s32 temp_r29_8;
    s32 temp_r29_9;
    s32 temp_r30;
    s32 temp_r30_10;
    s32 temp_r30_11;
    s32 temp_r30_12;
    s32 temp_r30_13;
    s32 temp_r30_14;
    s32 temp_r30_2;
    s32 temp_r30_3;
    s32 temp_r30_4;
    s32 temp_r30_5;
    s32 temp_r30_6;
    s32 temp_r30_7;
    s32 temp_r30_8;
    s32 temp_r30_9;
    s8 *temp_r28_11;
    s8 *temp_r28_13;
    s8 *temp_r28_15;
    s8 *temp_r28_17;
    s8 *temp_r28_19;
    s8 *temp_r28_21;
    s8 *temp_r28_23;
    s8 *temp_r28_25;
    s8 *temp_r28_27;
    s8 *temp_r28_3;
    s8 *temp_r28_5;
    s8 *temp_r28_7;
    s8 *temp_r28_9;
    s8 *temp_r29;
    s8 *temp_r3;
    s8 *temp_r3_10;
    s8 *temp_r3_11;
    s8 *temp_r3_13;
    s8 *temp_r3_14;
    s8 *temp_r3_16;
    s8 *temp_r3_17;
    s8 *temp_r3_19;
    s8 *temp_r3_20;
    s8 *temp_r3_22;
    s8 *temp_r3_23;
    s8 *temp_r3_25;
    s8 *temp_r3_26;
    s8 *temp_r3_28;
    s8 *temp_r3_29;
    s8 *temp_r3_2;
    s8 *temp_r3_31;
    s8 *temp_r3_32;
    s8 *temp_r3_34;
    s8 *temp_r3_35;
    s8 *temp_r3_37;
    s8 *temp_r3_38;
    s8 *temp_r3_40;
    s8 *temp_r3_41;
    s8 *temp_r3_4;
    s8 *temp_r3_5;
    s8 *temp_r3_7;
    s8 *temp_r3_8;
    s8 *temp_r4;
    s8 *temp_r4_10;
    s8 *temp_r4_11;
    s8 *temp_r4_12;
    s8 *temp_r4_13;
    s8 *temp_r4_14;
    s8 *temp_r4_2;
    s8 *temp_r4_3;
    s8 *temp_r4_4;
    s8 *temp_r4_5;
    s8 *temp_r4_6;
    s8 *temp_r4_7;
    s8 *temp_r4_8;
    s8 *temp_r4_9;
    u32 temp_r27;
    u32 temp_r28_10;
    u32 temp_r28_12;
    u32 temp_r28_14;
    u32 temp_r28_16;
    u32 temp_r28_18;
    u32 temp_r28_20;
    u32 temp_r28_22;
    u32 temp_r28_24;
    u32 temp_r28_26;
    u32 temp_r28_2;
    u32 temp_r28_4;
    u32 temp_r28_6;
    u32 temp_r28_8;
    void *temp_r31;
    void *temp_r31_10;
    void *temp_r31_11;
    void *temp_r31_12;
    void *temp_r31_13;
    void *temp_r31_14;
    void *temp_r31_2;
    void *temp_r31_3;
    void *temp_r31_4;
    void *temp_r31_5;
    void *temp_r31_6;
    void *temp_r31_7;
    void *temp_r31_8;
    void *temp_r31_9;
    void *temp_r3_12;
    void *temp_r3_15;
    void *temp_r3_18;
    void *temp_r3_21;
    void *temp_r3_24;
    void *temp_r3_27;
    void *temp_r3_30;
    void *temp_r3_33;
    void *temp_r3_36;
    void *temp_r3_39;
    void *temp_r3_3;
    void *temp_r3_42;
    void *temp_r3_6;
    void *temp_r3_9;

    sp8 = &lbl_8035FD5C;
    temp_r31 = arg0 + 0xB09C;
    temp_r28 = M2C_FIELD(temp_r31, s32 *, 4);
    if (temp_r28 == (s32) M2C_FIELD(temp_r31, s32 *, 8)) {
        temp_r27 = temp_r28 * 4;
        temp_r26 = (temp_r28 + M2C_FIELD(temp_r31, s32 *, 0xC)) * 4;
        temp_r3 = Mem__NewArray(temp_r26);
        if (temp_r3 != NULL) {
            temp_r4 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4 != NULL) {
                memcpy(temp_r3, temp_r4, temp_r27);
                temp_r3_2 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_2 != NULL) {
                    Mem__Delete(temp_r3_2);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3;
            M2C_FIELD(temp_r31, s32 *, 8) = (s32) (M2C_FIELD(temp_r31, s32 *, 8) + M2C_FIELD(temp_r31, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
                memset(temp_r3 + temp_r27, 0, temp_r26 - temp_r27);
            }
            goto block_7;
        }
    } else {
block_7:
        temp_r29 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30 = temp_r28 * 4;
        temp_r3_3 = temp_r29 + temp_r30;
        temp_r0 = M2C_FIELD(temp_r31, s32 *, 4) - temp_r28;
        if (temp_r0 != 0) {
            memmove(temp_r3_3 + 4, temp_r3_3, temp_r0 * 4);
        }
        *(temp_r29 + temp_r30) = sp8;
        M2C_FIELD(temp_r31, s32 *, 4) = (s32) (M2C_FIELD(temp_r31, s32 *, 4) + 1);
    }
    temp_r31_2 = arg0 + 0xB09C;
    temp_r29_2 = M2C_FIELD(temp_r31_2, s32 *, 4);
    spC = &lbl_8035F18C;
    if (temp_r29_2 == (s32) M2C_FIELD(temp_r31_2, s32 *, 8)) {
        temp_r28_2 = temp_r29_2 * 4;
        temp_r26_2 = (temp_r29_2 + M2C_FIELD(temp_r31_2, s32 *, 0xC)) * 4;
        temp_r3_4 = Mem__NewArray(temp_r26_2);
        if (temp_r3_4 != NULL) {
            temp_r4_2 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_2 != NULL) {
                memcpy(temp_r3_4, temp_r4_2, temp_r28_2);
                temp_r3_5 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_5 != NULL) {
                    Mem__Delete(temp_r3_5);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_4;
            M2C_FIELD(temp_r31_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_2, s32 *, 8) + M2C_FIELD(temp_r31_2, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_2, s32 *, 0x10) != 0) {
                memset(temp_r3_4 + temp_r28_2, 0, temp_r26_2 - temp_r28_2);
            }
            goto block_17;
        }
    } else {
block_17:
        temp_r28_3 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_2 = temp_r29_2 * 4;
        temp_r3_6 = temp_r28_3 + temp_r30_2;
        temp_r0_2 = M2C_FIELD(temp_r31_2, s32 *, 4) - temp_r29_2;
        if (temp_r0_2 != 0) {
            memmove(temp_r3_6 + 4, temp_r3_6, temp_r0_2 * 4);
        }
        *(temp_r28_3 + temp_r30_2) = spC;
        M2C_FIELD(temp_r31_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_2, s32 *, 4) + 1);
    }
    temp_r31_3 = arg0 + 0xB09C;
    temp_r29_3 = M2C_FIELD(temp_r31_3, s32 *, 4);
    sp10 = &lbl_8035F1E0;
    if (temp_r29_3 == (s32) M2C_FIELD(temp_r31_3, s32 *, 8)) {
        temp_r28_4 = temp_r29_3 * 4;
        temp_r26_3 = (temp_r29_3 + M2C_FIELD(temp_r31_3, s32 *, 0xC)) * 4;
        temp_r3_7 = Mem__NewArray(temp_r26_3);
        if (temp_r3_7 != NULL) {
            temp_r4_3 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_3 != NULL) {
                memcpy(temp_r3_7, temp_r4_3, temp_r28_4);
                temp_r3_8 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_8 != NULL) {
                    Mem__Delete(temp_r3_8);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_7;
            M2C_FIELD(temp_r31_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_3, s32 *, 8) + M2C_FIELD(temp_r31_3, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_3, s32 *, 0x10) != 0) {
                memset(temp_r3_7 + temp_r28_4, 0, temp_r26_3 - temp_r28_4);
            }
            goto block_27;
        }
    } else {
block_27:
        temp_r28_5 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_3 = temp_r29_3 * 4;
        temp_r3_9 = temp_r28_5 + temp_r30_3;
        temp_r0_3 = M2C_FIELD(temp_r31_3, s32 *, 4) - temp_r29_3;
        if (temp_r0_3 != 0) {
            memmove(temp_r3_9 + 4, temp_r3_9, temp_r0_3 * 4);
        }
        *(temp_r28_5 + temp_r30_3) = sp10;
        M2C_FIELD(temp_r31_3, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_3, s32 *, 4) + 1);
    }
    temp_r31_4 = arg0 + 0xB09C;
    temp_r29_4 = M2C_FIELD(temp_r31_4, s32 *, 4);
    sp14 = &lbl_8035F1A8;
    if (temp_r29_4 == (s32) M2C_FIELD(temp_r31_4, s32 *, 8)) {
        temp_r28_6 = temp_r29_4 * 4;
        temp_r26_4 = (temp_r29_4 + M2C_FIELD(temp_r31_4, s32 *, 0xC)) * 4;
        temp_r3_10 = Mem__NewArray(temp_r26_4);
        if (temp_r3_10 != NULL) {
            temp_r4_4 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_4 != NULL) {
                memcpy(temp_r3_10, temp_r4_4, temp_r28_6);
                temp_r3_11 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_11 != NULL) {
                    Mem__Delete(temp_r3_11);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_10;
            M2C_FIELD(temp_r31_4, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_4, s32 *, 8) + M2C_FIELD(temp_r31_4, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_4, s32 *, 0x10) != 0) {
                memset(temp_r3_10 + temp_r28_6, 0, temp_r26_4 - temp_r28_6);
            }
            goto block_37;
        }
    } else {
block_37:
        temp_r28_7 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_4 = temp_r29_4 * 4;
        temp_r3_12 = temp_r28_7 + temp_r30_4;
        temp_r0_4 = M2C_FIELD(temp_r31_4, s32 *, 4) - temp_r29_4;
        if (temp_r0_4 != 0) {
            memmove(temp_r3_12 + 4, temp_r3_12, temp_r0_4 * 4);
        }
        *(temp_r28_7 + temp_r30_4) = sp14;
        M2C_FIELD(temp_r31_4, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_4, s32 *, 4) + 1);
    }
    temp_r31_5 = arg0 + 0xB09C;
    temp_r29_5 = M2C_FIELD(temp_r31_5, s32 *, 4);
    sp18 = &lbl_8035F1C4;
    if (temp_r29_5 == (s32) M2C_FIELD(temp_r31_5, s32 *, 8)) {
        temp_r28_8 = temp_r29_5 * 4;
        temp_r26_5 = (temp_r29_5 + M2C_FIELD(temp_r31_5, s32 *, 0xC)) * 4;
        temp_r3_13 = Mem__NewArray(temp_r26_5);
        if (temp_r3_13 != NULL) {
            temp_r4_5 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_5 != NULL) {
                memcpy(temp_r3_13, temp_r4_5, temp_r28_8);
                temp_r3_14 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_14 != NULL) {
                    Mem__Delete(temp_r3_14);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_13;
            M2C_FIELD(temp_r31_5, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_5, s32 *, 8) + M2C_FIELD(temp_r31_5, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_5, s32 *, 0x10) != 0) {
                memset(temp_r3_13 + temp_r28_8, 0, temp_r26_5 - temp_r28_8);
            }
            goto block_47;
        }
    } else {
block_47:
        temp_r28_9 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_5 = temp_r29_5 * 4;
        temp_r3_15 = temp_r28_9 + temp_r30_5;
        temp_r0_5 = M2C_FIELD(temp_r31_5, s32 *, 4) - temp_r29_5;
        if (temp_r0_5 != 0) {
            memmove(temp_r3_15 + 4, temp_r3_15, temp_r0_5 * 4);
        }
        *(temp_r28_9 + temp_r30_5) = sp18;
        M2C_FIELD(temp_r31_5, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_5, s32 *, 4) + 1);
    }
    temp_r31_6 = arg0 + 0xB09C;
    temp_r29_6 = M2C_FIELD(temp_r31_6, s32 *, 4);
    sp1C = &lbl_8035F234;
    if (temp_r29_6 == (s32) M2C_FIELD(temp_r31_6, s32 *, 8)) {
        temp_r28_10 = temp_r29_6 * 4;
        temp_r26_6 = (temp_r29_6 + M2C_FIELD(temp_r31_6, s32 *, 0xC)) * 4;
        temp_r3_16 = Mem__NewArray(temp_r26_6);
        if (temp_r3_16 != NULL) {
            temp_r4_6 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_6 != NULL) {
                memcpy(temp_r3_16, temp_r4_6, temp_r28_10);
                temp_r3_17 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_17 != NULL) {
                    Mem__Delete(temp_r3_17);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_16;
            M2C_FIELD(temp_r31_6, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_6, s32 *, 8) + M2C_FIELD(temp_r31_6, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_6, s32 *, 0x10) != 0) {
                memset(temp_r3_16 + temp_r28_10, 0, temp_r26_6 - temp_r28_10);
            }
            goto block_57;
        }
    } else {
block_57:
        temp_r28_11 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_6 = temp_r29_6 * 4;
        temp_r3_18 = temp_r28_11 + temp_r30_6;
        temp_r0_6 = M2C_FIELD(temp_r31_6, s32 *, 4) - temp_r29_6;
        if (temp_r0_6 != 0) {
            memmove(temp_r3_18 + 4, temp_r3_18, temp_r0_6 * 4);
        }
        *(temp_r28_11 + temp_r30_6) = sp1C;
        M2C_FIELD(temp_r31_6, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_6, s32 *, 4) + 1);
    }
    temp_r31_7 = arg0 + 0xB09C;
    temp_r29_7 = M2C_FIELD(temp_r31_7, s32 *, 4);
    sp20 = &lbl_8035F03C;
    if (temp_r29_7 == (s32) M2C_FIELD(temp_r31_7, s32 *, 8)) {
        temp_r28_12 = temp_r29_7 * 4;
        temp_r26_7 = (temp_r29_7 + M2C_FIELD(temp_r31_7, s32 *, 0xC)) * 4;
        temp_r3_19 = Mem__NewArray(temp_r26_7);
        if (temp_r3_19 != NULL) {
            temp_r4_7 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_7 != NULL) {
                memcpy(temp_r3_19, temp_r4_7, temp_r28_12);
                temp_r3_20 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_20 != NULL) {
                    Mem__Delete(temp_r3_20);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_19;
            M2C_FIELD(temp_r31_7, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_7, s32 *, 8) + M2C_FIELD(temp_r31_7, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_7, s32 *, 0x10) != 0) {
                memset(temp_r3_19 + temp_r28_12, 0, temp_r26_7 - temp_r28_12);
            }
            goto block_67;
        }
    } else {
block_67:
        temp_r28_13 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_7 = temp_r29_7 * 4;
        temp_r3_21 = temp_r28_13 + temp_r30_7;
        temp_r0_7 = M2C_FIELD(temp_r31_7, s32 *, 4) - temp_r29_7;
        if (temp_r0_7 != 0) {
            memmove(temp_r3_21 + 4, temp_r3_21, temp_r0_7 * 4);
        }
        *(temp_r28_13 + temp_r30_7) = sp20;
        M2C_FIELD(temp_r31_7, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_7, s32 *, 4) + 1);
    }
    temp_r31_8 = arg0 + 0xB09C;
    temp_r29_8 = M2C_FIELD(temp_r31_8, s32 *, 4);
    sp24 = &lbl_8035F288;
    if (temp_r29_8 != (s32) M2C_FIELD(temp_r31_8, s32 *, 8)) {
block_77:
        temp_r28_15 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_8 = temp_r29_8 * 4;
        temp_r3_24 = temp_r28_15 + temp_r30_8;
        temp_r0_8 = M2C_FIELD(temp_r31_8, s32 *, 4) - temp_r29_8;
        if (temp_r0_8 != 0) {
            memmove(temp_r3_24 + 4, temp_r3_24, temp_r0_8 * 4);
        }
        *(temp_r28_15 + temp_r30_8) = sp24;
        M2C_FIELD(temp_r31_8, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_8, s32 *, 4) + 1);
    } else {
        temp_r28_14 = temp_r29_8 * 4;
        temp_r26_8 = (temp_r29_8 + M2C_FIELD(temp_r31_8, s32 *, 0xC)) * 4;
        temp_r3_22 = Mem__NewArray(temp_r26_8);
        if (temp_r3_22 != NULL) {
            temp_r4_8 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_8 != NULL) {
                memcpy(temp_r3_22, temp_r4_8, temp_r28_14);
                temp_r3_23 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_23 != NULL) {
                    Mem__Delete(temp_r3_23);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_22;
            M2C_FIELD(temp_r31_8, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_8, s32 *, 8) + M2C_FIELD(temp_r31_8, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_8, s32 *, 0x10) != 0) {
                memset(temp_r3_22 + temp_r28_14, 0, temp_r26_8 - temp_r28_14);
            }
            goto block_77;
        }
    }
    temp_r31_9 = arg0 + 0xB09C;
    temp_r29_9 = M2C_FIELD(temp_r31_9, s32 *, 4);
    sp28 = &lbl_8035F2F8;
    if (temp_r29_9 == (s32) M2C_FIELD(temp_r31_9, s32 *, 8)) {
        temp_r28_16 = temp_r29_9 * 4;
        temp_r26_9 = (temp_r29_9 + M2C_FIELD(temp_r31_9, s32 *, 0xC)) * 4;
        temp_r3_25 = Mem__NewArray(temp_r26_9);
        if (temp_r3_25 != NULL) {
            temp_r4_9 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_9 != NULL) {
                memcpy(temp_r3_25, temp_r4_9, temp_r28_16);
                temp_r3_26 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_26 != NULL) {
                    Mem__Delete(temp_r3_26);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_25;
            M2C_FIELD(temp_r31_9, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_9, s32 *, 8) + M2C_FIELD(temp_r31_9, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_9, s32 *, 0x10) != 0) {
                memset(temp_r3_25 + temp_r28_16, 0, temp_r26_9 - temp_r28_16);
            }
            goto block_87;
        }
    } else {
block_87:
        temp_r28_17 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_9 = temp_r29_9 * 4;
        temp_r3_27 = temp_r28_17 + temp_r30_9;
        temp_r0_9 = M2C_FIELD(temp_r31_9, s32 *, 4) - temp_r29_9;
        if (temp_r0_9 != 0) {
            memmove(temp_r3_27 + 4, temp_r3_27, temp_r0_9 * 4);
        }
        *(temp_r28_17 + temp_r30_9) = sp28;
        M2C_FIELD(temp_r31_9, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_9, s32 *, 4) + 1);
    }
    temp_r31_10 = arg0 + 0xB09C;
    temp_r29_10 = M2C_FIELD(temp_r31_10, s32 *, 4);
    sp2C = &lbl_8035F2DC;
    if (temp_r29_10 == (s32) M2C_FIELD(temp_r31_10, s32 *, 8)) {
        temp_r28_18 = temp_r29_10 * 4;
        temp_r26_10 = (temp_r29_10 + M2C_FIELD(temp_r31_10, s32 *, 0xC)) * 4;
        temp_r3_28 = Mem__NewArray(temp_r26_10);
        if (temp_r3_28 != NULL) {
            temp_r4_10 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_10 != NULL) {
                memcpy(temp_r3_28, temp_r4_10, temp_r28_18);
                temp_r3_29 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_29 != NULL) {
                    Mem__Delete(temp_r3_29);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_28;
            M2C_FIELD(temp_r31_10, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_10, s32 *, 8) + M2C_FIELD(temp_r31_10, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_10, s32 *, 0x10) != 0) {
                memset(temp_r3_28 + temp_r28_18, 0, temp_r26_10 - temp_r28_18);
            }
            goto block_97;
        }
    } else {
block_97:
        temp_r28_19 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_10 = temp_r29_10 * 4;
        temp_r3_30 = temp_r28_19 + temp_r30_10;
        temp_r0_10 = M2C_FIELD(temp_r31_10, s32 *, 4) - temp_r29_10;
        if (temp_r0_10 != 0) {
            memmove(temp_r3_30 + 4, temp_r3_30, temp_r0_10 * 4);
        }
        *(temp_r28_19 + temp_r30_10) = sp2C;
        M2C_FIELD(temp_r31_10, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_10, s32 *, 4) + 1);
    }
    temp_r31_11 = arg0 + 0xB09C;
    temp_r29_11 = M2C_FIELD(temp_r31_11, s32 *, 4);
    sp30 = &lbl_8035F2C0;
    if (temp_r29_11 == (s32) M2C_FIELD(temp_r31_11, s32 *, 8)) {
        temp_r28_20 = temp_r29_11 * 4;
        temp_r26_11 = (temp_r29_11 + M2C_FIELD(temp_r31_11, s32 *, 0xC)) * 4;
        temp_r3_31 = Mem__NewArray(temp_r26_11);
        if (temp_r3_31 != NULL) {
            temp_r4_11 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_11 != NULL) {
                memcpy(temp_r3_31, temp_r4_11, temp_r28_20);
                temp_r3_32 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_32 != NULL) {
                    Mem__Delete(temp_r3_32);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_31;
            M2C_FIELD(temp_r31_11, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_11, s32 *, 8) + M2C_FIELD(temp_r31_11, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_11, s32 *, 0x10) != 0) {
                memset(temp_r3_31 + temp_r28_20, 0, temp_r26_11 - temp_r28_20);
            }
            goto block_107;
        }
    } else {
block_107:
        temp_r28_21 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_11 = temp_r29_11 * 4;
        temp_r3_33 = temp_r28_21 + temp_r30_11;
        temp_r0_11 = M2C_FIELD(temp_r31_11, s32 *, 4) - temp_r29_11;
        if (temp_r0_11 != 0) {
            memmove(temp_r3_33 + 4, temp_r3_33, temp_r0_11 * 4);
        }
        *(temp_r28_21 + temp_r30_11) = sp30;
        M2C_FIELD(temp_r31_11, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_11, s32 *, 4) + 1);
    }
    temp_r31_12 = arg0 + 0xB09C;
    temp_r29_12 = M2C_FIELD(temp_r31_12, s32 *, 4);
    sp34 = &lbl_8035F34C;
    if (temp_r29_12 == (s32) M2C_FIELD(temp_r31_12, s32 *, 8)) {
        temp_r28_22 = temp_r29_12 * 4;
        temp_r26_12 = (temp_r29_12 + M2C_FIELD(temp_r31_12, s32 *, 0xC)) * 4;
        temp_r3_34 = Mem__NewArray(temp_r26_12);
        if (temp_r3_34 != NULL) {
            temp_r4_12 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_12 != NULL) {
                memcpy(temp_r3_34, temp_r4_12, temp_r28_22);
                temp_r3_35 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_35 != NULL) {
                    Mem__Delete(temp_r3_35);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_34;
            M2C_FIELD(temp_r31_12, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_12, s32 *, 8) + M2C_FIELD(temp_r31_12, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_12, s32 *, 0x10) != 0) {
                memset(temp_r3_34 + temp_r28_22, 0, temp_r26_12 - temp_r28_22);
            }
            goto block_117;
        }
    } else {
block_117:
        temp_r28_23 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_12 = temp_r29_12 * 4;
        temp_r3_36 = temp_r28_23 + temp_r30_12;
        temp_r0_12 = M2C_FIELD(temp_r31_12, s32 *, 4) - temp_r29_12;
        if (temp_r0_12 != 0) {
            memmove(temp_r3_36 + 4, temp_r3_36, temp_r0_12 * 4);
        }
        *(temp_r28_23 + temp_r30_12) = sp34;
        M2C_FIELD(temp_r31_12, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_12, s32 *, 4) + 1);
    }
    temp_r31_13 = arg0 + 0xB09C;
    temp_r29_13 = M2C_FIELD(temp_r31_13, s32 *, 4);
    sp38 = &lbl_8035F3A0;
    if (temp_r29_13 == (s32) M2C_FIELD(temp_r31_13, s32 *, 8)) {
        temp_r28_24 = temp_r29_13 * 4;
        temp_r26_13 = (temp_r29_13 + M2C_FIELD(temp_r31_13, s32 *, 0xC)) * 4;
        temp_r3_37 = Mem__NewArray(temp_r26_13);
        if (temp_r3_37 != NULL) {
            temp_r4_13 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_13 != NULL) {
                memcpy(temp_r3_37, temp_r4_13, temp_r28_24);
                temp_r3_38 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_38 != NULL) {
                    Mem__Delete(temp_r3_38);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_37;
            M2C_FIELD(temp_r31_13, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_13, s32 *, 8) + M2C_FIELD(temp_r31_13, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_13, s32 *, 0x10) != 0) {
                memset(temp_r3_37 + temp_r28_24, 0, temp_r26_13 - temp_r28_24);
            }
            goto block_127;
        }
    } else {
block_127:
        temp_r28_25 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_13 = temp_r29_13 * 4;
        temp_r3_39 = temp_r28_25 + temp_r30_13;
        temp_r0_13 = M2C_FIELD(temp_r31_13, s32 *, 4) - temp_r29_13;
        if (temp_r0_13 != 0) {
            memmove(temp_r3_39 + 4, temp_r3_39, temp_r0_13 * 4);
        }
        *(temp_r28_25 + temp_r30_13) = sp38;
        M2C_FIELD(temp_r31_13, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_13, s32 *, 4) + 1);
    }
    temp_r31_14 = arg0 + 0xB09C;
    temp_r29_14 = M2C_FIELD(temp_r31_14, s32 *, 4);
    sp3C = &lbl_8035F368;
    if (temp_r29_14 == (s32) M2C_FIELD(temp_r31_14, s32 *, 8)) {
        temp_r28_26 = temp_r29_14 * 4;
        temp_r26_14 = (temp_r29_14 + M2C_FIELD(temp_r31_14, s32 *, 0xC)) * 4;
        temp_r3_40 = Mem__NewArray(temp_r26_14);
        if (temp_r3_40 != NULL) {
            temp_r4_14 = M2C_FIELD(arg0, s8 **, 0xB09C);
            if (temp_r4_14 != NULL) {
                memcpy(temp_r3_40, temp_r4_14, temp_r28_26);
                temp_r3_41 = M2C_FIELD(arg0, s8 **, 0xB09C);
                if (temp_r3_41 != NULL) {
                    Mem__Delete(temp_r3_41);
                }
            }
            M2C_FIELD(arg0, s8 **, 0xB09C) = temp_r3_40;
            M2C_FIELD(temp_r31_14, s32 *, 8) = (s32) (M2C_FIELD(temp_r31_14, s32 *, 8) + M2C_FIELD(temp_r31_14, s32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31_14, s32 *, 0x10) != 0) {
                memset(temp_r3_40 + temp_r28_26, 0, temp_r26_14 - temp_r28_26);
            }
            goto block_137;
        }
    } else {
block_137:
        temp_r28_27 = M2C_FIELD(arg0, s8 **, 0xB09C);
        temp_r30_14 = temp_r29_14 * 4;
        temp_r3_42 = temp_r28_27 + temp_r30_14;
        temp_r0_14 = M2C_FIELD(temp_r31_14, s32 *, 4) - temp_r29_14;
        if (temp_r0_14 != 0) {
            memmove(temp_r3_42 + 4, temp_r3_42, temp_r0_14 * 4);
        }
        *(temp_r28_27 + temp_r30_14) = sp3C;
        M2C_FIELD(temp_r31_14, s32 *, 4) = (s32) (M2C_FIELD(temp_r31_14, s32 *, 4) + 1);
    }
}
