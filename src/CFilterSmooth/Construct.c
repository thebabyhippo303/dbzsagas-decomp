/* CFilterSmooth__Construct @ 0x800D01D0 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;

typedef struct CFilterSmooth {
    void *vtbl;
    f32 a;
    f32 b;
} CFilterSmooth;

extern char lbl_80335698[] __attribute__((section(".data")));

CFilterSmooth *CFilterSmooth__Construct(CFilterSmooth *self, f32 a, f32 b) {
    CFilterSmooth *p = self;
    p->vtbl = lbl_80335698;
    p->a = a;
    p->b = b * b;
    return self;
}
