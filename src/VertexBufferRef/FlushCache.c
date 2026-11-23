/* VertexBufferRef__FlushCache @ 0x80250580 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void DCFlushRange(void *, u32);

void VertexBufferRef__FlushCache(void *self) {
    void *p = M2C_FIELD(self, void **, 0);
    DCFlushRange(M2C_FIELD(p, void **, 44), M2C_FIELD(p, u32 *, 48));
}
