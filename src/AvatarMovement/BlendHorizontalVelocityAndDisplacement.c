/* AvatarMovement__BlendHorizontalVelocityAndDisplacement @ 0x800A87EC (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef struct V3 { f32 x, y, z; } V3;
typedef struct Inner { char pad[0x7A0]; V3 disp; } Inner;
typedef struct Mover { Inner *inner; char pad[0x614 - 4]; f32 vx; char pad2[0x61C - 0x618]; f32 vz; } Mover;
typedef struct I3 { s32 x, y, z; } I3;

extern f32 lbl_80320C0C __attribute__((section(".data")));
extern f32 lbl_80320C10 __attribute__((section(".data")));

void AvatarMovement__BlendHorizontalVelocityAndDisplacement(Mover *m, V3 *out, V3 *out2, f32 a, f32 b) {
    f32 sum = a + b;
    f32 ref = lbl_80320C0C;
    f32 s;
    f32 x;
    f32 z;
    u32 se = (*(u32 *)&sum >> 23) & 0xFF;
    s32 tiny;
    if (se != 0) {
        tiny = ((*(u32 *)&ref >> 23) & 0xFF) >= se + 127;
    } else {
        tiny = 1;
    }
    if (tiny) {
        *(I3 *)out2 = *(I3 *)&m->inner->disp;
        out->z = lbl_80320C10;
        out->x = lbl_80320C10;
        out->y = lbl_80320C10;
    } else {
        s = lbl_80320C0C / sum;
        x = s * (a * m->vx + b * m->inner->disp.x);
        out2->x = x;
        x = a * x;
        z = s * (a * m->vz + b * m->inner->disp.z);
        out2->z = z;
        out->x = x;
        out->z = a * out2->z;
    }
}
