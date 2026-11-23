/* AvatarMovement__TestContactPoints @ 0x800B5CA4 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;
typedef struct { int w0; int w4; } Sub;
extern f32 lbl_80321008 __attribute__((section(".data")));
extern void ObbToObb__ComputeContactPoints(void *a, void *b, void *c);
extern void AvatarMovement__ResolveContactPoints(void *a, void *b);
s32 AvatarMovement__TestContactPoints(void *arg0, void *arg1) {
    f32 v1[4];
    f32 v2[3];
    f32 tmp[3];
    s32 sv;
    s32 rv;
    Sub *sub;
    if (*(s32 *)((char *)arg1 + 32) != 3) goto fail;
    ObbToObb__ComputeContactPoints(arg1, v1, v2);
    sub = (Sub *)((char *)arg0 + 8);
    if (*(s32 *)((char *)arg1 + 40) == sub->w4) {
        tmp[0] = -v2[0];
        tmp[1] = -v2[1];
        tmp[2] = -v2[2];
        ((s32 *)v2)[0] = ((s32 *)tmp)[0];
        ((s32 *)v2)[1] = ((s32 *)tmp)[1];
        ((s32 *)v2)[2] = ((s32 *)tmp)[2];
    }
    if (!(v2[1] <= lbl_80321008)) {
        AvatarMovement__ResolveContactPoints(sub, v1);
        sv = 1;
        rv = 1;
    } else {
        goto fail;
    }
    *(s32 *)((char *)arg0 + 4) = sv;
    return rv;
fail:
    sv = 0;
    rv = 0;
    *(s32 *)((char *)arg0 + 4) = sv;
    return rv;
}
