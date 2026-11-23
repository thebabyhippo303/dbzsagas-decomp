/* UiAnimator__CopyKeysOffset @ 0x80260604 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void UiAnimator__CopyKeysOffset(void *arg0, void *arg1, f32 farg0, f32 farg1) {
    void *temp_r31;
    void *temp_r9;

    if (arg1 == NULL) {
        return;
    }
    temp_r31 = M2C_FIELD(arg1, void **, 0x20);
    if (temp_r31 == NULL) {
        return;
    }
    do {
        temp_r9 = M2C_FIELD(arg0, void **, 0x2C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32), 0x5C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x58), M2C_FIELD(temp_r31, f32 *, 8) + farg0, M2C_FIELD(temp_r31, f32 *, 12) + farg1);
    } while (temp_r31 != NULL);
}
