/* SurfSurf__AllocateCells @ 0x801A888C (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;

typedef struct {
    int a;
    f32 b;
    f32 c;
} Cell;

typedef struct {
    char pad0[0x2C];
    Cell *cells;
} SurfSurf;

extern void Mem__DeleteArray(void *);
extern void *Mem__NewArray(int);
extern f32 lbl_80340D4C __attribute__((section(".data")));
extern f32 lbl_80340D50 __attribute__((section(".data")));

void SurfSurf__AllocateCells(SurfSurf *self, int count) {
    int i;

    if (self->cells != 0) {
        Mem__DeleteArray(self->cells);
    }
    self->cells = Mem__NewArray(count * 12);
    for (i = 0; i < count; i++) {
        self->cells[i].a = 0;
        self->cells[i].b = lbl_80340D4C;
        self->cells[i].c = lbl_80340D50;
    }
}
