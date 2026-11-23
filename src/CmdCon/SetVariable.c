/* CmdCon__SetVariable @ 0x8018BE14 (size: 0x448, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 CmdCon__SelectContext(s32, s32);
void CmdCon__PrintNotify(void *, char *, ...);
s32 VariableContext__FindVariable(s32, s32);
s32 String__ReadToken(char *, char *, char *, s32, void *);
s32 CmdCon__FindContext(s32, s32);
void CmdCon__PrintError(void *, char *, ...);
M2C_UNK CmdCon__Print(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern s8 lbl_8033E70C __attribute__((section(".data")));
extern s8 lbl_8033E748 __attribute__((section(".data")));
extern s8 lbl_8033E860 __attribute__((section(".data")));
extern s8 lbl_8033E910 __attribute__((section(".data")));
extern s8 lbl_8033E928 __attribute__((section(".data")));
extern s8 lbl_8033E93C __attribute__((section(".data")));
extern s8 lbl_8033E958 __attribute__((section(".data")));
extern s8 lbl_8033E978 __attribute__((section(".data")));
extern s8 lbl_8033E984 __attribute__((section(".data")));
extern s8 lbl_8033E98C __attribute__((section(".data")));
extern s32 lbl_803DCC14;

s32 CmdCon__SetVariable(void *arg0, u8 *arg1, s32 arg2, s8 *arg3) {
    union { s8 value; unsigned char bytes[256]; } sp8;
    union { s8 value; unsigned char bytes[4096]; } sp108;
    union { s32 value; unsigned char bytes[8]; } sp1108;
    f32 temp_f1;
    s32 *var_r3;
    s32 *var_r3_3;
    s32 *var_r9;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r25;
    s32 temp_r9;
    s32 temp_r9_2;
    s32 temp_ret;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r11;
    s32 var_r29;
    s32 var_r3_2;
    s32 var_r3_4;
    s8 *var_r4;
    u8 temp_r0;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r3;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;

    temp_r25 = M2C_FIELD(arg0, s32 *, 0x10);
    if (arg1 != NULL) {
        temp_r0 = *arg1;
        if ((s8) temp_r0 == 0) {
            temp_r11 = M2C_FIELD(arg0, void **, 8);
            temp_r9 = M2C_FIELD(temp_r11, s32 *, 4);
            if (((s8) temp_r0 >= temp_r9) || (temp_r9 == 0)) {
                var_r9 = NULL;
            } else {
                var_r9 = M2C_FIELD(temp_r11, s32 **, 0);
            }
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) *var_r9;
            goto block_9;
        }
        if (CmdCon__SelectContext((s32) arg0, (s32) arg1) == 0) {
            CmdCon__PrintNotify(arg0, &lbl_8033E860, (s32) arg1);
            return 0;
        }
        goto block_9;
    }
block_9:
    temp_r9 = VariableContext__FindVariable(M2C_FIELD(arg0, s32 *, 0x10), arg2);
    if (temp_r9 == 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 8);
        temp_r0_2 = M2C_FIELD(temp_r3, u32 *, 4);
        if ((temp_r9 >= temp_r0_2) || (temp_r0_2 == 0)) {
            var_r3 = NULL;
        } else {
            var_r3 = M2C_FIELD(temp_r3, s32 **, 0);
        }
        temp_r9 = VariableContext__FindVariable(*var_r3, arg2);
        if (temp_r9 == 0) {
            if (CmdCon__SelectContext((s32) arg0, arg2) != 0) {
                CmdCon__PrintNotify(arg0, &lbl_8033E748, arg2);
                return 1;
            }
            CmdCon__PrintNotify(arg0, &lbl_8033E910, arg2);
            M2C_FIELD(arg0, s32 *, 0x10) = temp_r25;
            return 0;
        }
        goto block_18;
    }
block_18:
    if (((arg3 != NULL) && ((s32) *arg3 != 0)) || (temp_r0_3 = M2C_FIELD(temp_r9, s32 *, 0), (((temp_r0_3 & 8) == 0) == 0))) {
        if (M2C_FIELD(temp_r9, s32 *, 0) & 1) {
            var_r4 = &lbl_8033E928;
            CmdCon__PrintError(arg0, var_r4, arg2);
            M2C_FIELD(arg0, s32 *, 0x10) = temp_r25;
            return 0;
        }
        var_r29 = String__ReadToken(arg3, &lbl_8033E70C, ((s8 *)sp8.bytes), 0xFF, ((s32 *)sp1108.bytes));
        if (sp1108.value == 0) {
            var_r3_2 = M2C_FIELD(arg0, s32 *, 0x10);
            var_r29 = (s32) arg3;
        } else if ((s8) (u8) sp8.value != 0) {
            var_r3_2 = CmdCon__FindContext((s32) arg0, (s32) ((s8 *)sp8.bytes));
        } else {
            temp_r11_2 = M2C_FIELD(arg0, void **, 8);
            temp_r9_2 = M2C_FIELD(temp_r11_2, s32 *, 4);
            if (((s8) (u8) sp8.value >= temp_r9_2) || (temp_r9_2 == 0)) {
                var_r3_3 = NULL;
            } else {
                var_r3_3 = M2C_FIELD(temp_r11_2, s32 **, 0);
            }
            var_r3_2 = *var_r3_3;
        }
        if (var_r3_2 != 0) {
            var_r11 = VariableContext__FindVariable(var_r3_2, var_r29);
        } else {
            var_r11 = 0;
        }
        if ((var_r11 == 0) || (M2C_FIELD(var_r11, s32 *, 0) & 2) || (temp_r9_3 = M2C_FIELD(var_r11, void **, 4), ((M2C_FIELD(temp_r9_3, s32 (**)(s32, s8 *, M2C_UNK), 0x2C)(var_r11 + M2C_FIELD(temp_r9_3, s16 *, 0x28), ((s8 *)sp108.bytes), 0xFFF) == 0) != 0))) {
            temp_r9_4 = M2C_FIELD(temp_r9, void **, 4);
            var_r3_4 = M2C_FIELD(temp_r9_4, s32 (**)(s32, s8 *), 0x24)(temp_r9 + M2C_FIELD(temp_r9_4, s16 *, 0x20), arg3);
        } else {
            temp_r9_5 = M2C_FIELD(temp_r9, void **, 4);
            var_r3_4 = M2C_FIELD(temp_r9_5, s32 (**)(s32, s8 *), 0x24)(temp_r9 + M2C_FIELD(temp_r9_5, s16 *, 0x20), ((s8 *)sp108.bytes));
        }
        if (var_r3_4 == 0) {
            CmdCon__PrintError(arg0, &lbl_8033E93C, arg2, (s32) arg3);
            M2C_FIELD(arg0, s32 *, 0x10) = temp_r25;
            return 0;
        }
        temp_r9_6 = M2C_FIELD(temp_r9, void **, 4);
        M2C_FIELD(temp_r9_6, M2C_UNK (**)(s32), 0x34)(temp_r9 + M2C_FIELD(temp_r9_6, s16 *, 0x30));
        if (!(M2C_FIELD(temp_r9, s32 *, 0) & 4)) {
            temp_r9_7 = M2C_FIELD(temp_r9, void **, 4);
            var_r0 = M2C_FIELD(temp_r9_7, s32 (**)(s32, s8 *, M2C_UNK), 0x2C)(temp_r9 + M2C_FIELD(temp_r9_7, s16 *, 0x28), ((s8 *)sp108.bytes), 0xFFF) != 0;
            if (var_r0 != 0) {
                if (arg1 != NULL) {
                    CmdCon__PrintNotify(arg0, &lbl_8033E978, (s32) arg1, arg2, (s32) ((s8 *)sp108.bytes));
                } else {
                    CmdCon__PrintNotify(arg0, &lbl_8033E984, arg2, (s32) ((s8 *)sp108.bytes));
                }
                lbl_803DCC14 = 1;
                M2C_FIELD(arg0, s32 *, 0x10) = temp_r25;
                return 1;
            }
            var_r4 = &lbl_8033E958;
            CmdCon__PrintError(arg0, var_r4, arg2);
            M2C_FIELD(arg0, s32 *, 0x10) = temp_r25;
            return 0;
        }
        lbl_803DCC14 = 1;
        M2C_FIELD(arg0, s32 *, 0x10) = temp_r25;
        return 1;
    }
    if (!(temp_r0_3 & 2)) {
        temp_r9_8 = M2C_FIELD(temp_r9, void **, 4);
        temp_ret = M2C_FIELD(temp_r9_8, s32 (**)(s32, s8 *, M2C_UNK), 0x2C)(M2C_FIELD(temp_r9_8, s16 *, 0x28) + temp_r9, ((s8 *)sp8.bytes), 0xFFF);
        temp_f1 = M2C_BITWISE(f32, temp_ret);
        var_r0_2 = 1;
        if (temp_ret == 0) {
            var_r0_2 = 0;
        }
        if (var_r0_2 == 0) {
            var_r4 = &lbl_8033E958;
            CmdCon__PrintError(arg0, var_r4, arg2);
            M2C_FIELD(arg0, s32 *, 0x10) = temp_r25;
            return 0;
    } else {
        var_r4 = &lbl_8033E98C;
        CmdCon__PrintError(arg0, var_r4, arg2);
        M2C_FIELD(arg0, s32 *, 0x10) = temp_r25;
        return 0;
    }
    }
    if (arg1 != NULL) {
        CmdCon__Print((s32) arg0, (s32) &lbl_8033E978, (s32) arg1, arg2, (s32) ((s8 *)sp8.bytes), M2C_ERROR(/* Read from unset register $r8 */), M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), temp_f1, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
    } else {
        CmdCon__Print((s32) arg0, (s32) &lbl_8033E984, arg2, (s32) ((s8 *)sp8.bytes), M2C_ERROR(/* Read from unset register $r7 */), M2C_ERROR(/* Read from unset register $r8 */), M2C_ERROR(/* Read from unset register $r9 */), M2C_ERROR(/* Read from unset register $r10 */), temp_f1, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */), M2C_ERROR(/* Read from unset register $f8 */));
    }
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r25;
    return 1;
}
