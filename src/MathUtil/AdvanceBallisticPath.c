/* MathUtil__AdvanceBallisticPath @ 0x8017DC28 (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern f32 lbl_8033D06C __attribute__((section(".data")));
extern f32 lbl_8033D070 __attribute__((section(".data")));

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    f32 fC;
    f32 f10;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    f32 f2C;
    f32 f30;
    f32 f34;
    f32 f38;
} Ballistic;

void MathUtil__AdvanceBallisticPath(Ballistic *path, Vec3f *pos, Vec3f *vel, f32 drag, f32 dt) {
    f32 t;
    f32 vzRef;
    f32 *p;
    f32 *saved;
    f32 *q;
    s32 *wp;
    s32 xw;
    s32 yw;
    s32 zw;

    if (path->unk4 != 0) {
        return;
    }
    if (path->unk8 != 0) {
        drag = lbl_8033D06C;
    }
    if (drag != lbl_8033D06C) {
        vel->x -= vel->x * drag * dt;
        vel->z -= vel->z * drag * dt;
    }
    t = path->f28 + dt;
    if (vel->x != path->f18) {
        pos->x += vel->x * dt;
    } else {
        pos->x = (path->f18 * t) + path->fC;
    }
    p = &path->f18;
    vzRef = p[2];
    saved = p;
    if (vel->z != vzRef) {
        q = &path->fC;
        pos->z += vel->z * dt;
    } else {
        p = &path->fC;
        pos->z = (vzRef * t) + p[2];
        q = p;
    }
    vel->y = (path->f24 * t) + saved[1];
    {
        f32 q1 = q[1];
        f32 s1 = saved[1];

        pos->y = (path->f24 * t * t * lbl_8033D070) + (s1 * t + q1);
    }
    if (path->unk8 == 0) {
        return;
    }
    if (t < path->f2C) {
        return;
    }
    wp = (s32 *)&path->f30;
    xw = *(s32 *)&path->f30;
    yw = wp[1];
    zw = wp[2];
    ((s32 *)pos)[0] = xw;
    ((s32 *)pos)[1] = yw;
    ((s32 *)pos)[2] = zw;
}
