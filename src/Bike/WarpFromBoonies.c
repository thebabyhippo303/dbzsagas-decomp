/* Bike__WarpFromBoonies @ 0x801FDB84 (size: 0x278, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Debug__FormatMessage(char *, ...);
s32 fn_801FC8A8(void *);
M2C_UNK fn_80185744(s32);
M2C_UNK fn_80185818(s32);
f32 fn_801FC92C(s32, s32, s32, s32, s32);
M2C_UNK fn_801FEDE4(s32, s32);
extern s8 lbl_803453F8 __attribute__((section(".data")));
extern f32 lbl_80345440 __attribute__((section(".data")));
extern f32 lbl_80345444 __attribute__((section(".data")));
extern f32 lbl_80345448 __attribute__((section(".data")));
extern f32 lbl_8034544C __attribute__((section(".data")));
extern s32 lbl_803DCCC8;

f32 Bike__WarpFromBoonies(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    f32 sp1C;
    f32 sp18;
    union { f32 value; unsigned char bytes[16]; } sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f64 temp_f0_3;
    f32 temp_f31;
    s32 temp_r30;
    f32 var_f1;
    s32 temp_r10;
    s32 temp_r29;
    f32 var_f12;
    s32 temp_r8;
    s32 temp_r9_3;
    s32 var_r10;
    s32 var_r26;
    s32 var_r27;
    void *temp_r25;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_4;

    temp_f0 = M2C_FIELD(arg1, f32 *, 0);
    if (!(temp_f0 < lbl_80345440)) {
        if (!(temp_f0 > lbl_80345444)) {
            temp_f0_2 = M2C_FIELD(arg1, f32 *, 4);
            if (!(temp_f0_2 < lbl_80345440)) {
                if (!(temp_f0_2 > lbl_80345444)) {
                    temp_f0_3 = M2C_FIELD(arg1, f32 *, 8);
                    if (!(temp_f0_3 < lbl_80345440)) {
                        if (temp_f0_3 != lbl_80345440) {
                            goto block_6;
                        }
                    } else {
                        goto block_6;
                    }
                } else {
                    goto block_6;
                }
            } else {
                goto block_6;
            }
        } else {
            goto block_6;
        }
    } else {
block_6:
        temp_r9 = M2C_FIELD(arg0, void **, 0x1C);
        Debug__FormatMessage(&lbl_803453F8, (s32) arg1, arg2, arg3, arg4, arg5, (s32) temp_r9, (f64) M2C_FIELD(arg1, f32 *, 0), (f64) M2C_FIELD(arg1, f32 *, 4), (f64) M2C_FIELD(arg1, f32 *, 8), (f64) M2C_FIELD(temp_r9, f32 *, 0), (f64) M2C_FIELD(temp_r9, f32 *, 4), (f64) M2C_FIELD(temp_r9, f32 *, 8));
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x1C);
        M2C_STRUCT_COPY(arg1, temp_r9_2, 8);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_r9_2, f32 *, 8);
    }
    temp_r25 = arg0 + 0x30;
    fn_80185744(lbl_803DCCC8);
    if (M2C_FIELD(arg0, f32 *, 0x30) == M2C_FIELD(arg1, f32 *, 0)) {
        if (M2C_FIELD(temp_r25, f32 *, 4) == M2C_FIELD(arg1, f32 *, 4)) {
            if (M2C_FIELD(temp_r25, f32 *, 8) != M2C_FIELD(arg1, f32 *, 8)) {
                goto block_10;
            }
        } else {
            goto block_10;
        }
    } else {
block_10:
        sp8.value = M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        var_r27 = fn_801FEDE4((s32) arg0, (s32) ((f32 *)sp8.bytes));
        M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        if (fn_801FC8A8(arg0) != 0) {
            if (var_r27 == 0) {
                var_r26 = M2C_FIELD(arg0, s32 *, 0x20) - 1;
            } else {
                goto block_17;
            }
        } else if (var_r27 == 0) {
            var_r26 = 0;
        } else if (var_r27 == (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
            var_r26 = var_r27 - 1;
            var_r27 -= 1;
        } else {
block_17:
            var_r26 = var_r27 - 1;
        }
        temp_r10 = var_r26 * 0x1C;
        temp_r9_3 = M2C_FIELD(arg0, s32 *, 0x24);
        temp_r8 = var_r27 * 0x1C;
        temp_r30 = *(s32 *)(temp_r8 + temp_r9_3);
        temp_r29 = M2C_FIELD((temp_r8 + temp_r9_3), s32 *, 4);
        temp_f31 = fn_801FC92C((s32) arg0, (s32) arg1, *(s32 *)(temp_r10 + temp_r9_3), M2C_FIELD((temp_r10 + temp_r9_3), s32 *, 4), (s32) &sp18);
        var_f1 = fn_801FC92C((s32) arg0, (s32) arg1, temp_r30, temp_r29, (s32) &sp1C);
        if (!(temp_f31 >= var_f1)) {
            var_f1 = temp_f31;
            var_f12 = sp18;
            var_r10 = var_r26;
        } else {
            var_f12 = sp1C;
            var_r10 = var_r27;
        }
        if (!(lbl_80345448 >= var_f12)) {
            var_f12 = lbl_80345448;
        }
        if (!(lbl_8034544C <= var_f12)) {
            var_f12 = lbl_8034544C;
        }
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_r25, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(temp_r25, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x3C) = var_f1;
        temp_r9_4 = M2C_FIELD(arg0, s32 *, 0x24) + (var_r10 * 0x1C);
        M2C_FIELD(arg0, f32 *, 0x44) = var_f12;
        M2C_FIELD(arg0, s32 *, 0x48) = var_r26;
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((var_f12 * M2C_FIELD(temp_r9_4, f32 *, 0x14)) + M2C_FIELD(temp_r9_4, f32 *, 0x18));
        M2C_FIELD(arg0, s32 *, 0x4C) = var_r27;
    }
    fn_80185818(lbl_803DCCC8);
    return M2C_FIELD(arg0, f32 *, 0x40);
}
