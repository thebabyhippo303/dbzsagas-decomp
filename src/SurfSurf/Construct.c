/* SurfSurf__Construct @ 0x801A8764 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct SurfSurf {
    s32 a;
    s32 b;
    void *vt;
    void *tableVt;
    char pad[28];
    s32 last;
} SurfSurf;

extern char lbl_803485F8 __attribute__((section(".data")));
extern char lbl_80340DC0 __attribute__((section(".data")));
extern char lbl_80340E40 __attribute__((section(".data")));
void SurfSurfTable__Construct(void *);

SurfSurf *SurfSurf__Construct(SurfSurf *self) {
    self->a = 0;
    self->b = 0;
    self->vt = &lbl_803485F8;
    SurfSurfTable__Construct(&self->tableVt);
    self->tableVt = &lbl_80340DC0;
    self->vt = &lbl_80340E40;
    self->last = 0;
    return self;
}
