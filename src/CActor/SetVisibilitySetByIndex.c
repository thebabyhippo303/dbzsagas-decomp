/* CActor__SetVisibilitySetByIndex @ 0x801DC7BC (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SecondaryModelSet__SetVisibilitySetByIndex(void *, s32);
void SceneMgr__AttachInstanceBySetIndex(void *, s32, s32);
void CActor__SetVisibilitySetByIndex(void *arg0, s32 arg1) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x84);
    if (temp_r9 != NULL) {
        if ((void *) M2C_FIELD(arg0, void **, 0xA8) == NULL) {
            SceneMgr__AttachInstanceBySetIndex(temp_r9, arg1, 0);
            goto block_3;
        }
        goto block_4;
    }
block_3:
    if ((void *) M2C_FIELD(arg0, void **, 0xA8) != NULL) {
block_4:
        SecondaryModelSet__SetVisibilitySetByIndex(M2C_FIELD(arg0, void **, 0xA8), arg1);
    }
}
