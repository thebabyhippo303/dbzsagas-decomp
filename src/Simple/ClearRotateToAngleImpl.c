/* Simple__ClearRotateToAngleImpl @ 0x802CB6C0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
extern f32 lbl_80353314 __attribute__((section(".rodata")));
void Simple__ClearRotateToAngleImpl(void *arg0) {
    f32 *p1 = (f32 *)((char *)arg0 + 116);
    f32 *p2 = (f32 *)((char *)arg0 + 704);
    f32 *pc = &lbl_80353314;
    f32 c;
    M2C_FIELD(arg0, s32 *, 532) = 0;
    M2C_FIELD(arg0, s32 *, 536) = 0;
    M2C_FIELD(arg0, s32 *, 540) = 0;
    c = *pc;
    p1[0] = c;
    p1[1] = c;
    p1[2] = c;
    p2[0] = c;
    p2[1] = c;
    p2[2] = c;
    M2C_FIELD(arg0, s32 *, 544) = 0;
}
