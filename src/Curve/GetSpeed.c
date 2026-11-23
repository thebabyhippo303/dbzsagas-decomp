/* Curve__GetSpeed @ 0x800E0480 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void Curve__GetSpeedCallback(void *arg0) {
    M2C_UNK (*temp_r9_2)(void *);
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0);
    temp_r9_2 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x44);
    temp_r9_2(arg0 + M2C_FIELD(temp_r9, s16 *, 0x40));
}
