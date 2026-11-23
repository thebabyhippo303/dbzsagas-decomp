/* PadManager__CreateControllers @ 0x801D8A90 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Mem__New(s32);
M2C_UNK GcnController__Construct(s32, s32, s32);
s32 PadManager__CreateControllers(s32 arg0) {
    u8 *var_r30;
    s32 temp_r3;
    s32 var_r29;

    var_r29 = 0;
    var_r30 = arg0 + 0x18;
    do {
        temp_r3 = GcnController__Construct(Mem__New(0x4618), var_r29, arg0);
        var_r29 += 1;
        *(s32 *)var_r30 = temp_r3;
        var_r30 += 4;
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
    } while (var_r29 <= 3);
    return 1;
}
