/* CActor__IsBoneRenderable @ 0x801DD17C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed int s32;
void *Actor__GetBoneById(void *, s32);
s32 Bone__IsRenderable(void *);
s32 CActor__IsBoneRenderable(void *arg0, s32 arg1) {
    void *self = arg0;
    s32 ret = 0;
    if (arg1 == 255) {
        return ret;
    }
    return Bone__IsRenderable(Actor__GetBoneById(self, arg1));
}
