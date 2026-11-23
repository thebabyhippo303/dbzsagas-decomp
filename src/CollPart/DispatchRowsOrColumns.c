/* CollPart__DispatchRowsOrColumns @ 0x8029ED6C (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 CollPart__DispatchRowsOrColumns(void *arg0, void *arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r30;
    s32 var_r30_2;
    void *temp_r9;
    void *temp_r9_2;

    if ((s32) M2C_FIELD(arg1, s32 *, 0xC) != 0) {
        var_r30 = 0;
        if (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
            do {
                temp_r9 = M2C_FIELD(arg0, void **, 0);
                temp_r5 = var_r30;
                var_r30 += 1;
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, s32, void *), 0x14)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x10), M2C_FIELD(arg1, s32 *, 4), temp_r5, arg1 + 0x10);
            } while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0xC));
        }
    } else {
        var_r30_2 = 0;
        if (var_r30_2 < (s32) M2C_FIELD(arg0, s32 *, 8)) {
            do {
                temp_r9_2 = M2C_FIELD(arg0, void **, 0);
                temp_r4 = var_r30_2;
                var_r30_2 += 1;
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, s32, s32, void *), 0x14)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x10), temp_r4, M2C_FIELD(arg1, s32 *, 8), arg1 + 0x10);
            } while (var_r30_2 < (s32) M2C_FIELD(arg0, s32 *, 8));
        }
    }
    return 1;
}
