/* Simple__SetZRotVel @ 0x802C6C78 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
extern const f32 lbl_80353240 __attribute__((section(".data")));
typedef struct { char pad0[0x7C]; volatile f32 rotVel; char pad1[0x220 - 0x80]; volatile s32 flag; char pad2[0x2C0 - 0x224]; volatile f32 value[3]; } Simple;
void Simple__SetZRotVel(Simple *p, f32 x) {
    volatile f32 *q = p->value;
    f32 c;
    s32 z;
    p->rotVel = x;
    c = lbl_80353240;
    z = 0;
    q[2] = c;
    if (q[0] != c || q[1] != c) z = 1;
    p->flag = z;
}