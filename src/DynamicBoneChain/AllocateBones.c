/* DynamicBoneChain__AllocateBones @ 0x801EAB4C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
#define NULL 0
u32 Mem__NewArray(u32);
void Mem__DeleteArray(void *);
s32 BoneChain__AllocateBones(void *, s32);
s32 DynamicBoneChain__AllocateBones(char *self, s32 arg1) {
    s32 n;
    void *i;
    char *arr;
    char *old;
    if (BoneChain__AllocateBones(self, arg1) != 0) {
        n = *(s32 *)(self + 8);
        arr = (char *)Mem__NewArray(n * 0x6C);
        i = n - 1;
        if (i != -1) {
            do {
            } while (i-- != 0);
        }
        *(char **)(self + 0x3C) = arr;
        if (arr == NULL) {
            old = *(char **)(self + 0xC);
            if (old != NULL) {
                Mem__DeleteArray(old);
            }
            *(char **)(self + 0xC) = arr;
            return 0;
        }
    }
    return 1;
}
