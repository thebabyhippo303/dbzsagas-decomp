/* Plant__ApplyRandomChildEntryActions @ 0x800F6168 (size: 0x23C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void OrientedBox__DebugDraw(void *, int);
M2C_UNK BoneChainSet__ExpandBounds(s32, s32, s32, s32);
M2C_UNK DebugDraw__Box(s32, s32, s32, s32, s32);
M2C_UNK BoneChain__DebugDraw(s32, s32, s32);
M2C_UNK DynamicBoneChain__DebugDraw(s32, s32, s32);
extern u32 lbl_803A35B4 __attribute__((section(".data")));

void Plant__ApplyRandomChildEntryActions(char *arg0) {
    union { M2C_UNK value; unsigned char bytes[16]; } sp8;
    union { M2C_UNK value; unsigned char bytes[12]; } sp18;
    s32 ld_A4;
    s32 temp_r3;
    u32 temp_r4;
    s32 temp_r4_2;
    u32 randValue;
    u32 divisor;
    u32 quotient;
    void *temp_r0_2;
    s32 var_r10;
    s32 var_r11;
    s32 var_r11_2;
    s32 var_r31;
    s32 var_r31_2;
    u32 temp_r4_4;
    u32 temp_r4_5;
    void *temp_r0;
    s32 temp_r4_3;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *var_r30;
    void *var_r30_2;
    void *var_r3;
    void *var_r3_2;
    void *var_r9;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x458) != 0) {
        OrientedBox__DebugDraw(arg0 + 0x13C, 0);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (temp_r3 != 0) {
        BoneChainSet__ExpandBounds(temp_r3, (s32) ((M2C_UNK *)sp8.bytes), (s32) ((M2C_UNK *)sp18.bytes), 0);
        DebugDraw__Box((s32) ((M2C_UNK *)sp8.bytes), (s32) ((M2C_UNK *)sp18.bytes), 0, 0, 6);
        var_r10 = 0;
        ld_A4 = M2C_FIELD(arg0, s32 *, 0xA4);
        var_r9 = *(s32 *)ld_A4;
loop_4:
        if (var_r9 != NULL) {
            temp_r0 = M2C_FIELD(var_r9, void **, 0);
            var_r10 += 1;
            if (temp_r0 != NULL) {
                var_r9 = temp_r0;
            } else {
                var_r9 = M2C_FIELD(var_r9, void **, 0x17C);
            }
            goto loop_4;
        }
        if (var_r10 != 0) {
            randValue = lbl_803A35B4 / 1500U;
            divisor = (var_r10 * 2) + 3;
            quotient = randValue / divisor;
            temp_r4 = randValue - (quotient * divisor);
            if (temp_r4 == 0) {
                var_r31 = 0;
                var_r30 = *(s32 *)M2C_FIELD(arg0, s32 *, 0xA4);
                if (var_r30 != NULL) {
                    do {
                        temp_r4_2 = var_r31;
                        var_r31 += 1;
                        BoneChain__DebugDraw((s32) var_r30, temp_r4_2, 0);
                        temp_r0_2 = M2C_FIELD(var_r30, void **, 0);
                        if (temp_r0_2 != NULL) {
                            var_r30 = temp_r0_2;
                        } else {
                            var_r30 = M2C_FIELD(var_r30, void **, 0x17C);
                        }
                    } while (var_r30 != NULL);
                }
            } else if (temp_r4 == 1) {
                var_r31_2 = 0;
                var_r30_2 = *(s32 *)M2C_FIELD(arg0, s32 *, 0xA4);
                if (var_r30_2 != NULL) {
                    do {
                        temp_r4_3 = var_r31_2;
                        var_r31_2 += 1;
                        DynamicBoneChain__DebugDraw((s32) var_r30_2, temp_r4_3, 0);
                        temp_r0_3 = M2C_FIELD(var_r30_2, void **, 0);
                        if (temp_r0_3 != NULL) {
                            var_r30_2 = temp_r0_3;
                        } else {
                            var_r30_2 = M2C_FIELD(var_r30_2, void **, 0x17C);
                        }
                    } while (var_r30_2 != NULL);
                }
            } else if (temp_r4 != 2) {
                temp_r4 = temp_r4 - 3;
                if (!(temp_r4 & 1)) {
                    temp_r4 = temp_r4 >> 1U;
                    temp_r4_5 = temp_r4;
                    var_r11 = 0;
                    var_r3 = *(s32 *)M2C_FIELD(arg0, s32 *, 0xA4);
                    if (var_r3 != NULL) {
loop_26:
                        if ((s32) temp_r4_5 != var_r11) {
                            temp_r0_4 = M2C_FIELD(var_r3, void **, 0);
                            var_r11 += 1;
                            if (temp_r0_4 != NULL) {
                                var_r3 = temp_r0_4;
                            } else {
                                var_r3 = M2C_FIELD(var_r3, void **, 0x17C);
                            }
                            if (var_r3 != NULL) {
                                goto loop_26;
                            } else {
                                return;
                            }
                        }
                        BoneChain__DebugDraw((s32) var_r3, (s32) temp_r4_5, 1);
                    }
                } else {
                    goto odd_start;
odd_call:
                    DynamicBoneChain__DebugDraw((s32) var_r3_2, var_r11_2, 1);
                    goto done_all;
odd_start:
                    temp_r4 = temp_r4 >> 1U;
                    var_r11_2 = 0;
                    var_r3_2 = *(s32 *)M2C_FIELD(arg0, s32 *, 0xA4);
loop_35:
                    if (var_r3_2 != NULL) {
                        if ((s32) temp_r4 == var_r11_2) {
                            goto odd_call;
                        } else {
                            temp_r0_5 = M2C_FIELD(var_r3_2, void **, 0);
                            var_r11_2 += 1;
                            if (temp_r0_5 != NULL) {
                                var_r3_2 = temp_r0_5;
                            } else {
                                var_r3_2 = M2C_FIELD(var_r3_2, void **, 0x17C);
                            }
                            goto loop_35;
                        }
                    }
                }
            }
        }
    }
done_all:
    return;
}
