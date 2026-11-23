/* AvatarControls__SerializeMovementState @ 0x800A57A0 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;
typedef struct Vec3 { s32 x, y, z; } Vec3;
s32 AvatarControls__GetSerializedMovementStateSize(void);
typedef struct Controls { char pad[0x178]; f32 a; s32 b; Vec3 v; } Controls;
typedef struct Buf { char pad[4]; f32 a; s32 b; Vec3 v; } Buf;

s32 AvatarControls__SerializeMovementState(Controls *c, Buf *buf, s32 save) {
    if (save != 0) {
        buf->a = c->a;
        buf->b = c->b;
        buf->v = c->v;
    } else {
        c->a = buf->a;
        c->b = buf->b;
        c->v = buf->v;
    }
    return AvatarControls__GetSerializedMovementStateSize();
}
