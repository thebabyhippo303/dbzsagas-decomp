/* UiAnimator__ScaleKeyTimes @ 0x80260698 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void UiAnimator__ScaleKeyTimes(void *arg0, f32 arg1) {
    void *temp_r9 = M2C_FIELD(arg0, void **, 0x20);
    f32 temp_f0;
    if (temp_r9 == NULL) {
        return;
    }
    temp_f0 = M2C_FIELD(temp_r9, f32 *, 8);
    do {
        temp_f0 *= arg1;
    } while (temp_r9 != NULL);
    M2C_FIELD(temp_r9, f32 *, 8) = temp_f0;
}
