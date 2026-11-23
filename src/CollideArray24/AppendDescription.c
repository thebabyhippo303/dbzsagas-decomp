/* CollideArray24__AppendDescription @ 0x801D4B0C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strcat(char *, char *);
void * sprintf(s8 *, void *, s8 *, s32, ...);
extern M2C_UNK lbl_80341E7C __attribute__((section(".data")));

void CollideArray24__AppendDescription(void *arg0, s8 *arg1) {
    s8 buffer[252];
    sprintf(buffer, (const s8 *)&lbl_80341E7C,
            M2C_FIELD(arg0, s32 *, 0x24), 0x18,
            M2C_FIELD(arg0, s32 *, 0x28));
    strcat(arg1, buffer);
}
