/* BoneChainSet__OnBoneUpdated @ 0x801DB564 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 BoneChain__GetRootBoneIndex(void *);            /* extern */
M2C_UNK BoneChain__UpdateForBone(void *, s32);      /* extern */

void BoneChainSet__OnBoneUpdated(void **arg0, s32 arg1, s32 arg2) {
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
loop_1:
        if (arg1 == BoneChain__GetRootBoneIndex(var_r31)) {
            BoneChain__UpdateForBone(var_r31, arg2);
            return;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 0x17C);
        if (var_r31 == NULL) {

        } else {
            goto loop_1;
        }
    }
}
