/* RenderState__Lock @ 0x80241404 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef double f64;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64;
typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef struct { s32 force; s32 cur; s32 lock; } StateEntry;
extern StateEntry lbl_803B1848[] __attribute__((section(".bss")));
void RenderState__Lock(s32 arg0) {
lbl_803B1848[arg0].lock = 1;
}
