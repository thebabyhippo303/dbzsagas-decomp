/* Curve__GetSecondDerivativeByArcLength @ 0x800E0F20 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16;
typedef int s32;
typedef float f32;

typedef struct VEntry { s16 adjust; s16 pad; void (*fn)(void *, void *); } VEntry;
typedef struct CurveVT {
    char pad0[0x20];
    VEntry ap;
    char pad28[0x58 - 0x28 + 4 - 4];
    s16 sampleAdjust; s16 pad5A; void (*sample)(void *, s32, f32, f32);
} CurveVT;
typedef struct CurveObj { CurveVT *vt; } CurveObj;
typedef struct CurveSampleResult {
    s32 unused;
    CurveObj *curve;
    f32 parameter;
} CurveSampleResult;

f32 Curve__MapParameterToSegment(CurveSampleResult *);
extern f32 lbl_80322CF8 __attribute__((section(".data")));

void *Curve__GetSecondDerivativeByArcLength(void *arg0) {
    CurveSampleResult result;
    CurveObj *curve;
    CurveVT *vt;
    VEntry *e;

    Curve__MapParameterToSegment(&result);
    curve = result.curve;
    vt = curve->vt;
    e = &vt->ap;
    {
        char *a2 = (char *)curve + e->adjust;
        vt->sample((char *)curve + vt->sampleAdjust, 32, result.parameter, lbl_80322CF8);
        e->fn(arg0, a2);
    }
    return arg0;
}
