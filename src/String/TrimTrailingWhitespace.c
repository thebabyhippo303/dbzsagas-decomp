/* String__TrimTrailingWhitespace @ 0x8018C378 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 String__IsCharInSet(s32, char *);
int strlen(const char *);
extern s8 lbl_8033E9A0 __attribute__((section(".data")));

void String__TrimTrailingWhitespace(s8 *arg0) {
    s32 len;
    s8 *end;

    len = strlen(arg0);
    end = (s8 *) (len + (s32) arg0);
    while (len > 0 && String__IsCharInSet(end[-1], (char *) &lbl_8033E9A0) != 0) {
        *--end = 0;
        len -= 1;
    }
}
