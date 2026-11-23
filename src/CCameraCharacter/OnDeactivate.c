/* CCameraCharacter__OnDeactivate @ 0x800BCC9C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Game__GetPlayerImpl(void *, s32);
extern void *lbl_803DC3C0;

void CCameraCharacter__OnDeactivate(void) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x34);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x64)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x60), 0);
}
