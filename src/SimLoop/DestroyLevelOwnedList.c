/* SimLoop__DestroyLevelOwnedList @ 0x80023580 (size: 0x1F0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void * memset(void *, int, u32);
M2C_UNK fn_80294AF0(M2C_UNK);                       /* extern */
M2C_UNK fn_8029E3E4(M2C_UNK);                       /* extern */

void SimLoop__DestroyLevelOwnedList(void *arg0, s32 arg1) {
    s32 ld_8;
    s32 *var_r3;
    s32 *var_r3_2;
    s32 var_r0;
    s32 var_r30;
    s32 var_r31;
    u32 temp_r30;
    u32 temp_r9;
    u32 temp_r9_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r31_3;
    void *temp_r3;
    void *temp_r3_3;
    void *temp_r3_4;

    if ((s32) M2C_FIELD((arg0 + 0xC), s32 *, 4) != 0) {
        var_r31 = 0;
        temp_r30 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u32 *, 4);
        if (temp_r30 > 0U) {
            while ((u32) var_r31 < temp_r30) {
                temp_r11 = M2C_FIELD(arg0, void **, 0xC);
                var_r0 = var_r31;
                if (var_r31 < 0) {
                    var_r0 = M2C_FIELD(temp_r11, u32 *, 4) - 1;
                }
                temp_r9 = M2C_FIELD(temp_r11, u32 *, 4);
                if ((var_r0 >= (s32) temp_r9) || ((s32) temp_r9 == 0)) {
                    var_r3 = NULL;
                } else {
                    var_r3 = M2C_FIELD(temp_r11, void **, 0) + (var_r0 << 2);
                }
                if ((s32) *var_r3 != 0) {
                    fn_8029E3E4(3);
                }
                var_r31 += 1;
            }
        }
    }
    temp_r31 = M2C_FIELD(arg0, void **, 0xC);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
        temp_r3 = M2C_FIELD(temp_r31, void **, 0);
        if (temp_r3 != NULL) {
            ld_8 = M2C_FIELD(temp_r31, s32 *, 8);
            memset(temp_r3, 0, ld_8 * 4);
        }
    }
    M2C_FIELD(temp_r31, u32 *, 4) = 0U;
    temp_r31_2 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r31_2 != NULL) {
        temp_r11 = M2C_FIELD(temp_r31_2, void **, 0);
        if (temp_r11 != NULL) {
            Mem__Delete(temp_r11);
        }
        Mem__Delete(temp_r31_2);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
        temp_r9 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4);
        var_r30 = 0;
        if (temp_r9 > 0U) {
            while ((u32) var_r30 < temp_r9) {
                temp_r11_2 = M2C_FIELD(arg0, void **, 0);
                var_r0 = var_r30;
                if (var_r30 < 0) {
                    var_r0 = M2C_FIELD(temp_r11_2, u32 *, 4) - 1;
                }
                temp_r9_2 = M2C_FIELD(temp_r11_2, u32 *, 4);
                var_r3_2 = ((var_r0 >= (s32) temp_r9_2) || ((s32) temp_r9_2 == 0)) ? NULL : M2C_FIELD(temp_r11_2, void **, 0) + (var_r0 * 4);
                if ((s32) *var_r3_2 != 0) {
                    fn_80294AF0(3);
                }
                var_r30 += 1;
            }
        }
    }
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x10) != 0) {
        temp_r3_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0);
        if (temp_r3_3 != NULL) {
            memset(temp_r3_3, 0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 8) * 4);
        }
    }
    temp_r31_3 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4) = 0;
    if (temp_r31_3 != NULL) {
        temp_r3_4 = M2C_FIELD(temp_r31_3, void **, 0);
        if (temp_r3_4 != NULL) {
            Mem__Delete(temp_r3_4);
        }
        Mem__Delete(temp_r31_3);
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
