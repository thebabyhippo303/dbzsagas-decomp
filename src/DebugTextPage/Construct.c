/* DebugTextPage__Construct @ 0x8026F5DC (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *EzNode__Construct(void *);
void Sphere__Construct(void *);
void SphereText__Construct(void *);
void Sphere__AddChild(void *, void *);
extern char lbl_8034A5F0[];

void *DebugTextPage__Construct(char *self) {
    int i = 7;
    char *p = self + 0x1B4;
    char *q;

    EzNode__Construct(self);
    *(char **)(self + 0x10) = lbl_8034A5F0;
    Sphere__Construct(self + 0x14);
    do {
        SphereText__Construct(p);
        p += 0x1F4;
    } while (i-- != 0);
    q = self + 0x14;
    p = self + 0x1B4;
    i = 8;
    do {
        Sphere__AddChild(q, p);
        p += 0x1F4;
    } while (--i);
    return self;
}
