/* VarBool__Init @ 0x8018D284 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char lbl_8033EFA8[];
extern void Variable__Init(void *self, int a, int b, int d, int e);

void *VarBool__Init(void *self, int a, int b, int c, int d, int e) {
    Variable__Init(self, a, b, d, e);
    *(int *)((char *)self + 0x40) = c;
    *(void **)((char *)self + 4) = lbl_8033EFA8;
    return self;
}
