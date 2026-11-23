/* Curve__SampleByArcLength @ 0x800E0E20 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

typedef struct CurveSampleResult {
    u32 unused;
    void *curve;
    f32 parameter;
} CurveSampleResult;

f32 Curve__MapParameterToSegment(CurveSampleResult *);
extern f32 lbl_80322CF0 __attribute__((section(".data")));

void *Curve__SampleByArcLength(void *arg0) {
    CurveSampleResult result;
    void *curve;
    void *vt;
    char *sub;
    void *adj;

    Curve__MapParameterToSegment(&result);
    curve = result.curve;
    vt = M2C_FIELD(curve, void **, 0);
    sub = (char *) vt + 16;
    adj = (char *) curve + M2C_FIELD(sub, s16 *, 0);
    M2C_FIELD(vt, void (**)(void *, s32, f32, f32), 0x5C)((char *) curve + M2C_FIELD(vt, s16 *, 0x58), 32, result.parameter, lbl_80322CF0);
    M2C_FIELD(sub, void (**)(void *, void *), 4)(arg0, adj);
    return arg0;
}
