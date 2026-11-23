/* Curve__GetDerivativeByArcLength @ 0x800E0EA0 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef float f32;
typedef struct VEnt { s16 off; s16 pad; void *fn; } VEnt;
typedef struct VTab { char pad0[0x18]; VEnt e18; char pad1[0x58 - 0x20]; VEnt e58; } VTab;
typedef struct Obj { VTab *vt; } Obj;
typedef struct {
    s32 unused;
    Obj *curve;
    f32 parameter;
} CurveSampleResult;

f32 Curve__MapParameterToSegment(CurveSampleResult *);
extern f32 lbl_80322CF4 __attribute__((section(".data")));

void *Curve__GetDerivativeByArcLength(void *arg0) {
    CurveSampleResult result;
    Obj *curve;
    VTab *vt;
    VEnt *e;
    char *adj;

    Curve__MapParameterToSegment(&result);
    curve = result.curve;
    e = &curve->vt->e18;
    adj = (char *)curve + e->off;
    ((void (*)(char *, s32, f32, f32))curve->vt->e58.fn)((char *)curve + curve->vt->e58.off, 32, result.parameter, lbl_80322CF4);
    ((void (*)(void *, char *))e->fn)(arg0, adj);
    return arg0;
}
