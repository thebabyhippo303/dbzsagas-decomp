/* Rect__ExpandToSquare @ 0x801D38C4 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;

typedef struct Rect {
    f32 x1, y1, x2, y2;
} Rect;

extern f32 lbl_80341E70 __attribute__((section(".data")));

void Rect__ExpandToSquare(Rect *r) {
    f32 x2 = r->x2;
    f32 x1 = r->x1;
    f32 y2 = r->y2;
    f32 y1 = r->y1;
    f32 w = x2 - x1;
    f32 h = y2 - y1;
    f32 d;
    f32  d_b;

    if (!(w <= h)) {
        d = (w - h) * lbl_80341E70;
        r->y1 = y1 - d;
        r->y2 = y2 + d;
        return;
    }
    if (w >= h) {
        return;
    }
    d_b = (h - w) * lbl_80341E70;
    r->x1 = x1 - d_b;
    r->x2 = x2 + d_b;
}
