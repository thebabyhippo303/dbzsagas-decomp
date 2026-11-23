/* strncat @ 0x80163AF0 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32;
char *strncat(char *dest, const char *src, u32 n) {
    u32 word;
    u32 next;
    char *ret;

    ret = dest;
    if (((u32)dest & 3) == 0) {
        word = *(const u32 *)dest;
        if (((word + 0xFEFEFEFFu) & ~word & 0x80808080u) == 0) {
            do {
                dest += 4;
                next = *(const u32 *)dest;
            } while (((next + 0xFEFEFEFFu) & ~next & 0x80808080u) == 0);
        }
    }
    if (*dest != 0) {
        do {
            dest++;
        } while (*dest != 0);
    }
    while (n-- != 0) {
        if ((*dest++ = *src++) == 0) {
            break;
        }
        if (n == 0) {
            *dest = 0;
        }
    }
    return ret;
}
