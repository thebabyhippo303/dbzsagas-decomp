/* Camera__RefreshPositionAndFocusFromPlayer @ 0x800CD024 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef float f32;

typedef struct Vec3 { f32 x, y, z; } Vec3;

typedef struct VT {
    char pad[0x78];
    s16 adjust;
    s16 pad2;
    void *(*fn)(void *);
} VT;

typedef struct Player {
    char pad[0x24];
    Vec3 *posp;
} Player;

typedef struct Sub {
    VT *vt;
} Sub;

typedef struct Holder {
    char pad[0x198];
    Sub sub;
} Holder;

typedef struct Camera {
    Vec3 pos;
    Vec3 focus;
    char pad[0x28];
    Holder *owner;
} Camera;

void Camera__RefreshPositionAndFocusFromPlayer(Camera *self) {
    Holder *h = self->owner;
    Sub *s = &h->sub;
    Player *p;
    Vec3 a;
    Vec3 b;

    p = (Player *)s->vt->fn((char *)s + s->vt->adjust);
    a = self->pos;
    b = *p->posp;
    self->pos = a;
    self->focus = b;
}
