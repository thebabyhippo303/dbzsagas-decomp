/* Sphere__ClearTexture @ 0x8026BA50 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct VT {
    char pad[0x50];
    s16 adj50; s16 pad50b;
    void (*fn54)(void *);
    char pad2[0x10];
    s16 adj68; s16 pad68b;
    void (*fn6C)(void *, s32, s32, s32, s32, s32);
    char pad3[0x180];
    s16 adj1F0; s16 pad1F0b;
    void (*fn1F4)(void *);
} VT;

void Sphere__ClearTexture(void *arg0) {
    VT *vt;
    vt = M2C_FIELD(arg0, VT **, 0x19C);
    vt->fn6C((char *)arg0 + vt->adj68, 0, 0, 0, 1, 1);
    vt = M2C_FIELD(arg0, VT **, 0x19C);
    vt->fn54((char *)arg0 + vt->adj50);
    vt = M2C_FIELD(arg0, VT **, 0x19C);
    vt->fn1F4((char *)arg0 + vt->adj1F0);
}
