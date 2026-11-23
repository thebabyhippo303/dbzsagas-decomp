/* Game__StartAudioFade @ 0x8001E090 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

typedef struct {
    char pad0[588];
    s32 active;
    f32 rateB;
    f32 rateA;
    f32 targetB;
    f32 targetA;
    f32 curB;
    f32 curA;
} Fade;

f32 fn_801905A8(void *);
f32 fn_80190538(void *);
extern f32 lbl_8030FD64 __attribute__((section(".data")));
extern f32 lbl_8030FD68 __attribute__((section(".data")));
extern void *lbl_803DCC20 __attribute__((section(".sdata")));

void Game__StartAudioFade(Fade *self, s32 fadeOut, f32 duration) {
    if (self->active == 0) {
        if (fadeOut != 0) {
            self->curA = lbl_8030FD64;
            self->curB = lbl_8030FD64;
            self->targetA = fn_801905A8(lbl_803DCC20);
            self->targetB = fn_80190538(lbl_803DCC20);
        } else {
            self->curA = self->targetA;
            self->curB = self->targetB;
        }
        if (!(duration > lbl_8030FD68)) {
            self->rateA = self->targetB;
            self->rateB = self->targetA;
        } else {
            self->rateA = self->targetB / duration;
            self->rateB = self->targetA / duration;
        }
        if (fadeOut != 0) {
            self->rateA = -self->rateA;
            self->rateB = -self->rateB;
        }
        self->active = 1;
    }
}
