/* AI__ResetDismembermentState @ 0x800766B0 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void AI__ResetDismembermentState(void *arg0) {
    s32 var_ctr;
    void *var_r3;

    var_ctr = 7;
    M2C_FIELD(arg0, s32 *, 0x5B8) = 0;
    var_r3 = arg0 + 0x59C;
    do {
        M2C_FIELD(var_r3, s32 *, -0x1C) = 1;
        M2C_FIELD(var_r3, s32 *, 0) = 0;
        var_r3 += 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
}
