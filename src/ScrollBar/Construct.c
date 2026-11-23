/* ScrollBar__Construct @ 0x80261AEC (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void Sphere__AddChild(void *, void *);
void Sphere__Construct(void *);
extern char lbl_8034CC50[] __attribute__((section(".data")));
void *ScrollBar__Construct(void *arg0) {
    void *a; void *b; void *c; void *d; s32 z; s32 o;
    a = (char *) arg0 + 0x1A0;
    Sphere__Construct(arg0);
    b = (char *) arg0 + 0x340;
    M2C_FIELD(arg0, char **, 0x19C) = lbl_8034CC50;
    c = (char *) arg0 + 0x4E0;
    d = (char *) arg0 + 0x680;
    Sphere__Construct(a);
    Sphere__Construct(b);
    Sphere__Construct(c);
    Sphere__Construct(d);
    Sphere__AddChild(arg0, a);
    Sphere__AddChild(arg0, b);
    Sphere__AddChild(arg0, c);
    Sphere__AddChild(a, d);
    z = 0;
    M2C_FIELD(arg0, s32 *, 0x820) = z;
    M2C_FIELD(arg0, s32 *, 0x824) = z;
    M2C_FIELD(arg0, s32 *, 0x828) = z;
    o = 1;
    M2C_FIELD(arg0, s32 *, 0x82C) = o;
    return arg0;
}
