/* Task__UpdateAll @ 0x80184CA8 (size: 0x204, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Task__SwitchContext(s32, s32);
void memFree(void *);
extern f32 lbl_8033DCC4 __attribute__((section(".data")));
extern void **lbl_803A1204 __attribute__((section(".data")));
extern M2C_UNK lbl_803A1214;
extern M2C_UNK lbl_803A1224 __attribute__((section(".data")));
extern void **lbl_803DD490;
extern M2C_UNK lbl_803DD4A8;

void Task__UpdateAll(s32 arg0, f32 farg0, f32 farg1) {
    f32 var_f0;
    s32 temp_r0;
    s32 temp_r9;
    s32 var_cr0_eq;
    s32 var_r11;
    void **temp_r31;

    lbl_803DD490 = lbl_803A1204;
    if ((void **) lbl_803A1204 != NULL) {
        var_cr0_eq = arg0 == 0;
        do {
            var_r11 = 1;
            temp_r31 = M2C_FIELD(lbl_803DD490, void ***, 8);
            if (var_cr0_eq != 0) {
                var_r11 = 0;
            }
            temp_r9 = M2C_FIELD(lbl_803DD490, s32 *, 0x24);
            temp_r0 = var_r11 & ((temp_r9 ^ 1) & 1);
            if (temp_r0 == 0) {
                if (temp_r9 < 0) {
                    var_r11 = M2C_FIELD(lbl_803DD490, s32 *, 0x18) - 1;
                    M2C_FIELD(lbl_803DD490, s32 *, 0x18) = var_r11;
                    if (var_r11 <= 0) {
                        M2C_FIELD(lbl_803DD490, s32 *, 0x18) = temp_r0;
                        Task__SwitchContext((s32) (lbl_803DD490 + 0x2C), (s32) &lbl_803DD4A8);
                    }
                } else {
                    if (temp_r9 & 2) {
                        var_f0 = M2C_FIELD(lbl_803DD490, f32 *, 0x28) - farg0;
                    } else {
                        var_f0 = M2C_FIELD(lbl_803DD490, f32 *, 0x28) - farg1;
                    }
                    M2C_FIELD(lbl_803DD490, f32 *, 0x28) = var_f0;
                    if (!(M2C_FIELD(lbl_803DD490, f32 *, 0x28) > lbl_8033DCC4)) {
                        M2C_FIELD(lbl_803DD490, f32 *, 0x28) = (f32) lbl_8033DCC4;
                        Task__SwitchContext((s32) (lbl_803DD490 + 0x2C), (s32) &lbl_803DD4A8);
                    }
                }
            }
            lbl_803DD490 = temp_r31;
            var_cr0_eq = (void **) lbl_803DD490 == NULL;
        } while (var_cr0_eq == 0);
    }
    if (NULL != (void **) M2C_FIELD(&lbl_803A1224, void ***, 0)) {
        do {
            lbl_803DD490 = M2C_FIELD(&lbl_803A1224, void ***, 0);
            memFree(*M2C_FIELD(&lbl_803A1224, void ***, 0));
            M2C_FIELD(lbl_803DD490, void **, 0) = NULL;
            if ((void **) M2C_FIELD(&lbl_803A1224, void ***, 0) == (void **) lbl_803DD490) {
                M2C_FIELD(&lbl_803A1224, void ***, 0) = (void **) M2C_FIELD(lbl_803DD490, void ***, 8);
            } else {
                M2C_FIELD(M2C_FIELD(lbl_803DD490, void **, 4), void ***, 8) = (void **) M2C_FIELD(lbl_803DD490, void ***, 8);
            }
            if ((void *) M2C_FIELD(&lbl_803A1224, void **, 4) == (void **) lbl_803DD490) {
                M2C_FIELD(&lbl_803A1224, void **, 4) = (void *) M2C_FIELD(lbl_803DD490, void **, 4);
            } else {
                M2C_FIELD(M2C_FIELD(lbl_803DD490, void ***, 8), void **, 4) = (void *) M2C_FIELD(lbl_803DD490, void **, 4);
            }
            M2C_FIELD(lbl_803DD490, void ***, 8) = NULL;
            M2C_FIELD(lbl_803DD490, void **, 4) = NULL;
            M2C_FIELD(&lbl_803A1224, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_803A1224, s32 *, 0xC) - 1);
            if ((void **) M2C_FIELD(&lbl_803A1214, void ***, 0) == NULL) {
                M2C_FIELD(&lbl_803A1214, void ***, 0) = (void **) lbl_803DD490;
                M2C_FIELD(&lbl_803A1214, void ***, 4) = (void **) lbl_803DD490;
                M2C_FIELD(lbl_803DD490, void **, 4) = NULL;
                M2C_FIELD(lbl_803DD490, void ***, 8) = NULL;
            } else {
                M2C_FIELD(lbl_803DD490, void ***, 8) = (void **) M2C_FIELD(&lbl_803A1214, void ***, 0);
                M2C_FIELD(lbl_803DD490, void **, 4) = NULL;
                M2C_FIELD(&lbl_803A1214, void ***, 0) = (void **) lbl_803DD490;
                M2C_FIELD(M2C_FIELD(&lbl_803A1214, void ***, 0), void ***, 4) = (void **) lbl_803DD490;
            }
            M2C_FIELD(&lbl_803A1214, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_803A1214, s32 *, 0xC) + 1);
        } while ((void **) M2C_FIELD(&lbl_803A1224, void ***, 0) != NULL);
    }
    lbl_803DD490 = NULL;
}
