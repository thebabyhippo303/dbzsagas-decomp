/* BoneChainSet__SetExternalForceScale @ 0x801DB744 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void BoneChainSet__SetExternalForceScale(void **arg0, f32 farg0) {
    void *temp_r0;
    void *var_r3;

    var_r3 = *arg0;
    if (var_r3 != NULL) {
        do {
            temp_r0 = M2C_FIELD(var_r3, void **, 0);
            M2C_FIELD(var_r3, f32 *, 0x178) = farg0;
            if (temp_r0 != NULL) {
                var_r3 = temp_r0;
            } else {
                var_r3 = M2C_FIELD(var_r3, void **, 0x17C);
            }
        } while (var_r3 != NULL);
    }
}
