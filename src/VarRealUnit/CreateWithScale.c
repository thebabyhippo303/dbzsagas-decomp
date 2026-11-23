/* VarRealUnit__CreateWithScale @ 0x8018AA54 (size: 0x1F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 VarRealUnit__Create(u8 *, u8 *, s32, s32, s8 *, s32, s32, s32, s32, s32);
s32 VarRealUnit__CreateScaled(char *, char *, s32, s32, char *, void *, void *, f32, s32, s32, s32);
void * sprintf(s8 *, void *, s8 *, s32);
extern M2C_UNK VarRealUnit__ConvertDivideScale __attribute__((section(".data")));
extern M2C_UNK VarRealUnit__ConvertIdentity __attribute__((section(".data")));
extern M2C_UNK VarRealUnit__ConvertMultiplyScale __attribute__((section(".data")));
extern M2C_UNK VarRealUnit__ConvertReciprocal __attribute__((section(".data")));
extern M2C_UNK VarRealUnit__ConvertReciprocalScaled __attribute__((section(".data")));
extern s8 lbl_8033E6CC __attribute__((section(".data")));
extern s8 lbl_8033E6D4 __attribute__((section(".data")));
extern s8 lbl_8033E6DC __attribute__((section(".data")));
extern s8 lbl_8033E6E0 __attribute__((section(".data")));
extern M2C_UNK lbl_8033E6EC __attribute__((section(".data")));
extern M2C_UNK lbl_8033E6F4;
extern f32 lbl_8033E6F8 __attribute__((section(".data")));
extern f32 lbl_8033E6FC __attribute__((section(".data")));
extern s8 lbl_803A35EC __attribute__((section(".data")));

void VarRealUnit__CreateWithScale(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u32 arg7, f32 farg0) {
    s32 flag;
    s32 sp10;
    s32 spC;
    s32 sp8;
    M2C_UNK *var_r8;
    M2C_UNK *var_r9;
    f32 var_f1;
    s8 *var_r7;

    flag = arg4 != 0;
    var_f1 = farg0;
    if (var_f1 == lbl_8033E6F8) {
        if (!flag) {
            sp8 = arg6;
            spC = arg7;
            VarRealUnit__Create(arg0, arg1, arg2, arg3, &lbl_8033E6CC, (s32) &VarRealUnit__ConvertIdentity, (s32) &VarRealUnit__ConvertIdentity, arg5, M2C_ERROR(/* Unable to find stack arg 0x0 in block */), M2C_ERROR(/* Unable to find stack arg 0x4 in block */));
            return;
        } else {
            sp8 = arg6;
            spC = arg7;
            VarRealUnit__Create(arg0, arg1, arg2, arg3, &lbl_8033E6D4, (s32) &VarRealUnit__ConvertReciprocal, (s32) &VarRealUnit__ConvertReciprocal, arg5, M2C_ERROR(/* Unable to find stack arg 0x0 in block */), M2C_ERROR(/* Unable to find stack arg 0x4 in block */));
            return;
        }
    }
    if (var_f1 == lbl_8033E6FC) {
        if (flag) {
            var_r8 = &VarRealUnit__ConvertReciprocalScaled;
            sp8 = arg5;
            sp10 = arg7;
            spC = arg6;
            var_r7 = &lbl_8033E6E0;
            goto block_11;
        }
        sp8 = arg5;
        spC = arg6;
        sp10 = arg7;
        var_r7 = &lbl_8033E6DC;
        var_r8 = &VarRealUnit__ConvertMultiplyScale;
        var_r9 = &VarRealUnit__ConvertDivideScale;
    } else if (arg4 == 0) {
        var_f1 = M2C_BITWISE(f32, sprintf(&lbl_803A35EC, &lbl_8033E6F4, (s8 *) arg2, arg3));
        sp8 = arg5;
        spC = arg6;
        sp10 = arg7;
        var_r7 = &lbl_803A35EC;
        var_r9 = &VarRealUnit__ConvertDivideScale;
        var_r8 = &VarRealUnit__ConvertMultiplyScale;
    } else {
        var_r8 = &VarRealUnit__ConvertReciprocalScaled;
        var_f1 = M2C_BITWISE(f32, sprintf(&lbl_803A35EC, &lbl_8033E6EC, (s8 *) arg2, arg3));
        sp8 = arg5;
        sp10 = arg7;
        spC = arg6;
        var_r7 = &lbl_803A35EC;
block_11:
        var_r9 = &VarRealUnit__ConvertReciprocalScaled;
    }
    VarRealUnit__CreateScaled((s8 *) arg0, (s8 *) arg1, arg2, arg3, var_r7, var_r8, var_r9, var_f1, M2C_BITWISE(s32, var_f1), M2C_ERROR(/* Unable to find stack arg 0x0 in block */), M2C_ERROR(/* Unable to find stack arg 0x4 in block */));
}
