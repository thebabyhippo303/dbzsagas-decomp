/* MenuOption__Construct @ 0x80267824 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char lbl_8034B3E8[];
void EzNode__Construct(void *);
void SphereText__Construct(void *);
void Sphere__Construct(void *);
void MenuOption__SetId(void *, s32);
void Sphere__AddChild(void *, void *);

void *MenuOption__Construct(void *arg0, s32 arg1) {
    char *p = (char *)arg0 + 0x20C;
    int i = 1;
    char *q;
    EzNode__Construct(arg0);
    *(char **)((char *)arg0 + 0x10) = lbl_8034B3E8;
    SphereText__Construct((char *)arg0 + 0x18);
    do {
        Sphere__Construct(p);
        p += 0x1A0;
    } while (i--);
    MenuOption__SetId(arg0, arg1);
    q = (char *)arg0 + 0x18;
    p = (char *)arg0 + 0x20C;
    i = 2;
    do {
        Sphere__AddChild(q, p);
        p += 0x1A0;
    } while (--i);
    return arg0;
}
