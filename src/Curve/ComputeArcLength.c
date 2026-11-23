/* Curve__ComputeArcLength @ 0x800E0FA0 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_800E1214(M2C_UNK *, s32);                /* extern */
extern M2C_UNK Curve__GetSpeedAtParameter __attribute__((section(".data")));

void Curve__ComputeArcLength(s32 arg0) {
    fn_800E1214(&Curve__GetSpeedAtParameter, arg0);
}
