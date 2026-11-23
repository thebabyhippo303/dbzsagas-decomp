/* PadManager__DestroyControllers @ 0x801D8AF8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void PadManager__DestroyControllers(u32 arg0) {
    s32 var_r29;
    s32 var_r30;
    void **var_r31;
    void *temp_r11;
    void *temp_r9;

    var_r31 = arg0 + 0x18;
    var_r29 = 0;
    var_r30 = 4;
    do {
        temp_r11 = *var_r31;
        if (temp_r11 != NULL) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x1F8);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0xC)(M2C_FIELD(temp_r9, s16 *, 8) + temp_r11, 3);
            *var_r31 = (void *) var_r29;
        }
        var_r31 += 1;
        var_r30 -= 1;
    } while (var_r30 != 0);
}
