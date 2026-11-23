/* RigidBody__GetDynamicsState @ 0x801A5A40 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


typedef struct W3 { s32 a, b, c; } W3;
typedef struct M3 { f32 m[9]; } M3;
void RigidBody__GetDynamicsState(void *rb, f32 *arg1, M3 *arg2, W3 *arg3, M3 *arg4, W3 *arg5, W3 *arg6) {
    W3 *v1;
    W3 *v2;
    W3 *v3;
    M3 *m1;
    M3 *m2;

    v1 = (W3 *) ((char *) rb + 0x224);
    v2 = (W3 *) ((char *) rb + 0x254);
    v3 = (W3 *) ((char *) rb + 0x260);
    *arg1 = M2C_FIELD(rb, f32 *, 0x1A4);
    m2 = (M3 *) ((char *) rb + 0x230);
    m1 = (M3 *) ((char *) rb + 0x1AC);
    arg2->m[0] = m1->m[0];
    arg2->m[1] = m1->m[1];
    arg2->m[2] = m1->m[2];
    arg2->m[3] = m1->m[3];
    arg2->m[4] = m1->m[4];
    arg2->m[5] = m1->m[5];
    arg2->m[6] = m1->m[6];
    arg2->m[7] = m1->m[7];
    arg2->m[8] = m1->m[8];
    *arg3 = *v1;
    arg4->m[0] = m2->m[0];
    arg4->m[1] = m2->m[1];
    arg4->m[2] = m2->m[2];
    arg4->m[3] = m2->m[3];
    arg4->m[4] = m2->m[4];
    arg4->m[5] = m2->m[5];
    arg4->m[6] = m2->m[6];
    arg4->m[7] = m2->m[7];
    arg4->m[8] = m2->m[8];
    *arg5 = *v2;
    *arg6 = *v3;
}
