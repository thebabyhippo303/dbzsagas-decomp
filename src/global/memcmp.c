/* memcmp @ 0x802CE6A8 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int memcmp(const void *s1, const void *s2, unsigned int n) {
    const unsigned char *a = (const unsigned char *)s1;
    const unsigned char *b = (const unsigned char *)s2;

    if (n > 3 && (((unsigned int)a | (unsigned int)b) & 3) == 0) {
        const unsigned int *wa = (const unsigned int *)a;
        const unsigned int *wb = (const unsigned int *)b;

        if (*wa == *wb) {
            do {
                n -= 4;
                wa++;
                wb++;
                if (n <= 3) {
                    break;
                }
            } while (*wa == *wb);
        }
        a = (const unsigned char *)wa;
        b = (const unsigned char *)wb;
    }

    while (n-- != 0) {
        if (*a != *b) {
            return *a - *b;
        }
        a++;
        b++;
    }
    return 0;
}
