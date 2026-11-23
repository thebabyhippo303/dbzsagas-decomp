/* Weapon__DestroyFromDefinition @ 0x800D0EA0 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Weapon__Destroy(void *, s32);
extern M2C_UNK lbl_80334B88 __attribute__((section(".data")));

void Weapon__DestroyFromDefinition(void *arg0, s32 arg1) {
    s32 temp_r0;
    void *var_r9;

    temp_r0 = arg0 + 0x6C;
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &lbl_80334B88;
    if (temp_r0 != 0) {
        var_r9 = arg0 + 0x9C;
        if (temp_r0 != var_r9) {
            do {
                var_r9 -= 0x18;
            } while (temp_r0 != var_r9);
        }
    }
    Weapon__Destroy(arg0, arg1);
}
