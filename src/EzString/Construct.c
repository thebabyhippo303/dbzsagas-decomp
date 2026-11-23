/* EzString__Construct @ 0x8026FD2C (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
extern u8 lbl_8034E320[] __attribute__((section(".data")));
void *EzString__Construct(void *arg0) {
    s32 *p = (s32 *)arg0;
    p[2] = (s32)lbl_8034E320;
    p[0] = 0;
    p[1] = 0;
    return arg0;
}