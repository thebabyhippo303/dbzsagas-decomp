/* TableFile__Destroy @ 0x8025545C (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

extern char lbl_803485F8[];
void Mem__Delete(void *self);

void TableFile__Destroy(void *self, u32 flags) {
    *(void **)((char *)self + 8) = lbl_803485F8;
    if (flags & 1) {
        Mem__Delete(self);
    }
}
