/* GridBase__Construct @ 0x80254DAC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void TableSet__Init(void *arg);
extern char lbl_80348630[];

void *GridBase__Construct(char *self) {
    *(void **)(self + 0x10) = lbl_80348630;
    TableSet__Init(self + 8);
    *(int *)(self + 4) = 0;
    *(int *)self = 0;
    return self;
}
