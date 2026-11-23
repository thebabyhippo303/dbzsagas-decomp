/* DynamicBoneChain__Destroy @ 0x801EAAB0 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
void BoneChain__DestroyBase(void *, s32);
extern M2C_UNK lbl_80344BE8 __attribute__((section(".data")));

void DynamicBoneChain__Destroy(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x3C);
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80344BE8;
    if (temp_r3 != NULL) {
        Mem__DeleteArray(temp_r3);
    }
    BoneChain__DestroyBase(arg0, arg1);
}
