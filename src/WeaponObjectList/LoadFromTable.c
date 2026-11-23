/* WeaponObjectList__LoadFromTable @ 0x800DF46C (size: 0x24C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef unsigned long long u64; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * MissileWeaponDefinition__Construct(void *);
void * fn_801842C4(unsigned int);
void * fn_80184348(int);
void fn_801843CC(void *);
s32 fn_8025238C(const char *, void *, const char *);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
u64 Runtime__ShiftLeft64(M2C_UNK, M2C_UNK, s32, void *); /* extern */
void *fn_800D0AE4();                                /* extern */
M2C_UNK qsort(void *, M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK WeaponObjectList__CompareById __attribute__((section(".data")));
extern s8 lbl_80322B80 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

s32 WeaponObjectList__LoadFromTable(void **arg0, void *arg1, u32 arg2) {
    void *sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r27;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r4_3;
    s32 var_r11;
    s32 var_r22;
    u32 temp_r25;
    u32 temp_r28;
    u32 var_r21;
    u64 temp_r24;
    u64 temp_ret;
    void *temp_r28_2;
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r26;
    void *var_r30;
    void *var_r3;
    void *var_r3_2;

    if (arg2 != 0U) {
        var_r21 = 0U;
        temp_r9 = M2C_FIELD(lbl_803DC3C0, void **, 0x238);
        temp_ret = Runtime__ShiftLeft64(0, 1, M2C_FIELD(temp_r9, s32 *, 4), temp_r9);
        temp_r24 = temp_ret;
        temp_r25 = (u32) temp_ret;
        if (arg2 > 0U) {
            var_r26 = arg1;
            var_r22 = arg1 + 0x10;
loop_3:
            if (((M2C_FIELD(var_r26, s32 *, 8) & temp_r24) | (M2C_FIELD(var_r26, s32 *, 0xC) & temp_r25)) != 0) {
                temp_r4 = M2C_FIELD(var_r26, void **, 0);
                if (temp_r4 != NULL) {
                    M2C_FIELD(var_r26, void **, 0x18) = (void *) fn_8025238C(&lbl_80322B80, temp_r4, NULL);
                } else {
                    M2C_FIELD(var_r26, void **, 0x18) = temp_r4;
                }
                temp_r0 = M2C_FIELD(var_r26, s32 *, 4);
                var_r30 = NULL;
                switch (temp_r0) {                  /* irregular */
                case 0:
                    fn_801842C4(0x7CU);
                    var_r3 = fn_800D0AE4();
block_12:
                    var_r30 = var_r3;
                    break;
                case 1:
                    var_r3 = MissileWeaponDefinition__Construct(fn_801842C4(0x100U));
                    goto block_12;
                }
                if (var_r30 != NULL) {
                    temp_r9_2 = M2C_FIELD(var_r30, void **, 0x54);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, s32), 0x1C)(var_r30 + M2C_FIELD(temp_r9_2, s16 *, 0x18), var_r22);
                    temp_r31 = *arg0;
                    sp8 = var_r30;
                    temp_r30 = M2C_FIELD(temp_r31, s32 *, 4);
                    if (temp_r30 == (s32) M2C_FIELD(temp_r31, s32 *, 8)) {
                        temp_r28 = temp_r30 * 4;
                        temp_r27 = (temp_r30 + M2C_FIELD(temp_r31, s32 *, 0xC)) * 4;
                        temp_r3 = fn_80184348(temp_r27);
                        if (temp_r3 == NULL) {
                            var_r11 = 0;
                        } else {
                            temp_r4_2 = M2C_FIELD(temp_r31, void **, 0);
                            if (temp_r4_2 != NULL) {
                                memcpy(temp_r3, temp_r4_2, temp_r28);
                                temp_r3_2 = M2C_FIELD(temp_r31, void **, 0);
                                if (temp_r3_2 != NULL) {
                                    fn_801843CC(temp_r3_2);
                                }
                            }
                            M2C_FIELD(temp_r31, void **, 0) = temp_r3;
                            M2C_FIELD(temp_r31, s32 *, 8) = (s32) (M2C_FIELD(temp_r31, s32 *, 8) + M2C_FIELD(temp_r31, s32 *, 0xC));
                            if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
                                memset(temp_r3 + temp_r28, 0, temp_r27 - temp_r28);
                            }
                            goto block_22;
                        }
                    } else {
block_22:
                        temp_r28_2 = M2C_FIELD(temp_r31, void **, 0);
                        temp_r29 = temp_r30 * 4;
                        temp_r3_3 = temp_r28_2 + temp_r29;
                        temp_r0_2 = M2C_FIELD(temp_r31, s32 *, 4) - temp_r30;
                        if (temp_r0_2 != 0) {
                            memmove(temp_r3_3 + 4, temp_r3_3, temp_r0_2 * 4);
                        }
                        var_r11 = 1;
                        *(void **)((char *)temp_r28_2 + temp_r29) = sp8;
                        M2C_FIELD(temp_r31, s32 *, 4) = (s32) (M2C_FIELD(temp_r31, s32 *, 4) + 1);
                    }
                    if (var_r11 != 0) {
                        goto block_26;
                    }
                    goto block_30;
                }
block_30:
                return 0;
            }
block_26:
            var_r21 += 1;
            var_r22 += 0x68;
            var_r26 += 0x68;
            if (var_r21 >= arg2) {
                goto block_27;
            }
            goto loop_3;
        }
block_27:
        temp_r3_4 = *arg0;
        temp_r4_3 = M2C_FIELD(temp_r3_4, s32 *, 4);
        if (temp_r4_3 != 0) {
            if (temp_r4_3 <= 0) {
                var_r3_2 = NULL;
            } else {
                var_r3_2 = M2C_FIELD(temp_r3_4, void **, 0);
            }
            qsort(var_r3_2, 4, &WeaponObjectList__CompareById);
        }
        goto block_33;
    }
block_33:
    return 1;
}
