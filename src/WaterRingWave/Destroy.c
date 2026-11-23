/* WaterRingWave__Destroy @ 0x80293BC0 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define NULL 0
void Mem__Delete(void *);
extern M2C_UNK lbl_80350230 __attribute__((section(".data")));
void WaterRingWave__Destroy(void *self, s32 flags) {
    M2C_FIELD(self, M2C_UNK **, 0x28) = &lbl_80350230;
    if (flags & 1) {
        Mem__Delete(self);
    }
}
