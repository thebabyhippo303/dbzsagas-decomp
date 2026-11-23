/* Water__ConstructSurfaceList @ 0x80276574 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    s32 w0;
    s32 w1;
    s32 w2;
    s32 w3;
} W4;

typedef struct {
    s32 pad;
    W4 s1;
    W4 s2;
    W4 s3;
    void *p;
} WSL;

extern void *lbl_803DE654 __attribute__((section(".sdata2")));

WSL *Water__ConstructSurfaceList(WSL *arg0) {
    W4 *s1 = &arg0->s1;
    W4 *s2 = &arg0->s2;
    W4 *s3 = &arg0->s3;

    s1->w1 = 0;
    arg0->s1.w0 = 0;
    arg0->s1.w3 = 0;
    s1->w2 = 0;
    s2->w1 = 0;
    arg0->s2.w0 = 0;
    arg0->s2.w3 = 0;
    s2->w2 = 0;
    s3->w1 = 0;
    arg0->s3.w0 = 0;
    arg0->s3.w3 = 0;
    s3->w2 = 0;
    arg0->p = lbl_803DE654;
    return arg0;
}
