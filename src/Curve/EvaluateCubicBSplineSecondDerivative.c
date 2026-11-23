/* Curve__EvaluateCubicBSplineSecondDerivative @ 0x800E0B5C (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;
extern f32 floorf(f32);
extern void Curve__InterpolateSegment(void *self, void *ctx, s32 idx, f32 a, f32 b, f32 c, f32 d);
extern f32 lbl_80322CB0 __attribute__((section(".data")));
extern f32 lbl_80322CB4 __attribute__((section(".data")));
extern f32 lbl_80322CB8 __attribute__((section(".data")));
extern f32 lbl_80322CBC __attribute__((section(".data")));

static const char pool_pad[0x2CA8] = {1};

void *Curve__EvaluateCubicBSplineSecondDerivative(void *self, void *ctx, f32 x) {
    s32 idx = floorf(x);
    f32 t = x - (f32)idx;
    Curve__InterpolateSegment(self, ctx, idx, lbl_80322CB0 - t, t * lbl_80322CB4 - lbl_80322CB8, t * lbl_80322CBC + lbl_80322CB0, t);
    return self;
}
