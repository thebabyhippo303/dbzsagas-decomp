/* SimLoop__DestroyOwnedObjectLists @ 0x80023920 (size: 0x1CC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_801843CC(void *);
void fn_80184430(char *);
void * memset(void *, int, u32);
void SimLoop__DestroyOwnedObjectLists(void *arg0, s32 arg1) {
    s32 var_r29;
    s32 var_r29_2;
    s32 var_r30;
    s32 var_r30_2;
    s8 *temp_r3;
    s8 *temp_r3_4;
    s8 *temp_r3_6;
    s8 *temp_r3_9;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r31;
    void *temp_r3_10;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_5;
    void *temp_r3_7;
    void *temp_r3_8;

    var_r30 = 0;
    temp_r31 = arg0 + 0x20;
    if (var_r30 < (s32) M2C_FIELD(temp_r31, s32 *, 4)) {
        var_r29 = 0;
        do {
            temp_r3 = *(s8 * *)(var_r29 + M2C_FIELD(temp_r31, void **, 0));
            if (temp_r3 != NULL) {
                fn_80184430(temp_r3);
            }
            var_r30 += 1;
            var_r29 += 4;
        } while (var_r30 < (s32) M2C_FIELD(temp_r31, s32 *, 4));
    }
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
        temp_r3_2 = M2C_FIELD(temp_r31, void **, 0);
        if (temp_r3_2 != NULL) {
            memset(temp_r3_2, 0, M2C_FIELD(temp_r31, s32 *, 8) * 4);
        }
    }
    temp_r3_3 = M2C_FIELD(temp_r31, void **, 0);
    *(volatile s32 *)((char *)temp_r31 + 4) = 0;
    if (temp_r3_3 != NULL) {
        fn_801843CC(temp_r3_3);
    }
    temp_r30 = M2C_FIELD(temp_r31, void **, 0x18);
    *(volatile s32 *)((char *)temp_r31 + 0) = 0;
    M2C_FIELD(temp_r31, s32 *, 8) = 0;
    *(volatile s32 *)((char *)temp_r31 + 4) = 0;
    if (temp_r30 != NULL) {
        temp_r3_4 = M2C_FIELD(temp_r30, s8 **, 4);
        if (temp_r3_4 != NULL) {
            fn_80184430(temp_r3_4);
        }
        fn_801843CC(temp_r30);
    }
    temp_r3_5 = M2C_FIELD(temp_r31, void **, 0);
    M2C_FIELD(temp_r31, void **, 0x18) = NULL;
    if (temp_r3_5 != NULL) {
        fn_801843CC(temp_r3_5);
    }
    temp_r31 = arg0 + 4;
    var_r30_2 = 0;
    if (var_r30_2 < (s32) M2C_FIELD(temp_r31, s32 *, 4)) {
        var_r29_2 = 0;
        do {
            temp_r3_6 = *(s8 * *)(M2C_FIELD(temp_r31, void **, 0) + var_r29_2);
            if (temp_r3_6 != NULL) {
                fn_80184430(temp_r3_6);
            }
            var_r30_2 += 1;
            var_r29_2 += 4;
        } while (var_r30_2 < (s32) M2C_FIELD(temp_r31, s32 *, 4));
    }
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
        temp_r3_7 = M2C_FIELD(temp_r31, void **, 0);
        if (temp_r3_7 != NULL) {
            memset(temp_r3_7, 0, M2C_FIELD(temp_r31, s32 *, 8) * 4);
        }
    }
    temp_r3_8 = M2C_FIELD(temp_r31, void **, 0);
    *(volatile s32 *)((char *)temp_r31 + 4) = 0;
    if (temp_r3_8 != NULL) {
        fn_801843CC(temp_r3_8);
    }
    temp_r30_2 = M2C_FIELD(temp_r31, void **, 0x18);
    *(volatile s32 *)((char *)temp_r31 + 0) = 0;
    M2C_FIELD(temp_r31, s32 *, 8) = 0;
    *(volatile s32 *)((char *)temp_r31 + 4) = 0;
    if (temp_r30_2 != NULL) {
        temp_r3_9 = M2C_FIELD(temp_r30_2, s8 **, 4);
        if (temp_r3_9 != NULL) {
            fn_80184430(temp_r3_9);
        }
        fn_801843CC(temp_r30_2);
    }
    temp_r3_10 = M2C_FIELD(temp_r31, void **, 0);
    M2C_FIELD(temp_r31, void **, 0x18) = NULL;
    if (temp_r3_10 != NULL) {
        fn_801843CC(temp_r3_10);
    }
    if (1 & arg1) {
        fn_801843CC(arg0);
    }
}
