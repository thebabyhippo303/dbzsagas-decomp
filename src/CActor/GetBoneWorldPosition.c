/* CActor__GetBoneWorldPosition @ 0x801DD1FC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void CActor__TransformModelPointToWorld(void *, void *, void *);
M2C_UNK CActor__GetBoneModelPosition(s32, s32, s32);
void *CActor__GetBoneWorldPosition(void *arg0, s32 arg1, s32 arg2) {
    union { M2C_UNK value; unsigned char bytes[16]; } sp8;

    CActor__GetBoneModelPosition((s32) ((M2C_UNK *)sp8.bytes), arg1, arg2);
    CActor__TransformModelPointToWorld(arg0, (void *) arg1, ((M2C_UNK *)sp8.bytes));
    return arg0;
}
