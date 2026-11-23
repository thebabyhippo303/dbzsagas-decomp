/* AI__SelectWeightedAction @ 0x80073598 (size: 0x1B4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AI__CountRecentActionRepetitions(void *);
void Rand__BuildRandomIndexOrder(void *);
void WeightedRandom__SetCount(void *, int);
void * fn_801842C4(unsigned int);
void fn_801843CC(void *);
void fn_80184430(char *);
s32 AI__IsWeightedActionAvailable(void *, s32, void *, s32); /* extern */
M2C_UNK WeightedRandom__BuildCumulativeWeights(void *, s32, s32 *); /* extern */
M2C_UNK WeightedRandom__SelectIndex(void *, s32);   /* extern */
extern M2C_UNK lbl_80362B08 __attribute__((section(".data")));

void AI__SelectWeightedAction(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 sp8;
    s32 *temp_r31;
    s32 temp_cr0_eq;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r20;
    s32 temp_r22;
    s32 temp_r23;
    s32 temp_r25;
    s32 temp_r30;
    s32 var_r15;
    s32 var_r16;
    s32 var_r19;
    s32 var_r27;
    s32 var_r29;
    s32 var_r30;
    s8 *temp_r3;
    void *temp_r30_2;
    void *temp_r3_2;

    sp8 = M2C_ERROR(/* unknown instruction: mfcr $r12 */);
    temp_r0 = arg2 * 4;
    temp_r30 = M2C_FIELD(arg1, s32 *, 0xCC);
    temp_r25 = *(arg1 + temp_r0);
    var_r19 = 0;
    temp_r31 = *(arg1 + 0x20 + temp_r0);
    var_r15 = 0;
    var_r16 = 0;
    if ((arg2 == 1) && (arg3 != 0)) {
        var_r15 = *temp_r31;
        *temp_r31 = arg3;
    }
    var_r27 = 0;
    var_r29 = 0;
    temp_r20 = AI__CountRecentActionRepetitions(arg1);
    temp_r22 = arg2 * 4;
    temp_r23 = arg0 + 0xC;
    M2C_ERROR(/* "cmpwi $cr4, $r15, 0x0" is not supported, the first arg is not $cr0 */);
    if (temp_r25 > 0) {
        var_r30 = 0;
        do {
            if (AI__IsWeightedActionAvailable(arg0, arg2, arg1, var_r29) != 0) {
                var_r16 = var_r29;
                var_r19 = *(var_r30 + temp_r31);
                temp_r0_2 = var_r19 - (temp_r20 * *(&lbl_80362B08 + (temp_r30 * 4)));
                *(var_r30 + temp_r31) = temp_r0_2;
                if (temp_r0_2 < 0) {
                    *(var_r30 + temp_r31) = 0;
                }
            }
            temp_r0_3 = *(var_r30 + temp_r31);
            var_r29 += 1;
            var_r30 += 4;
            var_r27 += temp_r0_3;
        } while (var_r29 < temp_r25);
    }
    temp_r30_2 = *(temp_r23 + temp_r22);
    if (((s32) M2C_FIELD(temp_r30_2, s32 *, 0) != var_r27) && (var_r27 > 0)) {
        if (temp_r30_2 != NULL) {
            temp_r3 = M2C_FIELD(temp_r30_2, s8 **, 4);
            if (temp_r3 != NULL) {
                fn_80184430(temp_r3);
            }
            fn_801843CC(temp_r30_2);
        }
        *(temp_r23 + temp_r22) = 0;
        temp_r3_2 = fn_801842C4(0xCU);
        M2C_FIELD(temp_r3_2, s32 *, 0) = (s32) (var_r27 - 1);
        M2C_FIELD(temp_r3_2, s32 *, 8) = -1;
        M2C_FIELD(temp_r3_2, s32 *, 4) = 0;
        Rand__BuildRandomIndexOrder(temp_r3_2);
        *(temp_r23 + temp_r22) = temp_r3_2;
    }
    WeightedRandom__SetCount(arg0, temp_r25);
    WeightedRandom__BuildCumulativeWeights(arg0, temp_r25, temp_r31);
    temp_cr0_eq = var_r19 == 0;
    if (temp_cr0_eq == 0) {
        temp_r31[var_r16] = var_r19;
    }
    if (temp_cr0_eq == 0) {
        *temp_r31 = var_r15;
    }
    WeightedRandom__SelectIndex(arg0, arg2);
    M2C_ERROR(/* unknown instruction: mtcrf 0x8, $r12 */);
}
