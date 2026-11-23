/* BoneChain__ParseControls @ 0x801DBB48 (size: 0x4B0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 BoneChain__SetName(void *, char *);
int Skeleton__FindBoneByName(void *, void **, char *);
int String__CompareNIgnoreCase(const char *, const char *, int);
f32 sprintf(s8 *, void *, s8 *, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
int strlen(const char *);
extern M2C_UNK lbl_803439BC __attribute__((section(".data")));
extern M2C_UNK lbl_803439C4 __attribute__((section(".data")));
extern M2C_UNK lbl_803439CC __attribute__((section(".data")));
extern M2C_UNK lbl_803439D4 __attribute__((section(".data")));
extern M2C_UNK lbl_80343A00 __attribute__((section(".data")));
extern M2C_UNK lbl_80343A30 __attribute__((section(".data")));
extern M2C_UNK lbl_80343A38 __attribute__((section(".data")));
extern M2C_UNK lbl_80343A68;
extern M2C_UNK lbl_80343A98 __attribute__((section(".data")));
extern M2C_UNK lbl_80343AA0 __attribute__((section(".data")));
extern M2C_UNK lbl_80343AA8 __attribute__((section(".data")));
extern M2C_UNK lbl_80343AD8 __attribute__((section(".data")));
extern M2C_UNK lbl_80343B04 __attribute__((section(".data")));
extern s32 lbl_803DE5F8;
extern s32 lbl_803DE5FC;

s32 BoneChain__ParseControls(void *arg0, void *arg1, s8 *arg2) {
    void *sp120;
    union { s8 value; unsigned char bytes[24]; } sp8;
    union { s8 value; unsigned char bytes[256]; } sp20;
    M2C_UNK *var_r4;
    f32 temp_f1;
    f32 temp_ret;
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_r24;
    s32 temp_r26;
    s32 temp_r30;
    s32 temp_r9_5;
    s32 temp_ret_2;
    s32 temp_ret_3;
    s32 temp_ret_4;
    s32 temp_ret_5;
    s32 temp_ret_6;
    s32 temp_ret_7;
    s32 var_r25;
    s32 var_r28;
    s32 var_r29;
    s32 var_r29_2;
    s32 var_r6;
    s32 var_r8;
    s8 *temp_r5;
    s8 *temp_r5_2;
    s8 *var_r7;
    void **var_r10;
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r27;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_6;
    void *temp_r9_7;

    if (BoneChain__SetName(arg0, arg2) != 0) {
        temp_r27 = M2C_FIELD(arg1, void **, 0xC);
        var_r29 = 0;
        var_r25 = 1;
        sp120 = M2C_FIELD(temp_r27, void **, 0x10);
        temp_r30 = strlen(arg2);
        if ((s32) M2C_FIELD(temp_r27, u16 *, 0) > 0) {
            do {
                if ((String__CompareNIgnoreCase(M2C_FIELD(sp120, s32 *, 0xD8) + 0xB0, arg2, temp_r30) == 0) && ((s32) *(s32 *)(M2C_FIELD(sp120, s32 *, 0xD8) + 0xB0 + temp_r30) == 0x21)) {
                    var_r25 += 1;
                }
                var_r29 += 1;
                sp120 += 0xE0;
            } while (var_r29 < (s32) M2C_FIELD(temp_r27, u16 *, 0));
        }
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x34);
        temp_ret = M2C_FIELD(temp_r9_2, f32 (**)(void *, s32), 0x1C)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x18), var_r25);
        var_f1 = temp_ret;
        if (M2C_BITWISE(s32, temp_ret) != 0) {
            var_r29_2 = 1;
            if (var_r25 > 1) {
                temp_r26 = lbl_803DE5FC;
                var_r28 = 0x6C;
                temp_r24 = lbl_803DE5F8;
loop_9:
                sprintf(((s8 *)sp8.bytes), &lbl_803439BC, M2C_FIELD(arg0, s8 **, 4), var_r29_2, M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), var_f1, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
                Skeleton__FindBoneByName(temp_r27, &sp120, ((s8 *)sp8.bytes));
                temp_r9_3 = M2C_FIELD(arg0, void **, 0x34);
                temp_ret_2 = M2C_FIELD(temp_r9_3, s32 (**)(void *), 0x24)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x20));
                if (temp_ret_2 != 0) {
                    sprintf(((s8 *)sp8.bytes), &lbl_803439C4, M2C_FIELD(arg0, s8 **, 4), var_r29_2, M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), M2C_BITWISE(f32, temp_ret_2), M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
                    temp_ret_3 = Skeleton__FindBoneByName(temp_r27, M2C_FIELD(arg0, void **, 0x3C) + var_r28 + 8, ((s8 *)sp8.bytes));
                    if (temp_ret_3 != 0) {
                        M2C_FIELD((var_r28 + M2C_FIELD(arg0, void **, 0x3C)), s32 *, 4) = temp_r26;
                    }
                    sprintf(((s8 *)sp8.bytes), &lbl_803439CC, M2C_FIELD(arg0, s8 **, 4), var_r29_2, M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), M2C_BITWISE(f32, temp_ret_3), M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
                    temp_ret_4 = Skeleton__FindBoneByName(temp_r27, &sp120, ((s8 *)sp8.bytes));
                    temp_f1 = M2C_BITWISE(f32, temp_ret_4);
                    if (temp_ret_4 != 0) {
                        temp_r11 = var_r28 + M2C_FIELD(arg0, void **, 0x3C);
                        temp_r9_4 = M2C_FIELD(temp_r11, void **, 8);
                        if (temp_r9_4 == NULL) {
                            M2C_FIELD(temp_r11, void **, 8) = sp120;
                            M2C_FIELD((var_r28 + M2C_FIELD(arg0, void **, 0x3C)), s32 *, 4) = temp_r24;
                            goto block_15;
                        }
                        var_f1_2 = sprintf(((s8 *)sp20.bytes), &lbl_803439D4, M2C_FIELD(arg0, s8 **, 4), var_r29_2, M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), (s32) temp_r9_4, M2C_ERROR(/* Read from unset register $r10 */), temp_f1, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
                        var_r6 = var_r29_2;
                        var_r4 = &lbl_80343A00;
                        var_r7 = M2C_FIELD(arg0, s8 **, 4);
                        var_r8 = var_r6;
                        goto block_36;
                    }
