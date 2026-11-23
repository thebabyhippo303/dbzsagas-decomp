/* Mover__MeasureStateSize @ 0x802BCBA8 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 Simple__GetBaseStateSize(void *arg0) {
    s32 var_r9;

    var_r9 = 0x74;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x5A0) != 0) {
        var_r9 = 0x118;
    }
    return var_r9 + (((var_r9 ^ 0xF) + 1) & 0xF);
}
