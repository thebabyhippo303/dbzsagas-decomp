/* EzString__ShrinkToFit @ 0x8026FE64 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef void *(*ShrinkFn1)(void *);
typedef void *(*ShrinkFn2)(void *, void *);
void *EzString__ShrinkToFit(void *arg0) {
    char *p = *(char **)((char *)arg0 + 8);
    void *a1 = (char *)arg0 + *(s16 *)(p + 88);
    ShrinkFn1 fn1 = *(ShrinkFn1 *)(p + 92);
    char *q = p + 24;
    void *a2 = (char *)arg0 + *(s16 *)q;
    void *r = fn1(a1);
    return (*(ShrinkFn2 *)(q + 4))(a2, r);
}