block_15:
                    sprintf(((s8 *)sp8.bytes), &lbl_80343A30, M2C_FIELD(arg0, s8 **, 4), var_r29_2, M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), temp_f1, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
                    temp_ret_5 = Skeleton__FindBoneByName(temp_r27, &sp120, ((s8 *)sp8.bytes));
                    var_f1 = M2C_BITWISE(f32, temp_ret_5);
                    if (temp_ret_5 != 0) {
                        temp_r11_2 = var_r28 + M2C_FIELD(arg0, void **, 0x3C);
                        temp_r9_5 = M2C_FIELD(temp_r11_2, s32 *, 8);
                        if (temp_r9_5 != 0) {
                            var_f1_2 = sprintf(((s8 *)sp20.bytes), &lbl_803439D4, M2C_FIELD(arg0, s8 **, 4), var_r29_2, M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), temp_r9_5, M2C_ERROR(/* Read from unset register $r10 */), var_f1, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
                            temp_r9_6 = var_r28 + M2C_FIELD(arg0, void **, 0x3C);
                            if ((s32) M2C_FIELD(temp_r9_6, s32 *, 4) == temp_r26) {
                                var_r6 = var_r29_2;
                                var_r4 = &lbl_80343A38;
                                var_r7 = M2C_FIELD(arg0, s8 **, 4);
                                var_r8 = var_r6;
                                goto block_36;
                            }
                            temp_r5 = M2C_FIELD(arg0, s8 **, 4);
                            sprintf(((s8 *)sp20.bytes), &lbl_80343A68, temp_r5, var_r29_2, (s32) temp_r5, var_r29_2, (s32) temp_r9_6, M2C_ERROR(/* Read from unset register $r10 */), var_f1_2, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
                            goto block_37;
                        }
                        M2C_FIELD(temp_r11_2, s32 *, 8) = (s32) sp120;
                        M2C_FIELD((var_r28 + M2C_FIELD(arg0, void **, 0x3C)), s32 *, 4) = (temp_r24 | temp_r26);
                        goto block_21;
                    }
block_21:
                    var_r29_2 += 1;
                    var_r28 += 0x6C;
                    if (var_r29_2 >= var_r25) {
                        goto block_22;
                    }
                    goto loop_9;
                }
                goto block_37;
            }
