/* Frustum__ClassifySphere @ 0x80201A20 (size: 0x654, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef signed char s8;
typedef float f32;

extern f32 lbl_80345BBC __attribute__((section(".rodata")));

typedef struct {
    char pad[908];
    s32 count;
} HitCounter;
extern HitCounter *lbl_803AD7EC __attribute__((section(".bss")));

typedef struct { f32 nx, ny, nz, d; } Plane;
typedef struct { f32 x, y, z, r; } Sphere;
typedef struct { f32 x, y, z; } Vec3;
typedef struct {
    char pad0[128];
    Plane p1;
    Plane p2;
    Plane p3;
    Plane p4;
    Plane p5;
    Plane p6;
    Plane pExtra;
    char pad240[220];
    s8 flag;
    char pad461[3];
    s32 extra;
} Frustum;

#define DOT(base, distv)                                                             \
    do {                                                                             \
        Plane *pl = &(base);                                                        \
        f32 nx = (base).nx;                                                         \
        f32 nz = pl->nz;                                                            \
        f32 ny = pl->ny;                                                            \
        f32 cy = sph->y;                                                            \
        f32 cz = sph->z;                                                            \
        f32 cx = sph->x;                                                            \
        f32 py = cy * ny;                                                           \
        f32 pz = cz * nz;                                                           \
        f32 px = cx * nx;                                                           \
        tp->y = py;                                                                 \
        tp->z = pz;                                                                 \
        tp->x = px;                                                                 \
        distv = px + ((volatile Vec3 *)tp)->y + ((volatile Vec3 *)tp)->z + (base).d; \
    } while (0)

s32 Frustum__ClassifySphere(Frustum *fr, Sphere *sph, s8 *out) {
    f32 radius;
    f32 negR;
    f32 dist;
    s32 inside;
    Vec3 tmp;
    Vec3 *tp;

    radius = sph->r;
    negR = -radius;
    tp = &tmp;
    if (fr->extra != 0) {
        DOT(fr->pExtra, dist);
        if (dist > radius) {
            goto outside;
        }
    }
    inside = 1;
    if (out == 0) {
        goto simple;
    }
    if (fr->flag != 0) {
        goto d_p1;
    }
    DOT(fr->p2, dist);
    if (dist > radius) {
        goto outside;
    }
    if (dist <= negR) {
        goto d_p1;
    }
    if (dist <= lbl_80345BBC) {
        *out = 2;
        goto s_p1;
    }
    inside = 0;
    *out = 2;
    goto s_p1;

d_p1:
    DOT(fr->p1, dist);
    if (dist > radius) {
        goto outside;
    }
    if (dist <= negR) {
        goto d_p3;
    }
    if (dist <= lbl_80345BBC) {
        goto w1;
    }
    inside = 0;
w1:
    *out = 1;
    goto s_p3;

d_p3:
    DOT(fr->p3, dist);
    if (dist > radius) {
        goto outside;
    }
    if (dist <= negR) {
        goto d_p4;
    }
    if (dist <= lbl_80345BBC) {
        goto w3;
    }
    inside = 0;
w3:
    *out = 3;
    goto s_p4;

d_p4:
    DOT(fr->p4, dist);
    if (dist > radius) {
        goto outside;
    }
    if (dist <= negR) {
        goto d_p5;
    }
    if (dist <= lbl_80345BBC) {
        goto w4;
    }
    inside = 0;
w4:
    *out = 4;
    goto s_p5;

d_p5:
    DOT(fr->p5, dist);
    if (dist > radius) {
        goto outside;
    }
    if (dist <= negR) {
        goto d_p6;
    }
    if (dist <= lbl_80345BBC) {
        goto w5;
    }
    inside = 0;
w5:
    *out = 5;
    goto s_p6;

d_p6:
    DOT(fr->p6, dist);
    if (dist > radius) {
        goto outside;
    }
    if (dist <= negR) {
        goto all_in;
    }
    if (dist <= lbl_80345BBC) {
        goto w6;
    }
    inside = 0;
w6:
    *out = 6;
    goto done;

simple:
    if (fr->flag != 0) {
        goto s_p1;
    }
    DOT(fr->p2, dist);
    if (dist > radius) {
        goto outside;
    }
    if (dist <= lbl_80345BBC) {
        goto s_p1;
    }
    inside = 0;
s_p1:
    DOT(fr->p1, dist);
    if (dist > radius) {
        goto outside;
    }
    if (dist <= lbl_80345BBC) {
        goto s_p3;
    }
    inside = 0;
s_p3:
    DOT(fr->p3, dist);
    if (dist > radius) {
        goto outside;
    }
    if (dist <= lbl_80345BBC) {
        goto s_p4;
    }
    inside = 0;
s_p4:
    DOT(fr->p4, dist);
    if (dist > radius) {
        goto outside;
    }
    if (dist <= lbl_80345BBC) {
        goto s_p5;
    }
    inside = 0;
s_p5:
    DOT(fr->p5, dist);
    if (dist > radius) {
        goto outside;
    }
    if (dist <= lbl_80345BBC) {
        goto s_p6;
    }
    inside = 0;
s_p6:
    DOT(fr->p6, dist);
    if (dist <= radius) {
        goto last_eps;
    }
outside:
    if (lbl_803AD7EC != 0) {
        lbl_803AD7EC->count += 1;
    }
    return 0;
last_eps:
    if (dist <= lbl_80345BBC) {
        goto done;
    }
    inside = 0;
done:
    if (inside == 0) {
        return 2;
    }
    return 1;
all_in:
    *out = 0;
    return 1;
}
