/* Matrix__RotateVectors @ 0x801AC434 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void Matrix__RotateVectors(f32 *m, f32 *in, f32 *out, s32 n) {
    volatile u32 sp[3];
    u32 w0;
    u32 w1;
    u32 w2;
    f32 x;
    f32 y;
    f32 z;
    f32 o0;
    f32 o1;
    f32 o2;

    if (n > 0) {
        do {
            x = in[0];
            y = in[1];
            z = in[2];
            o0 = z * m[8] + (x * m[0] + y * m[4]);
            o1 = z * m[9] + (x * m[1] + y * m[5]);
            o2 = z * m[10] + (x * m[2] + y * m[6]);
            in += 3;
            out[0] = o0;
            out[1] = o1;
            out[2] = o2;
            w0 = *(u32 *)&out[0];
            w1 = *(u32 *)&out[1];
            w2 = *(u32 *)&out[2];
            out += 3;
        } while (--n != 0);
        sp[2] = w2;
        sp[1] = w1;
        sp[0] = w0;
    }
}
