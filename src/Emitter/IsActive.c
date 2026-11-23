/* Emitter__IsActive @ 0x80222E1C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32;
typedef int s32;
extern char *lbl_803AD48C __attribute__((section(".data")));
s32 Emitter__IsActive(u32 arg0) {
    u32 *entry = (u32 *)(lbl_803AD48C + (arg0 >> 16) * 0x110);
    if (entry[0] != arg0) {
        return 0;
    }
    return (entry[1] >> 6) & 1;
}
