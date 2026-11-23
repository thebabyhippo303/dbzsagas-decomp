/* Audio__DestroySoundGroup @ 0x8019122C (size: 0x340, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
s32 SoundGroup__GetName(s32);
void Audio__RecycleSoundGroup(void *, void *);
int String__CompareIgnoreCase(const char *, const char *);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
M2C_UNK fn_8019D398(void);
s32 Audio__DestroySoundGroup(void *arg0, s8 *arg1) {
    char *p_188;
    s32 sp8;
    M2C_UNK **var_r9;
    M2C_UNK *temp_r9_7;
    s32 *var_r3;
    s32 temp_cr0_lt;
    s32 temp_cr0_lt_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3_3;
    s32 temp_r3_7;
    s32 temp_r5;
    s32 var_r30;
    s32 temp_r9_2;
    s32 temp_r9_5;
    s32 temp_r9_6;
    s32 temp_r9_8;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 temp_r9;
    s32 var_r8;
    void **var_r3_2;
    void **var_r3_3;
    void **var_r4;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r3_2;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r9_4;
    void *var_r31;

    sp8 = M2C_ERROR(/* unknown instruction: mfcr $r12 */);
    var_r30 = 0;
loop_29:
    p_188 = (char *)arg0 + 0x188;
    temp_cr0_lt = var_r30 < (s32) M2C_FIELD(M2C_FIELD(p_188, void **, 0x8), s32 *, 4);
    if (temp_cr0_lt != 0) {
        temp_r11_4 = M2C_FIELD(p_188, void **, 0x8);
        var_r0_4 = var_r30;
        if (temp_cr0_lt != 0) {
            var_r0_4 = M2C_FIELD(temp_r11_4, s32 *, 4) - 1;
    } else {
        var_r30 = 0;
loop_64:
        temp_cr0_lt_2 = var_r30 < (s32) M2C_FIELD(M2C_FIELD(p_188, void **, 0x0), s32 *, 4);
        if (temp_cr0_lt_2 == 0) {
            return 0;
        }
        var_r0 = var_r30;
        temp_r11 = M2C_FIELD(p_188, void **, 0x0);
        if (temp_cr0_lt_2 != 0) {
            var_r0 = M2C_FIELD(temp_r11, s32 *, 4) - 1;
        }
        temp_r9 = M2C_FIELD(temp_r11, s32 *, 4);
        if ((var_r0 >= temp_r9) || (temp_r9 == 0)) {
            var_r3 = NULL;
        } else {
            var_r3 = M2C_FIELD(temp_r11, s32 *, 0) + (var_r0 * 4);
        }
        temp_r3 = String__CompareIgnoreCase(SoundGroup__GetName(*var_r3), arg1);
        if (temp_r3 == 0) {
            temp_r11_2 = M2C_FIELD(p_188, void **, 0x0);
            var_r0_2 = var_r30;
            if (temp_r3 < 0) {
                var_r0_2 = M2C_FIELD(temp_r11_2, s32 *, 4) - 1;
            }
            temp_r9_2 = M2C_FIELD(temp_r11_2, s32 *, 4);
            if ((var_r0_2 >= temp_r9_2) || (temp_r9_2 == 0)) {
                var_r4 = NULL;
            } else {
                var_r4 = M2C_FIELD(temp_r11_2, s32 *, 0) + (var_r0_2 * 4);
            }
            Audio__RecycleSoundGroup(arg0, *var_r4);
            temp_r0 = M2C_FIELD((0x188 + arg0), s32 *, 4);
            if (temp_r0 != 0) {
                temp_r3_2 = M2C_FIELD(p_188, void **, 0x0);
                var_r0_3 = var_r30;
                if (temp_r0 < 0) {
                    var_r0_3 = M2C_FIELD(temp_r3_2, s32 *, 4) - 1;
                }
                temp_r9_2 = M2C_FIELD(temp_r3_2, s32 *, 4);
                if ((var_r0_3 >= temp_r9_2) || (temp_r9_2 == 0)) {
                    var_r3_2 = NULL;
                } else {
                    var_r3_2 = M2C_FIELD(temp_r3_2, s32 *, 0) + (var_r0_3 * 4);
                }
                if (var_r3_2 != NULL) {
                    temp_r11_3 = *var_r3_2;
                    if (temp_r11_3 != NULL) {
                        temp_r9_4 = M2C_FIELD(temp_r11_3, void **, 0x64);
                        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x24)(temp_r11_3 + M2C_FIELD(temp_r9_4, s16 *, 0x20));
                    }
                }
            }
            var_r31 = M2C_FIELD(p_188, void **, 0x0);
            var_r8 = var_r30;
            if (M2C_ERROR(/* Read from unset register $cr0_lt */)) {
                goto block_55;
            }
            goto block_57;
            return 1;
        }
        var_r30 += 1;
        goto loop_64;
    }
    }
    temp_r9_5 = M2C_FIELD(temp_r11_4, s32 *, 4);
    if ((var_r0_4 >= temp_r9_5) || (temp_r9_5 == 0)) {

    }
    temp_r3_3 = String__CompareIgnoreCase(fn_8019D398(), arg1);
    if (temp_r3_3 == 0) {
        temp_r11_5 = M2C_FIELD(p_188, void **, 0x8);
        var_r0_5 = var_r30;
        if (temp_r3_3 < 0) {
            var_r0_5 = M2C_FIELD(temp_r11_5, s32 *, 4) - 1;
        }
        temp_r9_6 = M2C_FIELD(temp_r11_5, s32 *, 4);
        if ((var_r0_5 >= temp_r9_6) || (temp_r9_6 == 0)) {
            var_r9 = NULL;
        } else {
            var_r9 = M2C_FIELD(temp_r11_5, s32 *, 0) + (var_r0_5 << 2);
        }
        temp_r9_7 = *var_r9;
        if (temp_r9_7 != NULL) {
            *temp_r9_7 = M2C_FIELD(p_188, M2C_UNK **, 0x30);
            M2C_FIELD(p_188, M2C_UNK **, 0x30) = temp_r9_7;
        }
        temp_r0_2 = M2C_FIELD(p_188, s32 *, 0xc);
        if (temp_r0_2 != 0) {
            temp_r3_4 = M2C_FIELD(p_188, void **, 0x8);
            var_r0_6 = var_r30;
            if (temp_r0_2 < 0) {
                var_r0_6 = M2C_FIELD(temp_r3_4, s32 *, 4) - 1;
            }
            temp_r9_8 = M2C_FIELD(temp_r3_4, s32 *, 4);
            if (!((var_r0_6 >= temp_r9_8) || (temp_r9_8 == 0))) {
                var_r3_3 = M2C_FIELD(temp_r3_4, s32 *, 0) + (var_r0_6 * 4);
            } else {
                var_r3_3 = NULL;
            }
            if (var_r3_3 != NULL) {
                temp_r3_5 = *var_r3_3;
                if (temp_r3_5 != NULL) {
                    Mem__Delete(temp_r3_5);
                }
            }
        }
        var_r31 = M2C_FIELD(p_188, void **, 0x8);
        var_r8 = var_r30;
        if (M2C_ERROR(/* Read from unset register $cr0_lt */)) {
block_57:
            var_r8 = M2C_FIELD(var_r31, s32 *, 4) - 1;
            goto block_58;
        }
block_55:
        if (var_r30 >= (s32) M2C_FIELD(var_r31, s32 *, 4)) {

        } else {
block_58:
            temp_r3_6 = M2C_FIELD(var_r31, s32 *, 0) + (var_r8 * 4);
            temp_r5 = M2C_FIELD(var_r31, s32 *, 4) - (var_r8 + 1);
            if (temp_r5 > 0) {
                memmove(temp_r3_6, temp_r3_6 + 4, temp_r5 * 4);
            }
            temp_r3_7 = M2C_FIELD(var_r31, s32 *, 4) - 1;
            M2C_FIELD(var_r31, s32 *, 4) = temp_r3_7;
            if ((s32) M2C_FIELD(var_r31, s32 *, 0x10) != 0) {
                memset(M2C_FIELD(var_r31, s32 *, 0) + (temp_r3_7 * 4), 0, 4U);
            }
        }
        return 1;
    }
    var_r30 += 1;
    goto loop_29;
}
