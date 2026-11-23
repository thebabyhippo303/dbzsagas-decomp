/* Protagonist__ComputeSweptBoundsXZ @ 0x801FB6A8 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef float *(*RetFn)(void *);
typedef struct { char pad[336]; s16 adj; char _p[2]; RetFn fn; } VTab;
typedef struct { char pad[28]; f32 c; char _p2[4]; float *arr; } Sub;
extern f32 lbl_80344EC8 __attribute__((section(".rodata")));

void Protagonist__ComputeSweptBoundsXZ(void *arg0, f32 t) {
    VTab *vt;
    Sub *s;
    float *arr;
    float *p;
    f32 x0, x8, c;
    f32 hi0, lo0, hi8, lo8;
    float *bnd;

    vt = *(VTab **)((char *)arg0 + 52);
    s = (Sub *)((char *)arg0 + 316);
    arr = s->arr;
    c = s->c;
    x0 = arr[0];
    x8 = arr[2];
    lo0 = x0 - c;
    hi0 = x0 + c;
    lo8 = x8 - c;
    hi8 = x8 + c;
    p = vt->fn((char *)arg0 + vt->adj);
    if (p[0] >= lbl_80344EC8) {
        goto do_hi0;
    }
    lo0 = p[0] * t + lo0;
    goto join0;
do_hi0:
    hi0 = p[0] * t + hi0;
join0: ;
    if (p[2] >= lbl_80344EC8) {
        goto do_hi8;
    }
    lo8 = p[2] * t + lo8;
    goto join8;
do_hi8:
    hi8 = p[2] * t + hi8;
join8: ;
    bnd = (float *)((char *)arg0 + 376);
    bnd[0] = lo0;
    bnd[1] = lo8;
    bnd[2] = hi0;
    bnd[3] = hi8;
}
