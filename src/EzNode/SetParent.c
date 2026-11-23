/* EzNode__SetParent @ 0x802659AC (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void EzNode__SetParent(void *self, void *parent) {
    void *u1 = M2C_FIELD(self, void **, 16);
    s32 adj1 = M2C_FIELD(u1, s16 *, 64);
    void (*fn1)(void *) = M2C_FIELD(u1, void (**)(void *), 68);
    void *u2;
    s32 adj2;
    void (*fn2)(void *, void *);
    fn1((char *)self + adj1);
    if (parent == NULL) {
        return;
    }
    u2 = M2C_FIELD(parent, void **, 16);
    adj2 = M2C_FIELD(u2, s16 *, 40);
    fn2 = M2C_FIELD(u2, void (**)(void *, void *), 44);
    fn2((char *)parent + adj2, self);
}
