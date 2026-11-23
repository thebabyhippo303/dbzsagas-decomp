/* NameList__AddName @ 0x80254AD0 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

unsigned Mem__NewArray(unsigned);
char *strncpy(char *, char *, unsigned);
int NameList__AddName(void *arg0, char *arg1, unsigned arg2) {
    char *base = *(char **)((char *)arg0 + 8);
    int n = *(int *)arg0 * 8;
    *(char **)(n + (int)base) = (char *)Mem__NewArray(arg2 + 1);
    if (*(char **)(*(char **)((char *)arg0 + 8) + *(int *)arg0 * 8) == 0) {
        return 0;
    }
    strncpy(*(char **)(*(char **)((char *)arg0 + 8) + *(int *)arg0 * 8), arg1, arg2);
    (*(char **)(*(char **)((char *)arg0 + 8) + *(int *)arg0 * 8))[arg2] = 0;
    *(int *)(*(char **)((char *)arg0 + 8) + *(int *)arg0 * 8 + 4) = 0;
    *(int *)arg0 = *(int *)arg0 + 1;
    return 1;
}
