/* ComboData__LoadTable @ 0x80151728 (size: 0x340, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void Mem__DeleteArray(void *);
void ComboData__BuildVarFilePath(void *, char *);
void * File__Open(char *, s32, s32);
s32 File__Read(void *, s32, s32);
void File__Destroy(void *, s32);
char * Mem__NewArray(s32);
s32 ComboData__LoadTable(void *arg0, s8 *arg1) {
    s32 sp14;
    union { s32 value; unsigned char bytes[8]; } spC;
    s32 sp8;
    s32 temp_cr0_eq;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r11;
    s32 var_r27;
    s32 var_r27_2;
    s32 var_r27_3;
    s32 var_r29;
    s32 var_r29_2;
    s32 var_r29_3;
    s32 var_r29_4;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r30_3;
    s8 *temp_r30;
    s8 *temp_r30_2;
    void *temp_r5;
    s8 *temp_r3_4;
    s8 *temp_r3_5;
    s8 *temp_r3_7;
    s8 *var_r9;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r3;
    void *temp_r3_3;
    void *temp_r3_6;
    s8 *temp_r3_2;
    void *temp_r9;
    void *temp_r9_2;

    sp14 = M2C_ERROR(/* unknown instruction: mfcr $r12 */);
    var_r30 = 0;
    var_r29 = 0;
    while (var_r30 < (void *) M2C_FIELD(arg0, void **, 8)) {
        var_r30 += 1;
        temp_r3 = *(void * *)(var_r29 + M2C_FIELD(arg0, s8 **, 0x10));
        var_r29 += 4;
        Mem__Delete(temp_r3);
    }
    temp_r3_2 = M2C_FIELD(arg0, s8 **, 0x10);
    if (temp_r3_2 != NULL) {
        Mem__DeleteArray(temp_r3_2);
    }
    var_r30_2 = 0;
    M2C_FIELD(arg0, void **, 8) = NULL;
    M2C_FIELD(arg0, s8 **, 0x10) = NULL;
    if ((void *) M2C_FIELD(arg0, void **, 0xC) > 0) {
        var_r29_2 = 0;
        do {
            var_r30_2 += 1;
            temp_r3_3 = *(void * *)(var_r29_2 + M2C_FIELD(arg0, s8 **, 0x14));
            var_r29_2 += 4;
            Mem__Delete(temp_r3_3);
        } while (var_r30_2 < (void *) M2C_FIELD(arg0, void **, 0xC));
    }
    temp_r3_4 = M2C_FIELD(arg0, s8 **, 0x14);
    if (temp_r3_4 != NULL) {
        Mem__DeleteArray(temp_r3_4);
    }
    temp_r3_5 = M2C_FIELD(arg0, s8 **, 4);
    M2C_FIELD(arg0, s8 **, 0x14) = NULL;
    M2C_FIELD(arg0, void **, 0xC) = NULL;
    if (temp_r3_5 != NULL) {
        Mem__DeleteArray(temp_r3_5);
        M2C_FIELD(arg0, s8 **, 4) = NULL;
    }
    ComboData__BuildVarFilePath(arg0, arg1);
    temp_r3_6 = File__Open(M2C_FIELD(arg0, s8 **, 0x18), 0, 0);
    if (temp_r3_6 == NULL) {
        M2C_FIELD(arg0, void **, 8) = temp_r3_6;
        M2C_FIELD(arg0, void **, 0xC) = temp_r3_6;
    } else {
        var_r27 = 0;
        File__Read(temp_r3_6, (s32) &sp8, 4);
        File__Read(temp_r3_6, (s32) (arg0 + 8), 4);
        File__Read(temp_r3_6, (s32) (arg0 + 0xC), 4);
        M2C_FIELD(arg0, s8 **, 0x10) = Mem__NewArray((s32) M2C_FIELD(arg0, void **, 8) * 4);
        M2C_FIELD(arg0, s8 **, 0x14) = Mem__NewArray((s32) M2C_FIELD(arg0, void **, 0xC) * 4);
        if ((void *) M2C_FIELD(arg0, void **, 8) > 0) {
            var_r29_3 = 0;
            do {
                var_r27 += 1;
                File__Read(temp_r3_6, (s32) ((s32 *)spC.bytes), 4);
                temp_r30 = M2C_FIELD(arg0, s8 **, 0x10);
                temp_r30[var_r29_3] = Mem__NewArray(spC.value);
                temp_r4 = M2C_FIELD(arg0, s8 **, 0x10)[var_r29_3];
                var_r29_3 += 4;
                File__Read(temp_r3_6, temp_r4, spC.value);
            } while (var_r27 < (void *) M2C_FIELD(arg0, void **, 8));
        }
        var_r27_2 = 0;
        if ((void *) M2C_FIELD(arg0, void **, 0xC) > 0) {
            var_r29_4 = 0;
            do {
                var_r27_2 += 1;
                File__Read(temp_r3_6, (s32) ((s32 *)spC.bytes), 4);
                temp_r30_2 = M2C_FIELD(arg0, s8 **, 0x14);
                temp_r30_2[var_r29_4] = Mem__NewArray(spC.value);
                temp_r4_2 = M2C_FIELD(arg0, s8 **, 0x14)[var_r29_4];
                var_r29_4 += 4;
                File__Read(temp_r3_6, temp_r4_2, spC.value);
            } while (var_r27_2 < (void *) M2C_FIELD(arg0, void **, 0xC));
        }
        var_r27 = (s32) M2C_FIELD(arg0, void **, 8) * (s32) M2C_FIELD(arg0, void **, 0xC);
        temp_r3_7 = Mem__NewArray(var_r27 * 4);
        var_r11 = var_r27 - 1;
        var_r9 = temp_r3_7;
        if (var_r27 != 0) {
            do {
                M2C_FIELD(var_r9, s8 *, 3) = 0;
                temp_cr0_eq = var_r11 == 0;
                M2C_FIELD(var_r9, s8 *, 2) = 0;
                var_r11 -= 1;
                M2C_FIELD(var_r9, s8 *, 1) = 0;
                M2C_FIELD(var_r9, s8 *, 0) = 0;
                var_r9 += 4;
            } while (temp_cr0_eq == 0);
        }
        M2C_FIELD(arg0, s8 **, 4) = temp_r3_7;
        File__Read(temp_r3_6, (s32) ((s32 *)spC.bytes), 4);
        var_r27_3 = 0;
        temp_r0 = M2C_FIELD(arg0, void **, 8);
        sp14 = temp_r0 == NULL;
        if (temp_r0 > 0) {
            do {
                var_r30_3 = 0;
                while (var_r30_3 < (void *) M2C_FIELD(arg0, void **, 0xC)) {
                    temp_r9 = M2C_FIELD(arg0, void **, 0);
                    temp_r5 = M2C_FIELD(arg0, s8 **, 4) + (((var_r27_3 * (s32) M2C_FIELD(arg0, void **, 0xC)) + var_r30_3) * 4);
                    var_r30_3 += 1;
                    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void *, void *, s32, s32), 0x74)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x70), temp_r3_6, temp_r5, spC.value, sp8);
                }
                temp_r0_2 = M2C_FIELD(arg0, void **, 8);
                var_r27_3 += 1;
                sp14 = var_r27_3 == temp_r0_2;
            } while (var_r27_3 < temp_r0_2);
        }
        if (sp14 == 0) {
            File__Destroy(temp_r3_6, 3);
        }
    }
    temp_r9_2 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x5C)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x58));
    return 1;
}
