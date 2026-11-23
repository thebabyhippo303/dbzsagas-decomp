/* Matrix__DecomposeRotTrans @ 0x8023F53C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Matrix__DecomposeRotTrans @ 0x8023F53C (0x4C). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
#define NULL 0

void Quaternion__FromMatrix(void *, void *);

void Matrix__DecomposeRotTrans(void *arg0, void *arg1) {
    void *t;

    Quaternion__FromMatrix(arg0, arg1);
    t = (char *)arg1 + 16;
    M2C_FIELD(arg1, f32 *, 16) = M2C_FIELD(arg0, f32 *, 48);
    M2C_FIELD(t, f32 *, 4) = M2C_FIELD(arg0, f32 *, 52);
    M2C_FIELD(t, f32 *, 8) = M2C_FIELD(arg0, f32 *, 56);
}
