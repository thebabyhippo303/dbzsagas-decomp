/* CActorSoundEmitter__Construct @ 0x801DEAD0 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Actor { char pad[0x84]; char *inner; } Actor;
typedef struct Emitter { Actor *actor; int player; int zero; void *vt; } Emitter;
int Audio__CreateActorSfxPlayer(void *, void *);
void Sfx3DPlayer__AttachTransform(int, void *, void *);
void Sfx3DPlayer__SetVelocitySource(int, void *);
extern char lbl_80344E30[] __attribute__((section(".data")));
extern void *lbl_803DCC20;

Emitter *CActorSoundEmitter__Construct(Emitter *self, Actor *actor) {
    self->vt = lbl_80344E30;
    self->zero = 0;
    self->actor = actor;
    self->player = Audio__CreateActorSfxPlayer(lbl_803DCC20, actor->inner + 0xD0);
    Sfx3DPlayer__AttachTransform(self->player, (char *)self->actor + 0x44, (char *)self->actor + 0x38);
    Sfx3DPlayer__SetVelocitySource(self->player, (char *)self->actor + 0x68);
    return self;
}
