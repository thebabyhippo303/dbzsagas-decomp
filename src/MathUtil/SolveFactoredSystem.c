/* MathUtil__SolveFactoredSystem @ 0x8017DFC4 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: MathUtil__SolveFactoredSystem @ 0x8017DFC4 (0x12C). ProDG -O2. */
typedef int s32;
typedef float f32;

extern f32 lbl_8033D090 __attribute__((section(".data")));

void MathUtil__SolveFactoredSystem(f32 *matrix, f32 *values, s32 size) {
    s32 i;
    s32 j;
    s32 row;
    f32 sum;

    for (i = 1; i < size; i++) {
        s32 n2 = size + size;
        sum = values[0] * matrix[i];
        for (j = 1; j < i; j++) {
            sum += values[j] * matrix[((j * (n2 - 2 - (j - 1))) >> 1) + i];
        }
        values[i] = values[i] - sum;
    }
    for (i = size - 1; i >= 0; i--) {
        s32 n3 = size << 1;
        sum = lbl_8033D090;
        row = (i * (n3 - i - 1)) >> 1;
        for (j = i + 1; j < size; j++) {
            sum += matrix[row + j] * values[j];
        }
        values[i] = values[i] / matrix[row + i] - sum;
    }
}