block_22:
            sprintf(((s8 *)sp8.bytes), &lbl_80343A98, M2C_FIELD(arg0, s8 **, 4), M2C_ERROR(/* Read from unset register $r6 */), M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), var_f1, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
            temp_ret_6 = Skeleton__FindBoneByName(temp_r27, M2C_FIELD(arg0, void **, 0x3C) + 8, ((s8 *)sp8.bytes));
            if (temp_ret_6 != 0) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 4) = (s32) lbl_803DE5F8;
            }
            sprintf(((s8 *)sp8.bytes), &lbl_80343AA0, M2C_FIELD(arg0, s8 **, 4), M2C_ERROR(/* Read from unset register $r6 */), M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), M2C_BITWISE(f32, temp_ret_6), M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
            temp_ret_7 = Skeleton__FindBoneByName(temp_r27, &sp120, ((s8 *)sp8.bytes));
            var_f1_2 = M2C_BITWISE(f32, temp_ret_7);
            if (temp_ret_7 != 0) {
                temp_r11_3 = M2C_FIELD(arg0, void **, 0x3C);
                if ((void *) M2C_FIELD(temp_r11_3, void **, 8) != NULL) {
                    temp_r5_2 = M2C_FIELD(arg0, s8 **, 4);
                    sprintf(((s8 *)sp20.bytes), &lbl_80343AD8, temp_r5_2, (s32) temp_r5_2, M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), sprintf(((s8 *)sp20.bytes), &lbl_80343AA8, M2C_FIELD(arg0, s8 **, 4), M2C_ERROR(/* Read from unset register $r6 */), M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), var_f1_2, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */)), M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
                    goto block_37;
                }
                M2C_FIELD(temp_r11_3, void **, 8) = sp120;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 4) = (s32) (lbl_803DE5F8 | lbl_803DE5FC);
                goto block_28;
            }
block_28:
            temp_r10 = M2C_FIELD(arg0, void **, 0xC);
            var_r29 = 2;
            var_r8 = (s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r10, void **, 0x34), void **, 0xD8), u8 *, 0xC8);
            if (var_r25 > 2) {
                var_r10 = temp_r10 + 0x68;
loop_30:
                temp_r11_4 = *var_r10;
                var_r10 += 0x34;
                var_r7 = (s8 *) M2C_FIELD(M2C_FIELD(temp_r11_4, void **, 0xD8), u8 *, 0xC8);
                if (var_r7 == var_r8) {
                    var_r29 += 1;
                    if (var_r29 >= var_r25) {
                        goto block_32;
                    }
                    goto loop_30;
                }
                var_r4 = &lbl_80343B04;
                var_r6 = var_r29;
block_36:
                sprintf(((s8 *)sp20.bytes), var_r4, M2C_FIELD(arg0, s8 **, 4), var_r6, (s32) var_r7, var_r8, M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), var_f1_2, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
                goto block_37;
            }
block_32:
            temp_r9_7 = M2C_FIELD(arg0, void **, 0x34);
            if (M2C_FIELD(temp_r9_7, s32 (**)(void *, void *, void *), 0x2C)(arg0 + M2C_FIELD(temp_r9_7, s16 *, 0x28), arg1, arg1 + 0x10) != 0) {
                M2C_FIELD(arg0, s32 *, 0x188) = 0;
                return 1;
            }
            temp_r9 = M2C_FIELD(arg0, void **, 0x34);
            return M2C_FIELD(temp_r9, s32 (**)(void *), 0x14)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x10));
        }
        goto block_37;
    }
block_37:
    temp_r9 = M2C_FIELD(arg0, void **, 0x34);
    return M2C_FIELD(temp_r9, s32 (**)(void *), 0x14)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x10));
}
