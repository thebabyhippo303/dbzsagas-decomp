/* Sphere__SetTextureFrame @ 0x8026C4B4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__SetTextureFrame(void *self, s32 a1, s32 a2, s32 a3, s32 a4) {
    void *u = M2C_FIELD(self, void **, 412);
    s32 adj = M2C_FIELD(u, s16 *, 104);
    void (*fn)(void *, s32, s32, s32, s32, s32) = M2C_FIELD(u, void (**)(void *, s32, s32, s32, s32, s32), 108);
    fn((char *)self + adj, M2C_FIELD(self, s32 *, 20), a1, a2, a3, a4);
}
