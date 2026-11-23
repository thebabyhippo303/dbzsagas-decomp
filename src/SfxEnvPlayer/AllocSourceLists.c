/* SfxEnvPlayer__AllocSourceLists @ 0x8019B67C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * Mem__NewArray(s32);
void SfxEnvPlayer__AllocSourceLists(void *unused, void *arg1, s32 arg2) {
    s32 temp_r30;
    s8 *temp_r3;

    if (((s32) M2C_FIELD(arg1, s32 *, 0x18) == 0) && (arg2 != 0)) {
        temp_r30 = arg2 * 4;
        M2C_FIELD(arg1, s8 **, 0) = Mem__NewArray(temp_r30);
        temp_r3 = Mem__NewArray(temp_r30);
        M2C_FIELD(arg1, s8 **, 8) = temp_r3;
        M2C_FIELD(arg1, s32 *, 0x18) = arg2;
    }
}
