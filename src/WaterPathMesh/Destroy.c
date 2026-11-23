/* WaterPathMesh__Destroy @ 0x8027F8C0 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

M2C_UNK WaterMesh__Destroy(s32, s32);
extern M2C_UNK lbl_80350578 __attribute__((section(".data")));

void WaterPathMesh__Destroy(M2C_UNK **arg0, s32 arg1) {
    *arg0 = &lbl_80350578;
    WaterMesh__Destroy((s32) arg0, arg1);
}
