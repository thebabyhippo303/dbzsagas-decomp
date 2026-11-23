/* ProtagonistSubgroup__StepPhysics @ 0x801E2E34 (size: 0x2EC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_801E3120(s32, s32);
M2C_UNK fn_801E7178(s32, s32);
extern f32 lbl_80344038 __attribute__((section(".data")));
extern f32 lbl_8034403C __attribute__((section(".data")));
extern f32 lbl_80344040 __attribute__((section(".data")));
extern f32 lbl_80344044 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));

void ProtagonistSubgroup__StepPhysics(void **arg0) {
    s32 sp8;
    f32 temp_f0;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f26;
    f32 temp_f27;
    f32 temp_f29;
    register f32 var_f23;
    f32 var_f28;
    f32 var_f30;
    f32 var_f31;
    s32 var_r3;
    void *temp_r30;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *var_r31;
    void *var_r31_2;
    void *var_r31_4;
    void *var_r31_5;
    void *var_r31_6;
    void *var_r31_8;

    var_r31 = *arg0;
    var_f23 = lbl_80344038;
    if (var_r31 != NULL) {
        do {
            temp_f0 = M2C_FIELD(M2C_FIELD(var_r31, void **, 0), f32 *, 0x80);
            if (!(temp_f0 >= var_f23)) {
                var_f23 = temp_f0;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 0x14);
        } while (var_r31 != NULL);
    }
    temp_f27 = lbl_803A35BC;
    var_f30 = lbl_8034403C;
loop_5:
    temp_f26 = var_f30;
    var_f30 += var_f23;
    if (!(var_f30 <= temp_f27)) {
        var_f30 = temp_f27;
    }
    var_r31_2 = *arg0;
    if (var_r31_2 != NULL) {
        do {
            temp_r30 = M2C_FIELD(var_r31_2, void **, 0);
            temp_r9 = M2C_FIELD(temp_r30, void **, 0x34);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xD4)(temp_r30 + M2C_FIELD(temp_r9, s16 *, 0xD0));
            M2C_FIELD(temp_r30, s32 *, 0x18C) = 1;
            var_r31_2 = M2C_FIELD(var_r31_2, void **, 0x14);
        } while (var_r31_2 != NULL);
    }
    temp_f24 = lbl_80344040;
    var_f28 = temp_f26;
    temp_f25 = lbl_80344044;
    var_f31 = var_f30;
loop_11:
    var_r31_2 = *arg0;
    temp_f29 = var_f30 - temp_f26;
    if (var_r31_2 != NULL) {
        do {
            temp_r3 = M2C_FIELD(var_r31_2, void **, 0);
            temp_r9_2 = M2C_FIELD(temp_r3, void **, 0x34);
            var_r31_2 = M2C_FIELD(var_r31_2, void **, 0x14);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32), 0xDC)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0xD8), temp_f29);
        } while (var_r31_2 != NULL);
    }
    sp8 = 0;
    var_r3 = 0;
    if (!(temp_f29 <= lbl_8034403C)) {
        var_r3 = fn_801E3120(arg0, (s32) &sp8);
    }
    if (((var_r3 == 0) && (var_f30 >= var_f31)) || (var_r3 == 1)) {
        var_r31_4 = *arg0;
        if (var_r31_4 != NULL) {
            do {
                M2C_FIELD(M2C_FIELD(var_r31_4, void **, 0), s32 *, 0x18C) = 0;
                var_r31_4 = M2C_FIELD(var_r31_4, void **, 0x14);
            } while (var_r31_4 != NULL);
        }
        if (sp8 != 0) {
            fn_801E7178((s32) arg0, sp8);
        }
        var_r31_5 = *arg0;
        if (var_r31_5 != NULL) {
            do {
                temp_r3_2 = M2C_FIELD(var_r31_5, void **, 0);
                temp_r9_3 = M2C_FIELD(temp_r3_2, void **, 0x34);
                M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0xE4)(temp_r3_2 + M2C_FIELD(temp_r9_3, s16 *, 0xE0));
                var_r31_5 = M2C_FIELD(var_r31_5, void **, 0x14);
            } while (var_r31_5 != NULL);
        }
        if (!(var_f30 < temp_f27)) {

        } else {
            goto loop_5;
        }
    } else {
        if (!((var_f31 - var_f28) > temp_f24)) {
            var_r31_6 = *arg0;
            if (var_r31_6 != NULL) {
                do {
                    M2C_FIELD(M2C_FIELD(var_r31_6, void **, 0), s32 *, 0x18C) = 0;
                    var_r31_6 = M2C_FIELD(var_r31_6, void **, 0x14);
                } while (var_r31_6 != NULL);
            }
            temp_r9 = *arg0;
            if (temp_r9 != NULL) {
                while (temp_r9 != NULL) {
                    temp_r3_3 = M2C_FIELD(temp_r9, void **, 0);
                    temp_r9_4 = M2C_FIELD(temp_r3_3, void **, 0x34);
                    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, f32), 0xE4)(temp_r3_3 + M2C_FIELD(temp_r9_4, s16 *, 0xE0), temp_f29);
                    temp_r9 = M2C_FIELD(temp_r9, void **, 0x14);
                }
            }
            var_r31_8 = *arg0;
            if (var_r31_8 == NULL) {
                return;
            } else {
                do {
                    temp_r3_4 = M2C_FIELD(var_r31_8, void **, 0);
                    temp_r9_5 = M2C_FIELD(temp_r3_4, void **, 0x34);
                    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0xEC)(temp_r3_4 + M2C_FIELD(temp_r9_5, s16 *, 0xE8));
                    var_r31_8 = M2C_FIELD(var_r31_8, void **, 0x14);
                } while (NULL != var_r31_8);
                return;
            }
        }
        if (var_r3 == 2) {
            var_f31 = var_f30;
        } else {
            var_f28 = var_f30;
        }
        var_f30 = (var_f28 + var_f31) * temp_f25;
        goto loop_11;
    }
}
