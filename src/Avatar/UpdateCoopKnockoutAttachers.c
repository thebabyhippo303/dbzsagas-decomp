/* Avatar__UpdateCoopKnockoutAttachers @ 0x800B8FF8 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *Game__GetPlayerImpl(void *game, int index);
extern void Attacher__Destroy(void *attacher);
extern void *lbl_803DC3C0;
extern float lbl_803A35C4 __attribute__((section(".data")));

typedef struct {
    void *player;
    char pad[0x88 - 4];
    int active;
    void *attacherA;
    void *attacherB;
    char pad2[0x98 - 0x94];
    float value;
} AvatarKnock;

void Avatar__UpdateCoopKnockoutAttachers(AvatarKnock *self) {
    void *zero;

    if (self->active == 0) {
        return;
    }
    if (Game__GetPlayerImpl(lbl_803DC3C0, 0) == self->player) {
        Game__GetPlayerImpl(lbl_803DC3C0, 1);
    } else {
        Game__GetPlayerImpl(lbl_803DC3C0, 0);
    }
    if (lbl_803A35C4 <= self->value) {
        return;
    }
    if (self->attacherA == 0) {
        return;
    }
    Attacher__Destroy(self->attacherA);
    zero = 0;
    self->attacherA = zero;
    Attacher__Destroy(self->attacherB);
    self->attacherB = zero;
}
