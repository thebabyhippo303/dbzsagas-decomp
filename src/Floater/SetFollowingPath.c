/* Floater__SetFollowingPath @ 0x802B0018 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;
s32 Script__PopInt(void *);
extern f32 lbl_80351E10 __attribute__((section(".data")));
typedef struct Owner { char pad0[0x74]; f32 vx, vy, vz; char pad1[0x418 - 0x80]; s32 path; char pad2[0x4CC - 0x41C]; s32 following; } Owner;
typedef struct Floater { char pad[200]; Owner *owner; } Floater;

void Floater__SetFollowingPath(Floater *self) {
    s32 enable = Script__PopInt(self) != 0;
    Owner *o = self->owner;
    s32 on = 0;
    if (enable && o->path != 0) {
        on = 1;
    }
    o->following = on;
    if (!enable) {
        f32 *p = &o->vx;
        o->vx = lbl_80351E10;
        p[1] = lbl_80351E10;
        p[2] = lbl_80351E10;
    }
}
