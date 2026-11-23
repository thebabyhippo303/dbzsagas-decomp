/* DynamicBoneChain__CollideAllWithBoxes @ 0x801FB5DC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef struct DBC { char pad[0x38]; struct DBC *next; } DBC;
void DynamicBoneChain__CollideWithBoxes(void *, s32, s32);
void DynamicBoneChain__CollideAllWithBoxes(DBC *arg0, s32 arg1) {
    DynamicBoneChain__CollideWithBoxes(arg0, arg1, 0);
    if (arg0->next != NULL) {
        DynamicBoneChain__CollideAllWithBoxes(arg0->next, arg1);
    }
}