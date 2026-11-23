/* VertexBufferRef__Create @ 0x8025036C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *Mem__New(unsigned int size);
extern void *VertexBuffer__Init(void *buf);
extern int VertexBuffer__Configure(void *vb, int a1, int a2, int a3);

void VertexBufferRef__Create(void **ref, int a1, int a2, int a3) {
    void *vb = VertexBuffer__Init(Mem__New(140));
    *ref = vb;
    VertexBuffer__Configure(vb, a1, a2, a3);
}
