/* Mover__MoveToPosImpl @ 0x802B60DC (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Floater__MoveToPosImpl(void *, s32, f32);
void Floater__MoveToPosOnAxes(void *, int, int, float);
extern f32 lbl_80352060 __attribute__((section(".data")));

void Mover__MoveToPosImpl(void *arg0, s32 arg1, f32 farg0) {
    if (!(M2C_FIELD(arg0, f32 *, 0x550) < lbl_80352060)) {
        Floater__MoveToPosImpl(arg0, arg1, farg0);
        return;
    }
    Floater__MoveToPosOnAxes(arg0, arg1, 5, farg0);
}
