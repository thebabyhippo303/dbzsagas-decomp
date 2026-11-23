/* CollideArray12__AppendDescription @ 0x801D46FC (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strcat(char *, char *);
void * sprintf(s8 *, void *, ...);
extern M2C_UNK lbl_80341E7C __attribute__((section(".data")));

void CollideArray12__AppendDescription(void *arg0, s8 *arg1) {
    union { s8 value; unsigned char bytes[252]; } sp8;

    sprintf(((s8 *)sp8.bytes), &lbl_80341E7C, M2C_FIELD(arg0, s32 *, 0x24), 0xC, M2C_FIELD(arg0, s32 *, 0x28));
    strcat(arg1, ((s8 *)sp8.bytes));
}
