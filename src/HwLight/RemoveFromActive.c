/* HwLight__RemoveFromActive @ 0x8024A578 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern s32 lbl_803B1838 __attribute__((section(".data")));
extern s32 lbl_803DCD5C;

void HwLight__RemoveFromActive(s32 arg0) {
    s32 *var_r7;
    s32 *var_r9;
    s32 temp_r0;
    s32 var_r10;
    s32 var_r8;

    var_r8 = 0;
    var_r10 = 0;
    if (var_r8 < (s32) lbl_803DCD5C) {
        var_r9 = &lbl_803B1838;
        var_r7 = &lbl_803B1838;
        do {
            temp_r0 = *var_r7;
            var_r7 += 1;
            if (temp_r0 != arg0) {
                if (var_r10 != var_r8) {
                    *var_r9 = temp_r0;
                }
                var_r9 += 1;
                var_r8 += 1;
            }
            var_r10 += 1;
        } while (var_r10 < lbl_803DCD5C);
    }
    if (var_r8 != (s32) lbl_803DCD5C) {
        lbl_803DCD5C = var_r8;
    }
}
