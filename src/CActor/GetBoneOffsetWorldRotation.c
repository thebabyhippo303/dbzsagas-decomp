/* CActor__GetBoneOffsetWorldRotation @ 0x801DD0BC (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void Skeleton__GetBoneOffsetWorldRotation(s32, s32, void *);
void CActor__GetBoneOffsetWorldRotation(char *arg0, s32 arg1, f32 *arg2) {
    union { f32 value; unsigned char bytes[60]; } sp8;
    f32 *p;

    Skeleton__GetBoneOffsetWorldRotation(M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), s32 *, 0xC), arg1, sp8.bytes);
    p = (f32 *)sp8.bytes;
    arg2[0] = sp8.value;
    arg2[1] = p[1];
    arg2[2] = p[2];
    arg2[3] = p[4];
    arg2[4] = p[5];
    arg2[5] = p[6];
    arg2[6] = p[8];
    arg2[7] = p[9];
    arg2[8] = p[10];
}
