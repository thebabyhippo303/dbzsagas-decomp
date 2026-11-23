/* Script__ApplyAiParameters @ 0x802C50F0 (size: 0x508, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Instance__FindByName(void *, char *, int, int);
void * NamedPoint__FindByName(void *, char *, int);
void Script__SetFloatVariable(void *, int, int);
void Script__SetIntVariable(void *, int, char *, int);
void Script__SetStringVariable(void *, void *, void *, const char *);
int String__CompareIgnoreCase(const char *, const char *);
float String__ParseFloat(const char *);
int atoi(const char *);
void * fn_802ABF24(char *);
void fn_802B2FB0(void *, void *, int);
void fn_802B2FB4(void *);
void fn_802B2FB8(void *, char *);
char * fn_802B3010(void *, char *, int);
void * sprintf(s8 *, void *, s8 *, s32);
int strcmp(const char *, const char *);
extern s8 lbl_80351CA8 __attribute__((section(".data")));
extern s8 lbl_80351CDC __attribute__((section(".data")));
extern s8 lbl_80351D24 __attribute__((section(".data")));
extern s8 lbl_80352828;
extern s8 lbl_80352830 __attribute__((section(".data")));
extern s8 lbl_80352A6C __attribute__((section(".data")));
extern s8 lbl_80353028 __attribute__((section(".data")));
extern M2C_UNK lbl_80353050 __attribute__((section(".data")));
extern M2C_UNK lbl_80353064 __attribute__((section(".data")));
extern M2C_UNK lbl_80353078;
extern M2C_UNK lbl_8035308C;
extern M2C_UNK lbl_803530A0 __attribute__((section(".data")));
extern M2C_UNK lbl_803530B8 __attribute__((section(".data")));
extern s8 lbl_803530CC __attribute__((section(".data")));
extern s8 lbl_803530D0 __attribute__((section(".data")));
extern s8 lbl_803530D8 __attribute__((section(".data")));
extern s8 lbl_803530E0 __attribute__((section(".data")));
extern s8 lbl_803530E8 __attribute__((section(".data")));
extern s8 lbl_803530F0 __attribute__((section(".data")));
extern f32 lbl_803530F8 __attribute__((section(".data")));
extern f32 lbl_803530FC __attribute__((section(".data")));
extern f32 lbl_80353100 __attribute__((section(".data")));
extern f32 lbl_80353104 __attribute__((section(".data")));
extern f32 lbl_80353108 __attribute__((section(".data")));
extern f32 lbl_8035310C __attribute__((section(".data")));
extern f32 lbl_80353110 __attribute__((section(".data")));
extern f32 lbl_80353114 __attribute__((section(".data")));
extern f32 lbl_80353118 __attribute__((section(".data")));
extern f32 lbl_8035311C __attribute__((section(".data")));
extern f32 lbl_80353120 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));
extern M2C_UNK lbl_803BEF34 __attribute__((section(".data")));
extern M2C_UNK lbl_803BEF44 __attribute__((section(".data")));
extern M2C_UNK lbl_803BEF54 __attribute__((section(".data")));
extern M2C_UNK lbl_803BEF64 __attribute__((section(".data")));
extern M2C_UNK lbl_803BEFC0 __attribute__((section(".data")));
extern s32 lbl_803DD69C;
extern s32 lbl_803DD6A0;
extern s32 lbl_803DD6A4;
extern s32 lbl_803DD6A8;

void Script__ApplyAiParameters(void *arg0) {
    s8 sp40;
    s8 sp8;
    M2C_UNK *var_r30;
    M2C_UNK *var_r6;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f26;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    register s8 *temp_r3;
    s8 *temp_r3_2;
    s8 *temp_r3_3;
    s8 *var_r27;
    void *temp_r30;
    void *temp_r30_2;
    void *var_r3;

    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), s32 *, 0xFC) != 0) {
        fn_802B2FB0(&lbl_803BEFC0, M2C_FIELD(arg0, void **, 0x1BC), M2C_FIELD(arg0, s32 *, 0x1B8));
        fn_802B2FB4(&lbl_803BEFC0);
        fn_802B2FB8(&lbl_803BEFC0, &lbl_80353028);
        temp_f21 = lbl_803530FC;
        temp_f31 = lbl_803530F8;
        temp_f23 = lbl_80353100;
        temp_f25 = lbl_80353108;
        temp_f22 = lbl_80353104;
        temp_f24 = lbl_8035310C;
        temp_f26 = lbl_80353114;
        temp_f27 = lbl_80353110;
        temp_f29 = lbl_80353118;
        temp_f28 = lbl_8035311C;
        temp_f30 = lbl_80353120;
        var_r27 = (s8 *)1;
        do {
            sprintf(&sp8, &lbl_80353050, var_r27, M2C_ERROR(/* Read from unset register $r6 */));
            sprintf(&sp40, &lbl_80353064, var_r27, M2C_ERROR(/* Read from unset register $r6 */));
            temp_r3 = fn_802B3010(&lbl_803BEFC0, &sp8, (s32) &sp40);
            if ((temp_r3 != NULL) && ((s32) (u8) *temp_r3 != 0) && (strcmp(temp_r3, &lbl_80352A6C) != 0)) {
                sprintf(&sp8, &lbl_80353078, var_r27, M2C_ERROR(/* Read from unset register $r6 */));
                sprintf(&sp40, &lbl_8035308C, var_r27, M2C_ERROR(/* Read from unset register $r6 */));
                temp_r3_2 = fn_802B3010(&lbl_803BEFC0, &sp8, (s32) &sp40);
                if ((temp_r3_2 != NULL) && ((s32) (u8) *temp_r3_2 != 0)) {
                    sprintf(&sp8, &lbl_803530A0, var_r27, M2C_ERROR(/* Read from unset register $r6 */));
                    sprintf(&sp40, &lbl_803530B8, var_r27, M2C_ERROR(/* Read from unset register $r6 */));
                    temp_r3_3 = fn_802B3010(&lbl_803BEFC0, &sp8, (s32) &sp40);
                    if ((temp_r3_3 == NULL) || ((u8) *temp_r3_3 == 0)) {
                        if (String__CompareIgnoreCase(temp_r3, &lbl_80351CDC) == 0) {
                            Script__SetStringVariable(M2C_FIELD(arg0, void **, 0x84), (void *)3, temp_r3_2, &lbl_80351D24);
                        } else {
                            Script__SetIntVariable(M2C_FIELD(arg0, void **, 0x84), 3, temp_r3_2, 0);
                        }
                    } else {
                        if (String__CompareIgnoreCase(temp_r3, &lbl_803530CC) == 0) {
                            var_r6 = fn_802ABF24(temp_r3_3);
                            var_r3 = M2C_FIELD(arg0, void **, 0x84);
                            goto block_42;
                        }
                        if (String__CompareIgnoreCase(temp_r3, &lbl_80352830) == 0) {
                            var_r6 = Instance__FindByName(&lbl_803B1E84, temp_r3_3, 0, 0);
                            var_r3 = M2C_FIELD(arg0, void **, 0x84);
                            goto block_42;
                        }
                        if (String__CompareIgnoreCase(temp_r3, &lbl_80352828) != 0) {
                            if (String__CompareIgnoreCase(temp_r3, &lbl_803530F0) == 0) {
                                temp_r30 = M2C_FIELD(arg0, void **, 0x84);
                                String__ParseFloat(temp_r3_3);
                                Script__SetFloatVariable(temp_r30, 3, (s32) temp_r3_2);
                        } else {
                            var_r30 = NamedPoint__FindByName(&lbl_803B1E84, temp_r3_3, 0);
                            if ((strcmp(temp_r3_3, &lbl_803530D0) == 0) && (var_r30 == NULL)) {
                                if ((s32) lbl_803DD69C == 0) {
                                    lbl_803DD69C = 1;
                                }
                                M2C_FIELD(&lbl_803BEF34, f32 *, 0) = temp_f31;
                                var_r30 = &lbl_803BEF34;
                                M2C_FIELD(&lbl_803BEF34, f32 *, 4) = temp_f31;
                                M2C_FIELD(&lbl_803BEF34, f32 *, 8) = temp_f21;
                            }
                            if ((strcmp(temp_r3_3, &lbl_803530D8) == 0) && (var_r30 == NULL)) {
                                if ((s32) lbl_803DD6A0 == 0) {
                                    lbl_803DD6A0 = 1;
                                }
                                M2C_FIELD(&lbl_803BEF44, f32 *, 0) = temp_f23;
                                var_r30 = &lbl_803BEF44;
                                M2C_FIELD(&lbl_803BEF44, f32 *, 4) = temp_f22;
                                M2C_FIELD(&lbl_803BEF44, f32 *, 8) = temp_f25;
                            }
                            if ((strcmp(temp_r3_3, &lbl_803530E0) == 0) && (var_r30 == NULL)) {
                                if ((s32) lbl_803DD6A4 == 0) {
                                    lbl_803DD6A4 = 1;
                                }
                                M2C_FIELD(&lbl_803BEF54, f32 *, 0) = temp_f24;
                                var_r30 = &lbl_803BEF54;
                                M2C_FIELD(&lbl_803BEF54, f32 *, 4) = temp_f27;
                                M2C_FIELD(&lbl_803BEF54, f32 *, 8) = temp_f26;
                            }
                            if ((strcmp(temp_r3_3, &lbl_803530E8) == 0) && (var_r30 == NULL)) {
                                if ((s32) lbl_803DD6A8 == 0) {
                                    lbl_803DD6A8 = 1;
                                }
                                M2C_FIELD(&lbl_803BEF64, f32 *, 0) = temp_f29;
                                var_r30 = &lbl_803BEF64;
                                M2C_FIELD(&lbl_803BEF64, f32 *, 4) = temp_f28;
                                M2C_FIELD(&lbl_803BEF64, f32 *, 8) = temp_f30;
                            }
                            var_r3 = M2C_FIELD(arg0, void **, 0x84);
                            var_r6 = var_r30;
                            goto block_42;
                        }
                        } else if (String__CompareIgnoreCase(temp_r3, &lbl_80351CA8) == 0) {
                            temp_r30_2 = M2C_FIELD(arg0, void **, 0x84);
                            var_r3 = temp_r30_2;
                            var_r6 = atoi(temp_r3_3);
block_42:
                            Script__SetIntVariable(var_r3, 3, temp_r3_2, (s32) var_r6);
                        } else if (String__CompareIgnoreCase(temp_r3, &lbl_80351CDC) == 0) {
                            Script__SetStringVariable(M2C_FIELD(arg0, void **, 0x84), (void *)3, temp_r3_2, temp_r3_3);
                        }
                    }
                }
            }
            var_r27 += 1;
        } while (var_r27 <= 8);
    }
}
