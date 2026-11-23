/* PathManager__DestroyInstance @ 0x801FCDC0 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern void *lbl_803DD564;

void PathManager__DestroyInstance(void) {
    void *temp_r9;

    if ((void *) lbl_803DD564 != NULL) {
        temp_r9 = M2C_FIELD(lbl_803DD564, void **, 0x98);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(lbl_803DD564 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    lbl_803DD564 = NULL;
}
