/* Audio__StopAll @ 0x80190028 (size: 0x4BC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Audio__RecycleSoundGroup(void *, void *);
void Mem__Delete(void *);
s32 SfxPlayer__IsActive(void *);
s32 SfxPlayer__IsFinished(void *);
void SfxPlayer__StopAllVoices(void *);
void StreamQueue__Kill(void *);
s32 StreamQueue__Stop(void *, f32);
void * memset(void *, int, u32);
M2C_UNK fn_8019EC08();                              /* extern */
extern f32 lbl_8033F2C8 __attribute__((section(".data")));

void Audio__StopAll(void *arg0, s32 arg1) {
    s32 ld_C;
    M2C_UNK **var_r9;
    M2C_UNK *temp_r9_4;
    s32 temp_r29_2;
    s32 temp_r29_4;
    s32 temp_r9_3;
    s32 temp_r9_5;
    s32 temp_r9_6;
    void *temp_r30;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r30_2;
    s32 var_r30_3;
    s32 var_r30_4;
    s32 var_r30_5;
    void **var_r3;
    void **var_r3_2;
    void **var_r4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r28;
    void *temp_r29;
    void *temp_r29_3;
    s32 temp_r9_7;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_2;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r30;

    temp_r30 = arg0 + 0xCC;
    StreamQueue__Stop(arg0, lbl_8033F2C8);
    StreamQueue__Kill(arg0);
    StreamQueue__Stop(temp_r30, lbl_8033F2C8);
    StreamQueue__Kill(temp_r30);
    var_r30 = M2C_FIELD(arg0, void **, 0x1C8);
    if (var_r30 != NULL) {
        do {
            temp_r28 = M2C_FIELD(var_r30, void **, 0x38);
            if ((SfxPlayer__IsActive(var_r30) != 0) || (SfxPlayer__IsFinished(var_r30) != 0)) {
                temp_r29 = arg0 + 0x1C8;
                if ((void *) M2C_FIELD(arg0, void **, 0x1C8) == var_r30) {
                    M2C_FIELD(arg0, void **, 0x1C8) = (void *) M2C_FIELD(var_r30, void **, 0x38);
                } else {
                    M2C_FIELD(M2C_FIELD(var_r30, void **, 0x34), void **, 0x38) = (void *) M2C_FIELD(var_r30, void **, 0x38);
                }
                if ((void *) M2C_FIELD(temp_r29, void **, 4) == var_r30) {
                    M2C_FIELD(temp_r29, void **, 4) = (void *) M2C_FIELD(var_r30, void **, 0x34);
                } else {
                    M2C_FIELD(M2C_FIELD(var_r30, void **, 0x38), void **, 0x34) = (void *) M2C_FIELD(var_r30, void **, 0x34);
                }
                temp_r0 = M2C_FIELD(temp_r29, void **, 8);
                if (temp_r0 != NULL) {
                    if (var_r30 != NULL) {
                        temp_r9 = M2C_FIELD(var_r30, void **, 0x3C);
                        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x2C)(var_r30 + M2C_FIELD(temp_r9, s16 *, 0x28), 3);
                    }
                } else {
                    M2C_FIELD(var_r30, void **, 0x34) = temp_r0;
                    M2C_FIELD(var_r30, void **, 0x38) = temp_r0;
                }
                M2C_FIELD(temp_r29, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r29, s32 *, 0xC) - 1);
            } else {
                SfxPlayer__StopAllVoices(var_r30);
            }
            var_r30 = temp_r28;
        } while (var_r30 != NULL);
    }
    if (arg1 == 0) {
        if ((void *) M2C_FIELD(arg0, void **, 0x1C8) != NULL) {
            temp_r30_2 = arg0 + 0x1C8;
            do {
                if ((void *) M2C_FIELD(arg0, void **, 0x1C8) == M2C_FIELD(arg0, void **, 0x1C8)) {
                    M2C_FIELD(arg0, void **, 0x1C8) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), void **, 0x38);
                } else {
                    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), void **, 0x34), void **, 0x38) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), void **, 0x38);
                }
                if ((void *) M2C_FIELD(temp_r30_2, void **, 4) == M2C_FIELD(arg0, void **, 0x1C8)) {
                    M2C_FIELD(temp_r30_2, void **, 4) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), void **, 0x34);
                } else {
                    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), void **, 0x38), void **, 0x34) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), void **, 0x34);
                }
                temp_r0_2 = M2C_FIELD(temp_r30_2, void **, 8);
                if (temp_r0_2 != NULL) {
                    if (M2C_FIELD(arg0, void **, 0x1C8) != NULL) {
                        temp_r9_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), void **, 0x3C);
                        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x2C)(M2C_FIELD(arg0, void **, 0x1C8) + M2C_FIELD(temp_r9_2, s16 *, 0x28), 3);
                    }
                } else {
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), void **, 0x38) = temp_r0_2;
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), void **, 0x34) = temp_r0_2;
                }
                ld_C = M2C_FIELD(temp_r30_2, s32 *, 0xC);
                M2C_FIELD(temp_r30_2, s32 *, 0xC) = (s32) (ld_C - 1);
            } while ((void *) M2C_FIELD(arg0, void **, 0x1C8) != NULL);
        }
        var_r30_2 = 0;
