/* MainMenu__RebuildEntriesForCategory @ 0x80012F3C (size: 0x8FC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
char *Mem__NewArray(s32);
s32 PersistentData__GetCurrentLevel(s32);
void *Mem__New(u32);
void Sphere__AddChild(void *, void *);
void fn_8026C6F8(void *, s32);
void fn_802721F4(void *, f32);
void *memcpy(void *, const void *, unsigned int);
void *memmove(void *, const void *, unsigned int);
void *memset(void *, int, u32);
void SphereText__Destroy(void *, s32);
void SphereText__Construct(void *);
void SphereText__SetText(void *, void *);
void Sphere__SetColor(void *, f32, f32, f32, f32);
void Sphere__SetPosition(void *, f32, f32);
void fn_8026D590(void *);
void fn_8026D59C(void *);
void Sphere__EnsureAnimSet(void *, s32);
void SphereAnimSet__ClearAll(void *);
void Sphere__SetTexture(void *, s32, s32, s32, s32, s32);
void Sphere__SetSize(void *, f32, f32);
void Sphere__ShowTree(void *);
void Sphere__HideTree(void *);
typedef struct { u32 hi; u32 lo; } DW32;
typedef union { DW32 w; f64 d; } DW;
extern char lbl_80310000[];
extern char lbl_8030D940[];
extern void *lbl_803DC368;
extern void *lbl_803DC3B4;
extern void *lbl_803DC3C0;

void MainMenu__RebuildEntriesForCategory(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r23_2;
    s32 temp_r31_2;
    s32 temp_r31_3;
    s32 temp_r31_4;
    s32 var_r22;
    s32 var_r23;
    s32 var_r24;
    s32 var_r26;
    s32 var_r29;
    s32 var_r31;
    s32 var_r31_2;
    s32 var_r31_3;
    void *temp_r31;
    void *temp_r27;
    void *temp_r30;
    void *temp_r23;
    void *temp_r24;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r30_5;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r20;
    void *temp_r20_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *var_r17;
    void *var_r19;
    void *var_r25;
    void *var_r4;
    void *var_r4_2;
    void *var_r9;
    void *var_r11;
    void *var_r11_2;
    void *var_r30_3;
    void *var_r30_4;
    s8 *temp_r3;
    s8 *temp_r3_2;
    s8 *temp_r3_3;
    s8 *temp_r3_4;
    s8 *temp_r3_5;
    s8 *temp_r4;
    s8 *temp_r4_2;
    s32 temp_r28;
    s32 temp_r28_3;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r27b;
    s32 temp_r27_2;
    s32 var_r25b;
    s32 var_r25_2;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r9b;
    s32 var_r9_2;
    f32 temp_f29;
    f32 temp_f31;
    f32 temp_f1;
    f64 temp_f30d;
    DW conv;

    M2C_FIELD(arg0, s32 *, 0x1B8) = arg1;
    temp_r31 = arg0 + 0x508;
    if ((s32)M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
        temp_r3 = M2C_FIELD(arg0, s8 **, 0x508);
        if (temp_r3 != NULL) {
            memset(temp_r3, 0, M2C_FIELD(temp_r31, s32 *, 8) * 0x24);
        }
    }
    temp_r27 = arg0 + 0x508;
    M2C_FIELD(temp_r31, s32 *, 4) = 0;
    temp_r30 = M2C_FIELD(arg0, void **, 0x508);
    if (temp_r30 != NULL) {
        Mem__Delete(temp_r30);
    }
    M2C_FIELD(temp_r27, s32 *, 4) = 0;
    M2C_FIELD(temp_r27, s32 *, 8) = 0;
    M2C_FIELD(arg0, void **, 0x508) = NULL;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x54C);
    if (temp_r0 != 0) {
        if (temp_r0 != 1) {
            var_r25 = arg0 + 0x538;
            var_r19 = arg0 + 0x1C8;
            var_r17 = arg0 + 0x368;
        } else {
            temp_r9 = lbl_803DC368;
            var_r24 = 0;
            temp_r20 = arg0 + 0x520;
            var_r25 = arg0 + 0x538;
            var_r19 = arg0 + 0x1C8;
            var_r17 = arg0 + 0x368;
            if (var_r24 < (s32)M2C_FIELD(temp_r9, s32 *, 0x154)) {
                do {
                    temp_r31 = temp_r27;
                    temp_r31_2 = M2C_FIELD(temp_r31, s32 *, 4);
                    temp_r23 = (void *)(M2C_FIELD(temp_r9, s32 *, 0x150) + (var_r24 * 0x24));
                    var_r25b = var_r24 + 1;
                    if (temp_r31_2 == (s32)M2C_FIELD(temp_r31, s32 *, 8)) {
                        temp_r29 = temp_r31_2 * 0x24;
                        temp_r27b = (temp_r31_2 + M2C_FIELD(temp_r27, s32 *, 0xC)) * 0x24;
                        temp_r3_2 = Mem__NewArray(temp_r27b);
                        if (temp_r3_2 != NULL) {
                            temp_r4 = M2C_FIELD(temp_r27, s8 **, 0);
                            if (temp_r4 != NULL) {
                                memcpy(temp_r3_2, temp_r4, temp_r29);
                                temp_r3_3 = M2C_FIELD(temp_r27, s8 **, 0);
                                if (temp_r3_3 != NULL) {
                                    Mem__Delete(temp_r3_3);
                                }
                            }
                            M2C_FIELD(temp_r27, s8 **, 0) = temp_r3_2;
                            M2C_FIELD(temp_r27, s32 *, 8) = (s32)(M2C_FIELD(temp_r27, s32 *, 8) + M2C_FIELD(temp_r27, s32 *, 0xC));
                            if ((s32)M2C_FIELD(temp_r27, s32 *, 0x10) != 0) {
                                memset(temp_r3_2 + temp_r29, 0, temp_r27b - temp_r29);
                            }
                            goto block_38;
                        }
                    } else {
block_38:
                        temp_r0_2 = M2C_FIELD(temp_r27, s32 *, 4) - temp_r31_2;
                        temp_r30_2 = M2C_FIELD(temp_r27, s8 **, 0) + (temp_r31_2 * 0x24);
                        if (temp_r0_2 != 0) {
                            memmove(temp_r30_2 + 0x24, temp_r30_2, temp_r0_2 * 0x24);
                        }
                        var_r4 = temp_r30_2;
                        var_r9 = temp_r23;
                        var_r25b = var_r24 + 1;
                        var_r9b = 0x18;
                        do {
                            var_r9b -= 0x18;
                            M2C_FIELD(var_r4, s32 *, 0) = (s32)M2C_FIELD(var_r9, s32 *, 0);
                            M2C_FIELD(var_r4, s32 *, 4) = (s32)M2C_FIELD(var_r9, s32 *, 4);
                            M2C_FIELD(var_r4, s32 *, 8) = (s32)M2C_FIELD(var_r9, s32 *, 8);
                            M2C_FIELD(var_r4, s32 *, 0xC) = (s32)M2C_FIELD(var_r9, s32 *, 0xC);
                            M2C_FIELD(var_r4, s32 *, 0x10) = (s32)M2C_FIELD(var_r9, s32 *, 0x10);
                            temp_r0_3 = M2C_FIELD(var_r9, s32 *, 0x14);
                            var_r9 += 0x18;
                            M2C_FIELD(var_r4, s32 *, 0x14) = temp_r0_3;
                            var_r4 += 0x18;
                        } while (var_r9b != 0);
                        M2C_FIELD(var_r4, s32 *, 0) = (s32)M2C_FIELD(var_r9, s32 *, 0);
                        M2C_FIELD(var_r4, s32 *, 4) = (s32)M2C_FIELD(var_r9, s32 *, 4);
                        M2C_FIELD(var_r4, s32 *, 8) = (s32)M2C_FIELD(var_r9, s32 *, 8);
                        M2C_FIELD(temp_r27, s32 *, 4) = (s32)(M2C_FIELD(temp_r27, s32 *, 4) + 1);
                    }
                    var_r24 = var_r25b;
                } while (var_r24 < (s32)M2C_FIELD(lbl_803DC368, s32 *, 0x154));
            }
            var_r31 = 0;
            if (var_r31 < (s32)M2C_FIELD(temp_r20, s32 *, 4)) {
                var_r30 = 0;
                do {
                    var_r31 += 1;
                    temp_r11 = *(void **)(M2C_FIELD(arg0, s32 *, 0x520) + var_r30);
                    temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
                    var_r30 += 4;
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x130), *(f32 *)(lbl_80310000 - 9912), *(f32 *)(lbl_80310000 - 9912), *(f32 *)(lbl_80310000 - 9912), *(f32 *)(lbl_80310000 - 9908));
                } while (var_r31 < (s32)M2C_FIELD(temp_r20, s32 *, 4));
            }
        }
    } else {
        temp_r9_3 = lbl_803DC368;
        var_r24 = 0;
        temp_r20_2 = arg0 + 0x520;
        var_r25 = arg0 + 0x538;
        var_r19 = arg0 + 0x1C8;
        var_r17 = arg0 + 0x368;
        if (var_r24 < (s32)M2C_FIELD(temp_r9_3, s32 *, 0x13C)) {
            do {
                temp_r31 = temp_r27;
                temp_r28 = var_r24 * 0x24;
                var_r25_2 = var_r24 + 1;
                PersistentData__GetCurrentLevel((s32)((char *)lbl_803DC368 + 381));
                temp_r30_3 = (void *)(M2C_FIELD(lbl_803DC368, s32 *, 0x138) + temp_r28);
                if ((u32)M2C_FIELD(temp_r30_3, u32 *, 0x14) <= (u32)PersistentData__GetCurrentLevel((s32)((char *)lbl_803DC368 + 381))) {
                    temp_r24 = (void *)(M2C_FIELD(lbl_803DC368, s32 *, 0x138) + temp_r28);
                    if ((s32)M2C_FIELD(temp_r24, s32 *, 4) == arg1) {
                        temp_r31_4 = M2C_FIELD(temp_r31, s32 *, 4);
                        if (temp_r31_4 == (s32)M2C_FIELD(temp_r31, s32 *, 8)) {
                            temp_r29_2 = temp_r31_4 * 0x24;
                            temp_r27_2 = (temp_r31_4 + M2C_FIELD(temp_r27, s32 *, 0xC)) * 0x24;
                            temp_r3_4 = Mem__NewArray(temp_r27_2);
                            if (temp_r3_4 != NULL) {
                                temp_r4_2 = M2C_FIELD(temp_r27, s8 **, 0);
                                if (temp_r4_2 != NULL) {
                                    memcpy(temp_r3_4, temp_r4_2, temp_r29_2);
                                    temp_r3_5 = M2C_FIELD(temp_r27, s8 **, 0);
                                    if (temp_r3_5 != NULL) {
                                        Mem__Delete(temp_r3_5);
                                    }
                                }
                                M2C_FIELD(temp_r27, s8 **, 0) = temp_r3_4;
                                M2C_FIELD(temp_r27, s32 *, 8) = (s32)(M2C_FIELD(temp_r27, s32 *, 8) + M2C_FIELD(temp_r27, s32 *, 0xC));
                                if ((s32)M2C_FIELD(temp_r27, s32 *, 0x10) != 0) {
                                    memset(temp_r3_4 + temp_r29_2, 0, temp_r27_2 - temp_r29_2);
                                }
                                goto block_19;
                            }
                        } else {
block_19:
                            temp_r0_4 = M2C_FIELD(temp_r27, s32 *, 4) - temp_r31_4;
                            temp_r30_4 = M2C_FIELD(temp_r27, s8 **, 0) + (temp_r31_4 * 0x24);
                            if (temp_r0_4 != 0) {
                                memmove(temp_r30_4 + 0x24, temp_r30_4, temp_r0_4 * 0x24);
                            }
                            var_r4_2 = temp_r30_4;
                            var_r11_2 = temp_r24;
                            var_r25_2 = var_r24 + 1;
                            var_r9_2 = 0x18;
                            do {
                                var_r9_2 -= 0x18;
                                M2C_FIELD(var_r4_2, s32 *, 0) = (s32)M2C_FIELD(var_r11_2, s32 *, 0);
                                M2C_FIELD(var_r4_2, s32 *, 4) = (s32)M2C_FIELD(var_r11_2, s32 *, 4);
                                M2C_FIELD(var_r4_2, s32 *, 8) = (s32)M2C_FIELD(var_r11_2, s32 *, 8);
                                M2C_FIELD(var_r4_2, s32 *, 0xC) = (s32)M2C_FIELD(var_r11_2, s32 *, 0xC);
                                M2C_FIELD(var_r4_2, s32 *, 0x10) = (s32)M2C_FIELD(var_r11_2, s32 *, 0x10);
                                temp_r0_5 = M2C_FIELD(var_r11_2, s32 *, 0x14);
                                var_r11_2 += 0x18;
                                M2C_FIELD(var_r4_2, s32 *, 0x14) = temp_r0_5;
                                var_r4_2 += 0x18;
                            } while (var_r9_2 != 0);
                            M2C_FIELD(var_r4_2, s32 *, 0) = (s32)M2C_FIELD(var_r11_2, s32 *, 0);
                            M2C_FIELD(var_r4_2, s32 *, 4) = (s32)M2C_FIELD(var_r11_2, s32 *, 8);
                            M2C_FIELD(temp_r27, s32 *, 4) = (s32)(M2C_FIELD(temp_r27, s32 *, 4) + 1);
                        }
                    }
                }
                var_r24 = var_r25_2;
            } while (var_r24 < (s32)M2C_FIELD(lbl_803DC368, s32 *, 0x13C));
        }
        var_r31_2 = 0;
        if (var_r31_2 < (s32)M2C_FIELD(temp_r20_2, s32 *, 4)) {
            var_r30_2 = 0;
            do {
                var_r31_2 += 1;
                temp_r11_2 = *(void **)(M2C_FIELD(arg0, s32 *, 0x520) + var_r30_2);
                temp_r9_4 = M2C_FIELD(temp_r11_2, void **, 0x19C);
                var_r30_2 += 4;
                M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r11_2 + M2C_FIELD(temp_r9_4, s16 *, 0x130), *(f32 *)(lbl_80310000 - 9912), *(f32 *)(lbl_80310000 - 9912), *(f32 *)(lbl_80310000 - 9912), *(f32 *)(lbl_80310000 - 9908));
            } while (var_r31_2 < (s32)M2C_FIELD(temp_r20_2, s32 *, 4));
        }
    }
    var_r30_3 = M2C_FIELD(arg0, void **, 0x538);
    if (var_r30_3 != NULL) {
        do {
            temp_r9_5 = M2C_FIELD(var_r30_3, void **, 0x19C);
            M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, s32), 0xC)(var_r30_3 + M2C_FIELD(temp_r9_5, s16 *, 8), 3);
            var_r30_3 = M2C_FIELD(var_r30_3, void **, 0x208);
        } while (var_r30_3 != NULL);
    }
    if ((void *)M2C_FIELD(arg0, void **, 0x538) != NULL) {
        do {
            temp_r30_5 = M2C_FIELD(var_r25, void **, 0);
            M2C_FIELD(var_r25, void **, 0) = (void *)M2C_FIELD(temp_r30_5, void **, 0x208);
            if ((void *)M2C_FIELD(var_r25, void **, 4) == temp_r30_5) {
                M2C_FIELD(var_r25, void **, 4) = (void *)M2C_FIELD(temp_r30_5, void **, 0x204);
            } else {
                M2C_FIELD(M2C_FIELD(temp_r30_5, void **, 0x208), void **, 0x204) = (void *)M2C_FIELD(temp_r30_5, void **, 0x204);
            }
            if (M2C_FIELD(var_r25, void **, 8) != NULL) {
                if (temp_r30_5 != NULL) {
                    SphereText__Destroy(temp_r30_5, 2);
                    Mem__Delete(temp_r30_5);
                }
            } else {
                M2C_FIELD(temp_r30_5, void **, 0x208) = M2C_FIELD(var_r25, void **, 8);
                M2C_FIELD(temp_r30_5, void **, 0x204) = M2C_FIELD(var_r25, void **, 8);
            }
            M2C_FIELD(var_r25, s32 *, 0xC) = (s32)(M2C_FIELD(var_r25, s32 *, 0xC) - 1);
        } while ((void *)M2C_FIELD(var_r25, void **, 0) != NULL);
    }
    temp_r23_2 = M2C_FIELD(temp_r27, s32 *, 4);
    var_r29 = 0;
    if (var_r29 < temp_r23_2) {
        temp_f30d = *(f64 *)(lbl_80310000 - 9888);
        temp_f29 = *(f32 *)(lbl_80310000 - 9880);
        var_r22 = 0;
        do {
            temp_r30_5 = Mem__New(0x20C);
            SphereText__Construct(temp_r30_5);
            SphereText__SetText(temp_r30_5, M2C_FIELD((M2C_FIELD(arg0, void **, 0x508) + var_r22), void **, 0x20));
            if ((s32)M2C_FIELD(arg0, s32 *, 0x54C) == 1) {
                temp_r30_4 = M2C_FIELD(arg0, void **, 0x508) + var_r22;
                if ((u32)M2C_FIELD(temp_r30_4, u32 *, 0x14) < (u32)PersistentData__GetCurrentLevel((s32)((char *)lbl_803DC368 + 381))) {
                    Sphere__SetColor(temp_r30_5, *(f32 *)(lbl_80310000 - 9904), *(f32 *)(lbl_80310000 - 9900), *(f32 *)(lbl_80310000 - 9904), *(f32 *)(lbl_80310000 - 9912));
                } else {
                    SphereText__SetText(temp_r30_5, lbl_80310000 - 9920);
                    Sphere__SetColor(temp_r30_5, *(f32 *)(lbl_80310000 - 9896), *(f32 *)(lbl_80310000 - 9896), *(f32 *)(lbl_80310000 - 9896), *(f32 *)(lbl_80310000 - 9900));
                }
            } else {
                Sphere__SetColor(temp_r30_5, *(f32 *)(lbl_80310000 - 9904), *(f32 *)(lbl_80310000 - 9900), *(f32 *)(lbl_80310000 - 9904), *(f32 *)(lbl_80310000 - 9912));
            }
            fn_802721F4(temp_r30_5, M2C_FIELD(arg0, f32 *, 0x1AC));
            conv.w.lo = (u32)(var_r29 ^ 0x80000000);
            conv.w.hi = 0x43300000;
            temp_f31 = (f32)(conv.d - temp_f30d);
            Sphere__SetPosition(temp_r30_5, M2C_FIELD(arg0, f32 *, 0x1BC), (temp_f31 * M2C_FIELD(arg0, f32 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0));
            if (var_r29 < (s32)M2C_FIELD((arg0 + 0x520), s32 *, 4)) {
                temp_r11_3 = *(void **)(M2C_FIELD(arg0, s32 *, 0x520) + var_r22);
                temp_r9_6 = M2C_FIELD(temp_r11_3, void **, 0x19C);
                M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_3 + M2C_FIELD(temp_r9_6, s16 *, 0xA8), M2C_FIELD(arg0, f32 *, 0x1BC) - temp_f29, (temp_f31 * M2C_FIELD(arg0, f32 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0));
                if ((s32)M2C_FIELD(arg0, s32 *, 0x54C) == 0) {
                    temp_f1 = *(f32 *)(lbl_80310000 - 9912);
                    temp_r11_4 = *(void **)(M2C_FIELD(arg0, s32 *, 0x520) + var_r22);
                    temp_r9_5 = M2C_FIELD(temp_r11_4, void **, 0x19C);
                    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r11_4 + M2C_FIELD(temp_r9_5, s16 *, 0x130), temp_f1, temp_f1, temp_f1, temp_f1);
                }
            }
            if ((s32)M2C_FIELD(arg0, s32 *, 0x548) != 0) {
                fn_8026D590(temp_r30_5);
            } else {
                fn_8026D59C(temp_r30_5);
            }
            fn_8026C6F8(temp_r30_5, 0xFE0C);
            Sphere__EnsureAnimSet(temp_r30_5, 0);
            SphereAnimSet__ClearAll(M2C_FIELD(temp_r30_5, void **, 0x164));
            temp_r11_5 = M2C_FIELD(arg0, void **, 0x538);
            M2C_FIELD(temp_r30_5, s32 *, 0x1F4) = var_r29;
            M2C_FIELD(temp_r30_5, void **, 0x200) = M2C_FIELD((M2C_FIELD(arg0, void **, 0x508) + var_r22), void **, 0);
            if (temp_r11_5 == NULL) {
                M2C_FIELD(var_r25, void **, 4) = temp_r30_5;
                M2C_FIELD(temp_r30_5, void **, 0x204) = temp_r11_5;
                M2C_FIELD(arg0, void **, 0x538) = temp_r30_5;
                M2C_FIELD(temp_r30_5, void **, 0x208) = temp_r11_5;
            } else {
                M2C_FIELD(temp_r30_5, void **, 0x208) = NULL;
                M2C_FIELD(temp_r30_5, void **, 0x204) = M2C_FIELD(var_r25, void **, 4);
                M2C_FIELD(M2C_FIELD(var_r25, void **, 4), void **, 0x208) = temp_r30_5;
                M2C_FIELD(var_r25, void **, 4) = temp_r30_5;
            }
            var_r29 += 1;
            M2C_FIELD(var_r25, s32 *, 0xC) = (s32)(M2C_FIELD(var_r25, s32 *, 0xC) + 1);
            var_r22 += 0x24;
            Sphere__AddChild(arg0, temp_r30_5);
        } while (var_r29 < temp_r23_2);
    }
    if ((s32)M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C) == 5) {
        Sphere__SetTexture(var_r19, M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 0xB, 0, 1, 1);
    } else {
        Sphere__SetTexture(var_r19, M2C_FIELD(lbl_803DC3B4, s32 *, 0x24), 0xD, 0, 1, 1);
    }
    Sphere__SetSize(var_r19, *(f32 *)(lbl_80310000 - 9876), *(f32 *)(lbl_80310000 - 9872));
    Sphere__SetColor(var_r19, *(f32 *)(lbl_80310000 - 9912), *(f32 *)(lbl_80310000 - 9912), *(f32 *)(lbl_80310000 - 9912), *(f32 *)(lbl_80310000 - 9912));
    fn_8026C6F8(var_r19, 0xFE02);
    Sphere__AddChild(arg0, var_r19);
    if ((s32)M2C_FIELD(temp_r27, s32 *, 4) <= 0) {
        Sphere__ShowTree(var_r19);
    } else {
        Sphere__HideTree(var_r19);
    }
    var_r30_4 = M2C_FIELD(arg0, void **, 0x538);
    var_r31_3 = 0;
    if (var_r30_4 != NULL) {
        do {
            if (var_r31_3 < (s32)M2C_FIELD(arg0, s32 *, 0x1A0)) {
                Sphere__HideTree(var_r30_4);
            } else {
                Sphere__ShowTree(var_r30_4);
            }
            var_r30_4 = M2C_FIELD(var_r30_4, void **, 0x208);
            var_r31_3 += 1;
        } while (var_r30_4 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    Sphere__SetPosition(var_r17, (M2C_FIELD(arg0, f32 *, 0x1BC) - *(f32 *)(lbl_80310000 - 9868)) - *(f32 *)(lbl_80310000 - 9864), M2C_FIELD(arg0, f32 *, 0x1C0) - *(f32 *)(lbl_80310000 - 9868));
}
