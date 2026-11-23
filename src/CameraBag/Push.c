/* CameraBag__Push @ 0x800BBD40 (size: 0x20C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * CameraBag__GetCurrent(void *);
int String__CompareIgnoreCase(const char *, const char *);
void * fn_80184348(int);
void fn_801843CC(void *);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
M2C_UNK Debug__FormatMessage(M2C_UNK *);            /* extern */
extern M2C_UNK lbl_8032164C __attribute__((section(".data")));

s8 *CameraBag__Push(void *arg0, s8 *arg1) {
    s8 *sp28;
    s32 sp18;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r26;
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r28;
    s32 var_r30;
    s8 *temp_r3;
    s8 *var_r26;
    u32 temp_r31;
    void *temp_r11;
    void *temp_r27;
    void *temp_r30;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r4;
    void *temp_r7;
    void *temp_r9;
    void *temp_r9_2;

    Debug__FormatMessage(&lbl_8032164C);
    temp_r3 = CameraBag__GetCurrent(arg0);
    sp28 = temp_r3;
    if (temp_r3 != NULL) {
        temp_r9 = M2C_FIELD(temp_r3, void **, 0x3C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(s8 *), 0x1C)(&temp_r3[M2C_FIELD(temp_r9, s16 *, 0x18)]);
    }
    if (arg1 == NULL) {
        sp28 = arg1;
    } else {
        var_r26 = NULL;
        var_r28 = 0;
        var_r30 = 0;
loop_6:
        if (var_r28 < (s32) M2C_FIELD(arg0, s32 *, 0)) {
            if (String__CompareIgnoreCase(arg1, M2C_FIELD((var_r30 + M2C_FIELD(arg0, s32 *, 4)), s8 **, 4)) == 0) {
                var_r26 = *(s8 **)(var_r30 + M2C_FIELD(arg0, s32 *, 4));
            } else {
                var_r30 += 8;
                var_r28 += 1;
                goto loop_6;
            }
        }
        sp28 = var_r26;
    }
    if (sp28 != NULL) {
        temp_r11 = arg0 + 0xA0;
        temp_r6 = M2C_FIELD(temp_r11, s32 *, 8);
        temp_r8 = M2C_FIELD(temp_r11, s32 *, 4);
        temp_r7 = arg0 + 0xAC;
        sp8 = M2C_FIELD(arg0, s32 *, 0xA0);
        M2C_FIELD(&sp8, s32 *, 4) = temp_r8;
        temp_r30 = arg0 + 8;
        M2C_FIELD(&sp8, s32 *, 8) = temp_r6;
        sp18 = M2C_FIELD(arg0, s32 *, 0xAC);
        M2C_FIELD(&sp18, s32 *, 4) = (s32) M2C_FIELD(temp_r7, s32 *, 4);
        M2C_FIELD(&sp18, s32 *, 8) = (s32) M2C_FIELD(temp_r7, s32 *, 8);
        temp_r9_2 = M2C_FIELD(sp28, void **, 0x3C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(s8 *, s32 *, s32 *, s32, void *, s32, void *, s32 *), 0x14)(&sp28[M2C_FIELD(temp_r9_2, s16 *, 0x10)], &sp8, &sp18, temp_r6, temp_r7, temp_r8, temp_r9_2, &sp18);
        temp_r28 = M2C_FIELD(temp_r30, s32 *, 4);
        if (temp_r28 == (s32) M2C_FIELD(temp_r30, s32 *, 8)) {
            temp_r31 = temp_r28 * 4;
            temp_r26 = (temp_r28 + M2C_FIELD(temp_r30, s32 *, 0xC)) * 4;
            temp_r3_2 = fn_80184348(temp_r26);
            if (temp_r3_2 != NULL) {
                temp_r4 = M2C_FIELD(arg0, void **, 8);
                if (temp_r4 != NULL) {
                    memcpy(temp_r3_2, temp_r4, temp_r31);
                    temp_r3_3 = M2C_FIELD(arg0, void **, 8);
                    if (temp_r3_3 != NULL) {
                        fn_801843CC(temp_r3_3);
                    }
                }
                M2C_FIELD(arg0, void **, 8) = temp_r3_2;
                M2C_FIELD(temp_r30, s32 *, 8) = (s32) (M2C_FIELD(temp_r30, s32 *, 8) + M2C_FIELD(temp_r30, s32 *, 0xC));
                if ((s32) M2C_FIELD(temp_r30, s32 *, 0x10) != 0) {
                    memset(temp_r3_2 + temp_r31, 0, temp_r26 - temp_r31);
                }
                goto block_18;
            }
        } else {
block_18:
            temp_r27 = M2C_FIELD(arg0, void **, 8);
            temp_r29 = temp_r28 * 4;
            temp_r3_4 = temp_r27 + temp_r29;
            temp_r0 = M2C_FIELD(temp_r30, s32 *, 4) - temp_r28;
            if (temp_r0 != 0) {
                memmove(temp_r3_4 + 4, temp_r3_4, temp_r0 * 4);
            }
            *(void **)(temp_r27 + temp_r29) = sp28;
            M2C_FIELD(temp_r30, s32 *, 4) = (s32) (M2C_FIELD(temp_r30, s32 *, 4) + 1);
        }
    }
    return sp28;
}

