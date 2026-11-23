/* Instance__Initialize @ 0x80200418 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *memset(void *s, int c, unsigned long n);
extern void *AnimMixer__Create(void *a, void *b);

void Instance__Initialize(void *arg0, void *arg1, void *arg2) {
    memset(arg0, 0, 460);
    *(void **)((char *)arg0 + 0x100) = arg0;
    *(void **)((char *)arg0 + 0x94) = (char *)arg0 + 0xB0;
    if (arg1 != 0) {
        *(void **)((char *)arg0 + 0x174) = AnimMixer__Create(arg2, arg1);
    }
}
