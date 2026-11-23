/* Path__HasDirectorySeparator @ 0x8018C658 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int strlen(const char *);
s32 Path__HasDirectorySeparator(s8 *arg0) {
    s32 length = strlen(arg0) - 1;
    s32 i;

    if (length <= 0) return 0;
    i = 0;
    while (i < length) {
        if ((u8)arg0[i] == 0x5C) return 1;
        i++;
    }
    return 0;
}
