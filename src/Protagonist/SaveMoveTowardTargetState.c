/* Protagonist__SaveMoveTowardTargetState @ 0x8015A92C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void Protagonist__SaveMoveTowardTargetState(void *arg0, void *arg1) {
    s32 *d = (s32 *)((char *)arg0 + 0x14);
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;

    M2C_FIELD(arg0, s32 *, 0) = 1;
    t0 = M2C_FIELD(arg1, s32 *, 0);
    t1 = M2C_FIELD(arg1, s32 *, 4);
    t2 = M2C_FIELD(arg1, s32 *, 8);
    t3 = M2C_FIELD(arg1, s32 *, 12);
    M2C_FIELD(arg0, s32 *, 20) = t0;
    d[1] = t1;
    d[2] = t2;
    d[3] = t3;
    t4 = M2C_FIELD(arg1, s32 *, 16);
    d[4] = t4;
}
