/* WaterCell__ResetPhysicsState @ 0x80294654 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void WaterCell__ResetPhysicsState(char *self) {
    M2C_FIELD(self, s32 *, 0x3EC) = 0;
    M2C_FIELD(self, s32 *, 0x3F4) = 0;
    M2C_FIELD(self, s32 *, 0x3F0) = 0;
    M2C_FIELD(self, s32 *, 0x3F8) = 0;
    M2C_FIELD(self, s32 *, 0x400) = 0;
}
