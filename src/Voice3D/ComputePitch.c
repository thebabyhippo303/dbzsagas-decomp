/* Voice3D__ComputePitch @ 0x8019C2AC (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 Voice__ComputePitch(void *);
f32 Voice3D__ComputePitch(void *arg0) {
    return (M2C_FIELD(arg0, f32 *, 0xA4) * M2C_FIELD(arg0, f32 *, 0xAC)) + Voice__ComputePitch(arg0);
}
