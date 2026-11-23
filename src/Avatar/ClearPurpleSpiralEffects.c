/* Avatar__ClearPurpleSpiralEffects @ 0x8006A0C0 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__ClearPurpleSpiralEffects @ 0x8006A0C0 (0x70). ProDG -O2. */
typedef struct {
    char pad[0x14C];
    void *emitter;
    char pad2[4];
    void *firstAttacher;
    void *secondAttacher;
} AvatarEffects;

extern void Emitter__Kill(void *handle);
extern void Attacher__Destroy(void *handle);

void Avatar__ClearPurpleSpiralEffects(AvatarEffects *self) {
    if (self->emitter != 0) {
        Emitter__Kill(self->emitter);
        self->emitter = 0;
    }
    if (self->firstAttacher != 0) {
        Attacher__Destroy(self->firstAttacher);
        self->firstAttacher = 0;
    }
    if (self->secondAttacher != 0) {
        Attacher__Destroy(self->secondAttacher);
        self->secondAttacher = 0;
    }
}
