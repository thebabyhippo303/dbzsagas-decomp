/* SphereTextBox__FindNextSpace @ 0x802733BC (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char *SphereTextBox__FindNextSpace(void *arg0, char *arg1) {
    char *p;
    s8 c;

    p = arg1;
loop_1:
    c = *++p;
    if (c == 0) {
        return NULL;
    }
    if (c != 0x20) {
        goto loop_1;
    }
    return p;
}
