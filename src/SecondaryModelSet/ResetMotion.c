/* SecondaryModelSet__ResetMotion @ 0x80210C14 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void SecondaryModel__RequestReset(void *);
void SecondaryModelSet__ResetMotion(void *arg0) {
    void *self = arg0;
    s32 count = 0;
    if (count < M2C_FIELD(self, s32 *, 4)) {
        s32 off = 0;
        do {
            count += 1;
            SecondaryModel__RequestReset(M2C_FIELD((off + M2C_FIELD(self, s32 *, 0xC)), void **, 0x78));
            off += 0xB0;
        } while (count < M2C_FIELD(self, s32 *, 4));
    }
}
