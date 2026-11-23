/* HUD__ConstructBossStatBarWidgetGroup @ 0x801218E0 (size: 0x304, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__ConstructBossStatBarWidgetGroup @ 0x801218E0 (0x304). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *Mem__New(u32);
void *Sphere__Construct(void *);
void *SphereAsset__Construct(void *);
void SphereAsset__LoadFromDatabase(void *, s32, void *);
extern f32 lbl_803273D4 __attribute__((section(".data")));
extern f32 lbl_803273D8 __attribute__((section(".data")));
extern f32 lbl_803273DC __attribute__((section(".data")));
extern void *lbl_803DC3B4;
typedef struct { s32 id; void *path; } AssetEntry;
extern AssetEntry lbl_8036BCF4[] __attribute__((section(".data")));

#define WIDGET_VT(w) M2C_FIELD(w, void **, 0x19C)
#define WADJ(w, o) ((char *)(w) + M2C_FIELD(WIDGET_VT(w), s16 *, o))
#define C1F(w, lbv, n) ((void (*)(void *, void *, int, int, int, int))M2C_FIELD(WIDGET_VT(w), void **, 0x14))(WADJ(w, 0x10), M2C_FIELD(lbv, void **, 8), n, 0, 1, 1)
#define C74(w, a) ((void (*)(void *, int, int, int, int))M2C_FIELD(WIDGET_VT(w), void **, 0x74))(WADJ(w, 0x70), a, 0, 1, 1)
#define C2(w, a, b, c, d) ((void (*)(void *, int, int, int, int))M2C_FIELD(WIDGET_VT(w), void **, 0x114))(WADJ(w, 0x110), a, b, c, d)
#define C3(w, adj, fn, a, b) ((void (*)(void *, float, float))M2C_FIELD(WIDGET_VT(w), void **, fn))(WADJ(w, adj), a, b)
#define C5(w, n) ((void (*)(void *, int))M2C_FIELD(WIDGET_VT(w), void **, 0x1B4))(WADJ(w, 0x1B0), n)
#define C4F(w, a, b, c, d) ((void (*)(void *, float, float, float, float))M2C_FIELD(WIDGET_VT(w), void **, 0x10C))(WADJ(w, 0x108), a, b, c, d)

void *HUD__ConstructBossStatBarWidgetGroup(void *arg0, void *arg1) {
    void *w0;
    void *w1;
    void *w2;
    void *lb;
    s32 j;

    w0 = Sphere__Construct(Mem__New(416));
    lb = lbl_803DC3B4;
    M2C_FIELD(arg0, void **, 4) = w0;
    C1F(w0, lb, 0);
    C74(M2C_FIELD(arg0, void **, 4), 0);
    C2(M2C_FIELD(arg0, void **, 4), 255, 255, 255, 255);
    C3(M2C_FIELD(arg0, void **, 4), 0xC8, 0xCC, lbl_803273D4, lbl_803273D4);
    C3(M2C_FIELD(arg0, void **, 4), 0xE8, 0xEC, lbl_803273D8, lbl_803273D8);
    C5(M2C_FIELD(arg0, void **, 4), 2);
    w1 = Sphere__Construct(Mem__New(416));
    lb = lbl_803DC3B4;
    M2C_FIELD(arg0, void **, 8) = w1;
    C1F(w1, lb, 0);
    C74(M2C_FIELD(arg0, void **, 8), 1);
    C4F(M2C_FIELD(arg0, void **, 8), lbl_803273DC, lbl_803273D4, lbl_803273DC, lbl_803273D4);
    C3(M2C_FIELD(arg0, void **, 8), 0xC8, 0xCC, lbl_803273D4, lbl_803273D4);
    C3(M2C_FIELD(arg0, void **, 8), 0xE8, 0xEC, lbl_803273D8, lbl_803273D8);
    C5(M2C_FIELD(arg0, void **, 8), 1);
    w2 = SphereAsset__Construct(Mem__New(424));
    M2C_FIELD(arg0, void **, 0xC) = w2;
    j = M2C_FIELD(M2C_FIELD(arg1, void **, 0x19D8), s32 *, 0xC);
    SphereAsset__LoadFromDatabase(w2, lbl_8036BCF4[j].id, lbl_8036BCF4[j].path);
    C2(M2C_FIELD(arg0, void **, 0xC), 255, 255, 255, 255);
    C3(M2C_FIELD(arg0, void **, 0xC), 0xC8, 0xCC, lbl_803273D8, lbl_803273D8);
    C3(M2C_FIELD(arg0, void **, 0xC), 0xE8, 0xEC, lbl_803273D8, lbl_803273D8);
    C5(M2C_FIELD(arg0, void **, 0xC), 3);
    return arg0;
}
