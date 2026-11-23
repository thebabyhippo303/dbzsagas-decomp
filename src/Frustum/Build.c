/* Frustum__Build @ 0x802012DC (size: 0x338, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern f32 lbl_80345B9C __attribute__((section(".rodata")));
extern f32 lbl_80345BA0 __attribute__((section(".rodata")));
extern f32 lbl_80345BA4 __attribute__((section(".rodata")));
extern f32 lbl_80345BA8 __attribute__((section(".rodata")));
extern f32 lbl_80345BAC __attribute__((section(".rodata")));
extern f32 lbl_803DE508 __attribute__((section(".sdata2")));
extern f32 lbl_803DE520 __attribute__((section(".sdata2")));

f32 sinf(f32);
f32 cosf(f32);
f32 tanf(f32);
f32 atanf(f32);
void Frustum__SetNearFarPlanes(void *, s32, f32, f32);

typedef struct { f32 nx, ny, nz, d; } Plane;
typedef struct { f32 x, y, z; } Vec3;
typedef struct {
    Plane planes[8];
    char pad128[128];
    Vec3 c0[4];
    Vec3 c1[4];
    Vec3 c2[4];
    char pad400[48];
    s32 w448;
} FrustumObj;

#define EMIT(base, xx, yy, zz)                 \
    do {                                       \
        Vec3 *va = &(base)[0];                 \
        Vec3 *vb = &(base)[1];                 \
        Vec3 *vc = &(base)[2];                 \
        Vec3 *vd = &(base)[3];                 \
        va->x = (xx);                          \
        va->y = (yy);                          \
        va->z = (zz);                          \
        vb->x = -va->x;                        \
        vb->y = (yy);                          \
        vb->z = (zz);                          \
        vc->x = -va->x;                        \
        vc->y = -va->y;                        \
        vc->z = va->z;                         \
        vd->x = va->x;                         \
        vd->y = -va->y;                        \
        vd->z = va->z;                         \
    } while (0)

void Frustum__Build(FrustumObj *obj, s32 flag, f32 a, f32 b, f32 near, f32 far, f32 fov, f32 aspect) {
    f32 zero;
    f32 one;
    f32 neg1;
    f32 halfpi;
    f32 halfFov;
    f32 ang1;
    f32 horiz;
    f32 s1;
    f32 c1;
    f32 s2;
    f32 c2;
    f32 tanV;
    f32 tanH;
    f32 z;
    f32 x;
    f32 y;
    s32 slot;
    Plane *p0;
    Plane *p1;
    Plane *p2;
    Plane *p3;
    Plane *p4;
    Plane *p5;
    f32 *dist;

    zero = lbl_80345BA0;
    one = lbl_80345BA4;
    halfFov = fov * lbl_80345B9C;
    halfFov = halfFov * lbl_803DE520;
    neg1 = lbl_80345BA8;
    halfpi = lbl_803DE508;
    ang1 = halfpi - halfFov;

    p0 = &obj->planes[0];
    p1 = &obj->planes[1];
    p0->nz = one;
    p0->nx = zero;
    p0->ny = zero;
    p0->d = a;
    p1->nx = zero;
    p1->nz = neg1;
    p1->ny = zero;
    p1->d = -b;

    s1 = sinf(ang1);
    c1 = cosf(ang1);
    p2 = &obj->planes[2];
    p3 = &obj->planes[3];
    p2->nx = zero;
    p2->nz = c1;
    p2->ny = s1;
    p2->d = zero;
    p3->nx = zero;
    p3->ny = -p2->ny;
    p3->nz = p2->nz;
    p3->d = zero;

    horiz = atanf(tanf(halfFov) * aspect);
    halfpi = halfpi - horiz;
    s2 = sinf(halfpi);
    c2 = cosf(halfpi);
    p4 = &obj->planes[4];
    p5 = &obj->planes[5];
    p4->nx = s2;
    p4->ny = zero;
    p4->nz = c2;
    p4->d = zero;
    p5->nx = -p4->nx;
    p5->ny = zero;
    p5->nz = p4->nz;
    p5->d = zero;

    Frustum__SetNearFarPlanes(obj, flag, near, far);

    tanV = tanf(halfFov);
    tanH = tanf(horiz);
    a = -a;
    x = tanH * a;
    y = tanV * a;
    dist = &obj->planes[0].d;
    slot = 1;
    EMIT(obj->c0, x, y, a);
    if (obj->w448 != 0) {
        slot = 6;
    }
    {
        f32 z1;
        f32 big;
        z1 = dist[slot << 2];
        x = tanH * z1;
        y = tanV * z1;
        EMIT(obj->c1, x, y, z1);
        big = lbl_80345BAC;
        x = tanH * big;
        y = tanV * big;
        EMIT(obj->c2, x, y, big);
    }
}
