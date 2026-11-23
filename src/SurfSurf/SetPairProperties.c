/* SurfSurf__SetPairProperties @ 0x801A8E3C (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;
typedef struct Props { s32 a; f32 b; f32 c; } Props;
typedef struct SurfSurf {
    s32 map;
    char pad[0x2C - 4];
    Props *props;
} SurfSurf;

s32 SurfacePairMap__GetCompactPairIndex(s32, s32, s32);

void SurfSurf__SetPairProperties(SurfSurf *self, s32 a, s32 b, Props *in) {
    s32 idx = SurfacePairMap__GetCompactPairIndex(self->map, a, b);
    if (idx >= 0) {
        self->props[idx].a = in->a;
        self->props[idx].b = in->b;
        self->props[idx].c = in->c;
    }
}
