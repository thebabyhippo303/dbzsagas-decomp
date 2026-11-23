/* Simple__SetYRotVel @ 0x802C6C3C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
extern const f32 lbl_8035323C __attribute__((section(".data")));
typedef struct { char p0[0x78]; f32 yv; char p1[0x220-0x7C]; s32 flag; char p2[0x2c0-0x224]; f32 v[3]; } S;
void Simple__SetYRotVel(S *p, f32 x) {
    f32 *q = p->v;
    f32 c;
    s32 z = 0;
    p->yv = x;
    c = lbl_8035323C;
    q[1] = c;
    if (p->v[0] != c || q[2] != c) z = 1;
    p->flag = z;
}
