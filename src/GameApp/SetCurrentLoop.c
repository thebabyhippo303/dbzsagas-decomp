/* GameApp__SetCurrentLoop @ 0x801D5C54 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;

typedef struct LoopVT {
    char pad[0x10];
    s16 adjust;
    s16 pad2;
    s32 (*fn)(void *);
} LoopVT;

typedef struct Loop {
    LoopVT *vt;
} Loop;

typedef struct GameApp {
    Loop *current;
} GameApp;

void GameApp__EndCurrentLoop(GameApp *self);

s32 GameApp__SetCurrentLoop(GameApp *self, Loop *loop) {
    GameApp__EndCurrentLoop(self);
    self->current = loop;
    if (loop != 0) {
        return loop->vt->fn((char *)loop + loop->vt->adjust);
    } else {
        return 1;
    }
}
