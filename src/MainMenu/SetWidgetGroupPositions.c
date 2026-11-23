/* MainMenu__SetWidgetGroupPositions @ 0x801301B8 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void MainMenu__SetWidgetGroupPositions(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_r0)(s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 temp_r3;
    s32 var_r29;
    s32 var_r31;
    void **var_r30;
    void *temp_r9;

    var_r31 = arg0 + 0x340;
    var_r30 = arg0 + 0x4DC;
    var_r29 = 4;
    do {
        temp_r9 = *var_r30;
        temp_r0 = M2C_FIELD(temp_r9, M2C_UNK (**)(s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x6C);
        var_r30 = (void **)((char *)var_r30 + 0x1C0);
        temp_r3 = var_r31 + M2C_FIELD(temp_r9, s16 *, 0x68);
        var_r31 += 0x1C0;
        temp_r0(temp_r3, arg1, arg2, 0, 1, 1);
        var_r29 -= 1;
    } while (var_r29 != 0);
}
