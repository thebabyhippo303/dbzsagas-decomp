/* CollideArray8__AppendDescription @ 0x801D4BDC (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int sprintf(char *, const char *, ...);
char * strcat(char *, const char *);
extern char lbl_80341E7C[] __attribute__((section(".data")));

void CollideArray8__AppendDescription(void *arg0, char *arg1) {
    char buf[256];

    sprintf(buf, lbl_80341E7C, M2C_FIELD(arg0, s32 *, 0x24), 8, M2C_FIELD(arg0, s32 *, 0x28));
    strcat(arg1, buf);
}
