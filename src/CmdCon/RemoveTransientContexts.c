/* CmdCon__RemoveTransientContexts @ 0x8018B1C0 (size: 0x1A8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void VariableContext__Destroy(void *, s32, s32);
void Mem__DeleteArray(void *);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
void CmdCon__RemoveTransientContexts(void *arg0) {
    s32 sp8;
    s32 temp_cr0_lt;
    s32 temp_r0;
    s32 temp_r3_3;
    s32 temp_r5;
    s32 temp_r9;
    s32 temp_r9_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r30;
    s32 var_r8;
    void **var_r3;
    void **var_r9;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_4;

    sp8 = M2C_ERROR(/* unknown instruction: mfcr $r12 */);
    var_r30 = 0;
loop_27:
    temp_cr0_lt = var_r30 < (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4);
    if (temp_cr0_lt != 0) {
        temp_r11 = M2C_FIELD(arg0, void **, 8);
        var_r0 = var_r30;
        if (temp_cr0_lt != 0) {
            var_r0 = M2C_FIELD(temp_r11, s32 *, 4) - 1;
        }
        temp_r9 = M2C_FIELD(temp_r11, s32 *, 4);
        if ((var_r0 >= temp_r9) || (temp_r9 == 0)) {
            var_r9 = NULL;
        } else {
            var_r9 = M2C_FIELD(temp_r11, s32 *, 0) + (var_r0 * 4);
        }
        if ((s32) M2C_FIELD(*var_r9, s32 *, 0x20) != 0) {
            var_r30 += 1;
        } else {
            temp_r0 = M2C_FIELD((arg0 + 8), s32 *, 4);
            if (temp_r0 != 0) {
                temp_r11_2 = M2C_FIELD(arg0, void **, 8);
                var_r0_2 = var_r30;
                if (temp_r0 < 0) {
                    var_r0_2 = M2C_FIELD(temp_r11_2, s32 *, 4) - 1;
                }
                temp_r9_2 = M2C_FIELD(temp_r11_2, s32 *, 4);
                if ((var_r0_2 >= temp_r9_2) || (temp_r9_2 == 0)) {
                    var_r3 = NULL;
                } else {
                    var_r3 = M2C_FIELD(temp_r11_2, s32 *, 0) + (var_r0_2 * 4);
                }
                if (var_r3 != NULL) {
                    temp_r3 = *var_r3;
                    if (temp_r3 != NULL) {
                        VariableContext__Destroy(temp_r3, 3, M2C_ERROR(/* Read from unset register $r5 */));
                    }
                }
            }
            temp_r31 = M2C_FIELD(arg0, void **, 8);
            var_r8 = var_r30;
            if (M2C_ERROR(/* Read from unset register $cr0_lt */)) {
                if (var_r30 >= (s32) M2C_FIELD(temp_r31, s32 *, 4)) {

                } else {
                    goto block_23;
                }
            } else {
                var_r8 = M2C_FIELD(temp_r31, s32 *, 4) - 1;
block_23:
                temp_r3_2 = M2C_FIELD(temp_r31, s32 *, 0) + (var_r8 * 4);
                temp_r5 = M2C_FIELD(temp_r31, s32 *, 4) - (var_r8 + 1);
                if (temp_r5 > 0) {
                    memmove(temp_r3_2, temp_r3_2 + 4, temp_r5 * 4);
                }
                temp_r3_3 = M2C_FIELD(temp_r31, s32 *, 4) - 1;
                M2C_FIELD(temp_r31, s32 *, 4) = temp_r3_3;
                if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
                    memset(M2C_FIELD(temp_r31, s32 *, 0) + (temp_r3_3 * 4), 0, 4U);
                }
            }
        }
        goto loop_27;
    }
    temp_r3_4 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r3_4 != NULL) {
        Mem__DeleteArray(temp_r3_4);
    }
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
