/* WaterMesh__SetHeightWave @ 0x8027B32C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern f32 lbl_8034F194 __attribute__((section(".data")));
void NoiseTable__Generate(void *, s32, f32);

void WaterMesh__SetHeightWave(void *arg0, s32 mode, f32 f1, f32 f2) {
    arg0 = (char *)arg0 + 0x108;
    if (f1 == lbl_8034F194 || f2 == lbl_8034F194) {
        mode = 0;
    }
    M2C_FIELD(arg0, f32 *, 8) = f2;
    M2C_FIELD(arg0, s32 *, 0) = mode;
    M2C_FIELD(arg0, f32 *, 4) = f1;
    if ((u32)(mode - 4) <= 1U) {
        NoiseTable__Generate((char *)arg0 + 0xC, 128, f1);
    }
}
