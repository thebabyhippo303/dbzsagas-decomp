/* WaterPathMesh__Construct @ 0x8027F878 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK WaterMesh__Construct(s32);
extern M2C_UNK lbl_80350578 __attribute__((section(".data")));

s32 WaterPathMesh__Construct(s32 arg0) {
    WaterMesh__Construct(arg0);
    M2C_FIELD(arg0, s32 *, 0x3B8) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80350578;
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
    return arg0;
}
