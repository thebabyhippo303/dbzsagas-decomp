/* AI__ChooseWeightedActionByChance @ 0x8007812C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 Rand__FloatClosed(void *);
s32 AI__SelectWeightedAction(void *, void *, s32, s32);
extern f32 lbl_8031F0A8 __attribute__((section(".data")));
extern s32 lbl_80363A0C[] __attribute__((section(".data")));
extern M2C_UNK lbl_803DD634;

s32 AI__ChooseWeightedActionByChance(void *arg0) {
    s32 var_r30;

    var_r30 = 0x86;
    if (!(Rand__FloatClosed(&lbl_803DD634) >= lbl_8031F0A8)) {
        var_r30 = lbl_80363A0C[AI__SelectWeightedAction(arg0 + 0x90, M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0xB8C), 3, 0)];
    }
    return var_r30;
}
