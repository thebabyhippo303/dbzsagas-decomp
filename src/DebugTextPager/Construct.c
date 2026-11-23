/* DebugTextPager__Construct @ 0x8026F790 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern char lbl_8034A268[];
void Sphere__Construct(void *);
void DebugTextPage__Construct(void *);
void *DebugTextPager__Construct(void *arg0) {
    void *t;
    void *p;
    t = arg0;
    p = (char *)t + 1248;
    Sphere__Construct(t);
    *(void **)((char *)t + 412) = lbl_8034A268;
    Sphere__Construct((char *)t + 416);
    Sphere__Construct((char *)t + 832);
    DebugTextPage__Construct(p);
    *(void **)((char *)t + 5692) = p;
    return t;
}
