/* Frustum__SetNearFarPlanes @ 0x80201614 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
/* WIP 88.9% (32/36, len exact): Frustum__SetNearFarPlanes @ 0x80201614. Only gap is 112-block interleave (addi/lfs/li order at 0x5C-68). Key finds: !(>=) gives cror+bso (probe ProDG locally!); f64 const temps; ascending p-stores; tails order-sensitive. Needs schedule mutation. */
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

extern f32 lbl_80345BB0 __attribute__((section(".data")));
extern f32 lbl_80345BB4 __attribute__((section(".data")));
extern f32 lbl_80345BB8 __attribute__((section(".data")));

void Frustum__SetNearFarPlanes(void *obj, s32 flag, f32 near, f32 far) {
    s32 r0;
    f32 *p;
    f64 nf;
    f64 a;
    f64 b;

    if (flag != 0) {
        if (!(far >= -*(f32 *)((char *)obj + 28))) {
            nf = -far;
            a = lbl_80345BB0;
            b = lbl_80345BB4;
            p = (f32 *)((char *)obj + 96);
            p[0] = a;
            p[1] = a;
            p[2] = b;
            *(f32 *)((char *)obj + 108) = nf;
            r0 = 1;
        } else {
            r0 = 0;
        }
        *(u32 *)((char *)obj + 448) = r0;
        p = (f32 *)((char *)obj + 112);
        a = lbl_80345BB0;
        nf = lbl_80345BB8;
        p[0] = a;
        p[1] = a;
        p[2] = nf;
        *(f32 *)((char *)obj + 124) = near;
        *(u32 *)((char *)obj + 452) = 1;
        return;
    }
    *(u32 *)((char *)obj + 448) = 0;
    *(u32 *)((char *)obj + 452) = 0;
}