loop_40:
        if (var_r30_2 < (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x190), s32 *, 4)) {
            temp_r11 = M2C_FIELD(arg0, void **, 0x190);
            var_r0 = var_r30_2;
            if (var_r30_2 < 0) {
                var_r0 = M2C_FIELD(temp_r11, s32 *, 4) - 1;
            }
            temp_r9_3 = M2C_FIELD(temp_r11, s32 *, 4);
            if ((var_r0 >= temp_r9_3) || (temp_r9_3 == 0)) {
                var_r9 = NULL;
            } else {
                var_r9 = M2C_FIELD(temp_r11, void **, 0) + (var_r0 * 4);
            }
            temp_r9_4 = *var_r9;
            if (temp_r9_4 != NULL) {
                *temp_r9_4 = M2C_FIELD(arg0, M2C_UNK **, 0x1B8);
                M2C_FIELD(arg0, M2C_UNK **, 0x1B8) = temp_r9_4;
            }
            var_r30_2 += 1;
            goto loop_40;
        }
        if ((s32) M2C_FIELD((arg0 + 0x190), s32 *, 4) != 0) {
            temp_r29_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x190), s32 *, 4);
            var_r30_3 = 0;
            if ((u32) temp_r29_2 > 0U) {
                do {
                    temp_r11_2 = M2C_FIELD(arg0, void **, 0x190);
                    var_r0_2 = var_r30_3;
                    if (var_r30_3 < 0) {
                        var_r0_2 = M2C_FIELD(temp_r11_2, s32 *, 4) - 1;
                    }
                    temp_r9_5 = M2C_FIELD(temp_r11_2, s32 *, 4);
                    if ((var_r0_2 >= temp_r9_5) || (temp_r9_5 == 0)) {
                        var_r3 = NULL;
                    } else {
                        var_r3 = M2C_FIELD(temp_r11_2, void **, 0) + (var_r0_2 * 4);
                    }
                    temp_r3 = *var_r3;
                    if (temp_r3 != NULL) {
                        Mem__Delete(temp_r3);
                    }
                    var_r30_3 += 1;
                } while ((u32) var_r30_3 < (u32) temp_r29_2);
            }
        }
        temp_r29_3 = M2C_FIELD(arg0, void **, 0x190);
        if ((s32) M2C_FIELD(temp_r29_3, s32 *, 0x10) != 0) {
            temp_r3_2 = M2C_FIELD(temp_r29_3, void **, 0);
            if (temp_r3_2 != NULL) {
                memset(temp_r3_2, 0, M2C_FIELD(temp_r29_3, s32 *, 8) * 4);
            }
        }
        M2C_FIELD(temp_r29_3, s32 *, 4) = 0;
        var_r30_4 = 0;
