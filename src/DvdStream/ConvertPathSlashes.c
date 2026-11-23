/* DvdStream__ConvertPathSlashes @ 0x80197910 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void DvdStream__ConvertPathSlashes(u8 *arg0, s8 *arg1) {
    s8 *var_r4;
    u8 *var_r3;
    u8 var_r0;

    var_r3 = arg0;
    var_r4 = arg1;
    var_r0 = *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s32) var_r0 == 0x5C) {
                *var_r4 = 0x2F;
            } else {
                *var_r4 = var_r0;
            }
            var_r0 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 1;
            var_r4 += 1;
        } while ((s32) var_r0 != 0);
    }
    *var_r4 = 0;
}
