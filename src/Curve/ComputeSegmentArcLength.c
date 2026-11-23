/* Curve__ComputeSegmentArcLength @ 0x800E033C (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

M2C_UNK Math__IntegrateRomberg(M2C_UNK *, s32);     /* extern */
extern M2C_UNK fn_800E0480 __attribute__((section(".data")));

void Curve__ComputeSegmentArcLength(s32 arg0) {
    Math__IntegrateRomberg(&fn_800E0480, arg0);
}