loop_63:
        if (var_r30_4 < (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), s32 *, 4)) {
            temp_r11_3 = M2C_FIELD(arg0, void **, 0x188);
            var_r0_3 = var_r30_4;
            if (var_r30_4 < 0) {
                var_r0_3 = M2C_FIELD(temp_r11_3, s32 *, 4) - 1;
            }
            temp_r9_6 = M2C_FIELD(temp_r11_3, s32 *, 4);
            if ((var_r0_3 >= temp_r9_6) || (temp_r9_6 == 0)) {
                var_r4 = NULL;
            } else {
                var_r4 = M2C_FIELD(temp_r11_3, void **, 0) + (var_r0_3 * 4);
            }
            var_r30_4 += 1;
            Audio__RecycleSoundGroup(arg0, *var_r4);
            goto loop_63;
        }
        if ((s32) M2C_FIELD((arg0 + 0x188), s32 *, 4) != 0) {
            var_r30_5 = 0;
            temp_r29_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), s32 *, 4);
            if ((u32) temp_r29_4 > 0U) {
                do {
                    temp_r11_4 = M2C_FIELD(arg0, void **, 0x188);
                    var_r0_4 = var_r30_5;
                    if (var_r30_5 < 0) {
                        var_r0_4 = M2C_FIELD(temp_r11_4, s32 *, 4) - 1;
                    }
                    temp_r9_7 = M2C_FIELD(temp_r11_4, s32 *, 4);
                    if ((var_r0_4 >= temp_r9_7) || (temp_r9_7 == 0)) {
                        var_r3_2 = NULL;
                    } else {
                        var_r3_2 = M2C_FIELD(temp_r11_4, void **, 0) + (var_r0_4 * 4);
                    }
                    temp_r11_5 = *var_r3_2;
                    if (temp_r11_5 != NULL) {
                        temp_r9_8 = M2C_FIELD(temp_r11_5, void **, 0x64);
                        M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, M2C_UNK), 0x24)(temp_r11_5 + M2C_FIELD(temp_r9_8, s16 *, 0x20), 3);
                    }
                    var_r30_5 += 1;
                } while ((u32) var_r30_5 < (u32) temp_r29_4);
            }
        }
        temp_r30_3 = M2C_FIELD(arg0, void **, 0x188);
        if ((s32) M2C_FIELD(temp_r30_3, s32 *, 0x10) != 0) {
            temp_r3_3 = M2C_FIELD(temp_r30_3, void **, 0);
            if (temp_r3_3 != NULL) {
                memset(temp_r3_3, 0, M2C_FIELD(temp_r30_3, s32 *, 8) * 4);
            }
        }
        M2C_FIELD(temp_r30_3, s32 *, 4) = 0;
        temp_r11_6 = M2C_FIELD(arg0, void **, 0x180);
        if (temp_r11_6 != NULL) {
            temp_r9_9 = M2C_FIELD(temp_r11_6, void **, 0x60);
            M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *), 0x8C)(temp_r11_6 + M2C_FIELD(temp_r9_9, s16 *, 0x88));
        }
        fn_8019EC08();
    }
    temp_r10 = M2C_FIELD(arg0, void **, 0x180);
    if (temp_r10 != NULL) {
        temp_r9_10 = M2C_FIELD(temp_r10, void **, 0x60);
        M2C_FIELD(temp_r9_10, M2C_UNK (**)(void *, M2C_UNK, f32), 0xFC)(temp_r10 + M2C_FIELD(temp_r9_10, s16 *, 0xF8), 1, lbl_8033F2C8);
        temp_r30_4 = M2C_FIELD(arg0, void **, 0x180);
        if (temp_r30_4 != NULL) {
            temp_r9_11 = M2C_FIELD(temp_r30_4, void **, 0x60);
            M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *), 0x54)(temp_r30_4 + M2C_FIELD(temp_r9_11, s16 *, 0x50));
        }
    }
}
