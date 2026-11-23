/* Camera__UpdateFollowCamHeading @ 0x800C7788 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern int Camera__TryComputeHeadingBetweenXZPoints(void *origin, f32 *out, f32 x, f32 z);
extern f32 lbl_803219A4 __attribute__((section(".data")));
extern f32 lbl_803219A8 __attribute__((section(".data")));
extern f32 lbl_803219AC __attribute__((section(".data")));
extern f32 lbl_803DE500;
extern f32 lbl_803DE504;
extern f32 lbl_803DE520;
extern f32 lbl_803DE524;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} RawVec;

void Camera__UpdateFollowCamHeading(void *cam) {
    register void *target;
    register RawVec *dst;
    RawVec p;
    f32 heading;
    f32 angle;
    f32 x;
    f32 z;
    f32 *slot;

    target = *(void **)((char *)cam + 64);
    dst = &p;
    *dst = *(RawVec *)((char *)target + 56);
    z = *(f32 *)&dst->z;
    x = *(f32 *)&dst->x;
    Camera__TryComputeHeadingBetweenXZPoints((char *)cam + 96, &heading, x, z);
    angle = heading * lbl_803DE520;
    if ((angle > lbl_803219A4) || !(angle >= lbl_803219A8)) {
        angle = lbl_803219AC;
    }
    slot = (f32 *)((char *)cam + 84);
    if (!(angle >= -lbl_803DE500)) {
        do {
            angle += lbl_803DE504;
        } while (angle < -lbl_803DE500);
    }
    {
        f32 pi = lbl_803DE500;
        f32 scale = lbl_803DE524;
        if (!(angle <= pi)) {
            do {
                angle -= lbl_803DE504;
            } while (angle > pi);
        }
        slot[1] = angle * scale;
    }
}
