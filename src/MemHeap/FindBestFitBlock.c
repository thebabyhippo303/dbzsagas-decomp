/* MemHeap__FindBestFitBlock @ 0x80183228 (size: 0x260, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Assert_Fail(char *, char *, s32, s32);
unsigned int MemBlock__GetAlignment(const unsigned int *);
extern s8 lbl_8033D5A8 __attribute__((section(".data")));
extern M2C_UNK lbl_8033D5E8 __attribute__((section(".data")));
extern s8 lbl_8033D604 __attribute__((section(".data")));
extern s8 lbl_8033D85C __attribute__((section(".data")));
extern s32 lbl_803DCBA0;

u32 *MemHeap__FindBestFitBlock(u32 **arg0, s32 arg1, s32 arg2) {
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r9;
    s32 var_r23;
    s32 var_r25;
    s32 var_r27;
    s32 var_r27_2;
    s32 var_r28;
    s32 var_r28_2;
    s32 var_r31;
    s32 var_r9;
    u32 *var_r18;
    u32 *var_r30;
    u32 temp_r0;
    u32 temp_r0_3;
    u32 temp_r0_5;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 temp_r9_2;
    u32 var_r31_2;

    var_r18 = NULL;
    if ((s32) lbl_803DCBA0 == 0) {
        lbl_803DCBA0 = 1;
        if ((arg0 == NULL) && (Assert_Fail(&lbl_8033D85C, &lbl_8033D5A8, 0xB99, (s32) &lbl_8033D5E8) == 0)) {

        }
        lbl_803DCBA0 = 0;
    }
    var_r30 = *arg0;
    var_r23 = 0x7FFFFFFF;
    if (var_r30 != NULL) {
        do {
            var_r27 = 0;
            temp_r3 = MemBlock__GetAlignment(var_r30);
            temp_r9 = (s32) (var_r30 + 4) % temp_r3;
            if (temp_r9 != 0) {
                var_r27 = temp_r3 - temp_r9;
            }
            if ((s32) lbl_803DCBA0 == 0) {
                lbl_803DCBA0 = 1;
                if ((arg2 == 0) && (Assert_Fail(&lbl_8033D604, &lbl_8033D5A8, 0x2F7, (s32) &lbl_8033D5E8) == 0)) {

                }
                lbl_803DCBA0 = 0;
            }
            var_r9 = 0;
            if (arg2 != 1) {
                do {
                    var_r9 += 1;
                } while (arg2 != (s32) (1 << var_r9));
            }
            temp_r0 = (M2C_FIELD(var_r30, u32 *, 0) & 0x07FFFFFF) | (var_r9 << 0x1B);
            M2C_FIELD(var_r30, u32 *, 0) = temp_r0;
            var_r31 = temp_r0 & 0x07FFFFFF;
            if (temp_r0 & 0x04000000) {
                var_r31 |= 0xF8000000;
            }
            var_r28 = 0;
            temp_r3_2 = MemBlock__GetAlignment(var_r30);
            temp_r0_2 = (s32) (var_r30 + 4) % temp_r3_2;
            if (temp_r0_2 != 0) {
                var_r28 = temp_r3_2 - temp_r0_2;
            }
            temp_r0_3 = (M2C_FIELD(var_r30, u32 *, 0) & 0xF8000000) | (((var_r31 - var_r28) + var_r27) & 0x07FFFFFF);
            M2C_FIELD(var_r30, u32 *, 0) = temp_r0_3;
            var_r28_2 = temp_r0_3 & 0x07FFFFFF;
            if (temp_r0_3 & 0x04000000) {
                var_r28_2 |= 0xF8000000;
            }
            var_r25 = 0;
            temp_r3_3 = MemBlock__GetAlignment(var_r30);
            temp_r0_4 = (s32) (var_r30 + 4) % temp_r3_3;
            if (temp_r0_4 != 0) {
                var_r25 = temp_r3_3 - temp_r0_4;
            }
            if ((s32) lbl_803DCBA0 == 0) {
                lbl_803DCBA0 = 0;
            }
            temp_r0_5 = M2C_FIELD(var_r30, u32 *, 0);
            temp_r9_2 = temp_r0_5 & 0x07FFFFFF;
            M2C_FIELD(var_r30, u32 *, 0) = temp_r9_2;
            var_r31_2 = temp_r9_2;
            if (temp_r0_5 & 0x04000000) {
                var_r31_2 |= 0xF8000000;
            }
            var_r27_2 = 0;
            temp_r3_4 = MemBlock__GetAlignment(var_r30);
            temp_r0_6 = (s32) (var_r30 + 4) % temp_r3_4;
            if (temp_r0_6 != 0) {
                var_r27_2 = temp_r3_4 - temp_r0_6;
            }
            M2C_FIELD(var_r30, u32 *, 0) = (M2C_FIELD(var_r30, u32 *, 0) & 0xF8000000) | (((var_r31_2 - var_r27_2) + var_r25) & 0x07FFFFFF);
            if ((var_r28_2 > arg1) && (var_r28_2 < var_r23)) {
                var_r23 = var_r28_2;
                var_r18 = var_r30;
            }
            var_r30 = M2C_FIELD(var_r30, u32 **, 4);
            if ((s32) lbl_803DCBA0 == 0) {
                lbl_803DCBA0 = 0;
            }
        } while (var_r30 != NULL);
    }
    return var_r18;
}
