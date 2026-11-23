/* AnimScript__GetCurrentLabel @ 0x8023A97C (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed int s32;
typedef short s16;
#define NULL 0
s32 AnimScript__GetCurrentLabel(void *self, s32 i) {
    s32 off = i * 4;
    void **table = (void **)((char *)self + 240);
    void *p = *(void **)((char *)table + off);
    if (p != NULL)
        return *(s16 *)((char *)p + 10);
    return 0xFFFF;
}
