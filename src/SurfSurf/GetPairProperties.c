/* SurfSurf__GetPairProperties @ 0x801A8DE0 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

typedef struct Props {
    s32 a;
    f32 b;
    f32 c;
} Props;

typedef struct SurfSurf {
    void *map;
    char pad[0x28];
    Props *props;
} SurfSurf;

s32 SurfacePairMap__GetCompactPairIndex(void *, s32, s32);

void SurfSurf__GetPairProperties(SurfSurf *self, s32 a, s32 b) {
    Props p; s32 idx = SurfacePairMap__GetCompactPairIndex(self->map, a, b);
    if (idx >= 0) { p.a = self->props[idx].a; p.b = self->props[idx].b; p.c = self->props[idx].c; }
}
