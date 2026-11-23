/* Model__FindLoaded @ 0x80188588 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Model__FindMesh(char *);
s32 Model__FindLodGroup(char *);
extern s32 lbl_803DD514;
extern s32 lbl_803DD518;

M2C_UNK *Model__FindLoaded(s8 *arg0) {
    s32 temp_r3;

    temp_r3 = Model__FindMesh(arg0);
    lbl_803DD514 = temp_r3;
    if (temp_r3 != 0) {
        lbl_803DD518 = 0;
    } else {
        lbl_803DD518 = Model__FindLodGroup(arg0);
    }
    if (((s32) lbl_803DD514 != 0) || ((s32) lbl_803DD518 != 0)) {
        return (M2C_UNK *)&lbl_803DD514;
    }
    return NULL;
}
