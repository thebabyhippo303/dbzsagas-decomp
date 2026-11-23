/* Avatar__IsFlyingImpl @ 0x80098FC4 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x57c];
    int flying;
} FlyCtrl;

typedef struct {
    char pad[0x71c];
    int state;
    char pad2[0x7fc - 0x720];
    FlyCtrl *ctrl;
} AvFly;

int Avatar__IsFlyingImpl(AvFly *self) {
    int state = self->state;
    int r = 0;
    if (state == 5)
        r = self->ctrl->flying;
    else if (state == 3)
        r = 1;
    return r;
}
