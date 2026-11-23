/* Actor__FadeAlphaImpl @ 0x802C7054 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct ActorInner {
    char pad[0x8C];
    float alpha;
} ActorInner;

typedef struct ActorFade {
    char pad0[0x84];
    ActorInner *inner;
    char pad1[0x240 - 0x88];
    int mode;
    char pad2[0x308 - 0x244];
    float target;
    float rate;
} ActorFade;

void Actor__FadeAlphaImpl(ActorFade *self, int mode, float target, float duration) {
    float cur;

    if (self->inner->alpha == target)
        return;
    self->target = target;
    cur = self->inner->alpha;
    self->mode = mode;
    self->rate = (target - cur) / duration;
}
