/* Sphere__ClearTextureTree @ 0x8026BAD4 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32;
#define M2C_FIELD(e,t,o) (*(t)((char*)(e)+(o)))
typedef void (*InitFn)(void *);
void Sphere__ClearTextureTree(void *self) {
    void *node;
    void *vt;
    InitFn fn;
    vt = M2C_FIELD(self, void **, 0x19C);
    fn = M2C_FIELD(vt, InitFn *, 0x24);
    fn((char *)self + M2C_FIELD(vt,s16 *,0x20));
    node = M2C_FIELD(self, void **, 4);
    if (node) {
        do {
            vt = M2C_FIELD(node,void**,0x19C);
            fn = M2C_FIELD(vt,InitFn*,0x2C);
            fn((char *)node + M2C_FIELD(vt,s16 *,0x28));
            node = M2C_FIELD(node,void**,8);
        } while(node);
    }
}