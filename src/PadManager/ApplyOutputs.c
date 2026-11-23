/* PadManager__ApplyOutputs @ 0x801D8C10 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK PADControlAllMotors(s32);
M2C_UNK PADReset(s32);
void PadManager__ApplyOutputs(void *arg0) {
    s32 temp_r3;
    void **var_r31;
    void *temp_r11;
    void *temp_r9;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x78) != 0) {
        PADControlAllMotors((s32) (arg0 + 0x68));
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x7C);
    if (temp_r3 != 0) {
        PADReset(temp_r3);
    }
    var_r31 = arg0 + 0x18;
    do {
        temp_r11 = *var_r31;
        var_r31 += 4;
        if (temp_r11 != NULL) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x1F8);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x54)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x50));
        }
    } while (var_r31 <= (void *) (arg0 + 0x24));
}
