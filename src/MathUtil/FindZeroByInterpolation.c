/* MathUtil__FindZeroByInterpolation @ 0x8017E284 (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_8033D134 __attribute__((section(".data")));
extern f32 lbl_8033D138 __attribute__((section(".data")));

s32 MathUtil__FindZeroByInterpolation(void **arg0, f32 *arg1, s32 arg2, f64 farg0, f64 farg1) {
    s32 flag;
    register f32 sp8;
    f32 temp_f13;
    f64 temp_f28;
    f32 temp_f29;
    void *temp_r9;
    s32 var_r30;
    f32 var_f31;

    flag = 0 == 0;
    temp_r9 = *arg0;
    var_f31 = farg0;
    if (M2C_FIELD(temp_r9, s32 (**)(void *, f32 *, void *, f32), 0x14)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x10), &sp8, temp_r9, *arg1 - var_f31)) {
        var_r30 = 0;
        if (arg2 > 0) {
            temp_f28 = lbl_8033D134;
            temp_f29 = lbl_8033D138;
loop_3:
            temp_r9 = *arg0;
            if (M2C_FIELD(temp_r9, s32 (**)(void *, f32 *, void *), 0x14)(M2C_FIELD(temp_r9, s16 *, 0x10) + arg0, &temp_f29, M2C_BITWISE(void *, *arg1)) != 0) {
                if ((sp8 < (temp_f29 - (fabs(var_f31 * temp_f29) * temp_f28))) || (M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */), (flag))) {
                    var_f31 *= temp_f29 / (f32) (sp8 - temp_f29);
                    temp_f13 = *arg1 + var_f31;
                    *arg1 = temp_f13;
                    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
                    temp_f28 = fabs(temp_f13);
                    if (!flag) {
                        if (!(fabs(var_f31) >= farg1)) {
                            return 1;
                    } else {
                        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
                        if (flag) {
                            return 1;
                        }
                        goto block_10;
                    }
                    } else {
    block_10:
                        var_r30 += 1;
                        sp8 = temp_f29;
                        if (!(var_r30 < arg2)) {
                            return 0;
                        }
                        goto loop_3;
                    }
                }
            }
            return 0;
        }
    }
    return 0;
}
