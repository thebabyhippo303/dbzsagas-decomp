/* HUD__ConstructBossStatBarWidgets @ 0x801220C8 (size: 0x2F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void *Mem__New(u32);
void *fn_8026B590(void *);
extern f32 lbl_803273FC __attribute__((section(".data")));
extern f32 lbl_80327400 __attribute__((section(".data")));
extern void *lbl_803DC640;
typedef struct { void *w0; void *w1; void *w2; s32 unkC; f32 x; } BossBars;
#define WIDGET_VT(w) M2C_FIELD(w, void **, 0x19C)
#define WADJ(w, o) ((char *)(w) + M2C_FIELD(WIDGET_VT(w), s16 *, o))
#define C1(w, n) ((void (*)(void *, void *, int, int, int, int))M2C_FIELD(WIDGET_VT(w), void **, 0x14))(WADJ(w, 0x10), lbl_803DC640, n, 0, 1, 1)
#define C2(w, a, b, c, d) ((void (*)(void *, int, int, int, int))M2C_FIELD(WIDGET_VT(w), void **, 0x114))(WADJ(w, 0x110), a, b, c, d)
#define C3(w, adj, fn, a, b) ((void (*)(void *, float, float))M2C_FIELD(WIDGET_VT(w), void **, fn))(WADJ(w, adj), a, b)
#define C5(w, n) ((void (*)(void *, int))M2C_FIELD(WIDGET_VT(w), void **, 0x1B4))(WADJ(w, 0x1B0), n)
#define C6(w) ((void (*)(void *))M2C_FIELD(WIDGET_VT(w), void **, 0x1DC))(WADJ(w, 0x1D8))
void HUD__ConstructBossStatBarWidgets(BossBars *st) {
    f32 x;
    st->w0 = fn_8026B590(Mem__New(416));
    C1(st->w0, 26);
    C2(st->w0, 255, 255, 255, 0);
    x = st->x;
    C3(st->w0, 0xC8, 0xCC, x, x);
    C3(st->w0, 0xE8, 0xEC, lbl_803273FC, lbl_803273FC);
    C5(st->w0, 3);
    C6(st->w0);
    st->w1 = fn_8026B590(Mem__New(416));
    C1(st->w1, 25);
    C2(st->w1, 255, 255, 255, 255);
    C3(st->w1, 0xC8, 0xCC, lbl_80327400, lbl_80327400);
    C3(st->w1, 0xE8, 0xEC, lbl_803273FC, lbl_803273FC);
    C5(st->w1, 4);
    C6(st->w1);
    st->w2 = fn_8026B590(Mem__New(416));
    C1(st->w2, 24);
    C2(st->w2, 255, 255, 255, 255);
    C3(st->w2, 0xC8, 0xCC, lbl_80327400, lbl_80327400);
    C3(st->w2, 0xE8, 0xEC, lbl_803273FC, lbl_803273FC);
    C5(st->w2, 5);
    C6(st->w2);
}
