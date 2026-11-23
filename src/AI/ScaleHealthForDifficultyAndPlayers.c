/* AI__ScaleHealthForDifficultyAndPlayers @ 0x8005B494 (size: 0x1C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

typedef struct Difficulty {
    char pad[4];
    s32 level;
} Difficulty;

typedef struct GameState {
    char pad[0x238];
    Difficulty *difficulty;
    char mid[0x20E0 - 0x23C];
    f32 healthScaleEasy;
    f32 padScale;
    f32 healthScaleHard;
} GameState;

typedef struct EnemyKind {
    char pad[0xC];
    s32 kind;
} EnemyKind;

typedef struct EnemyActor {
    char pad[0x19D8];
    EnemyKind *kind;
} EnemyActor;

typedef struct AICombat {
    char pad0[0xC8];
    s32 flag;
    char pad1[0x34C - 0xCC];
    s32 health;
    char pad2[0x37C - 0x350];
    s32 bonus;
    char pad3[0x390 - 0x380];
    EnemyActor *actor;
} AICombat;

extern GameState *lbl_803DC3C0;
extern s32 Game__GetConfiguredPlayerCount(GameState *game);

void AI__ScaleHealthForDifficultyAndPlayers(AICombat *self, s32 mode) {
    s32 players;
    s32 kind;

    players = Game__GetConfiguredPlayerCount(lbl_803DC3C0);
    kind = self->actor->kind->kind;
    if ((kind != 33) && (kind != 27)) {
        if (self->flag == 0) {
            if (lbl_803DC3C0->difficulty->level == 6) {
                self->bonus += 1;
            }
            if (lbl_803DC3C0->difficulty->level == 7) {
                self->bonus += 2;
            }
            if (lbl_803DC3C0->difficulty->level == 8) {
                self->bonus += 3;
            }
        } else if (self->flag == 2) {
            if (lbl_803DC3C0->difficulty->level == 13) {
                self->bonus += 1;
            }
            if (lbl_803DC3C0->difficulty->level == 14) {
                self->bonus += 2;
            }
            if (lbl_803DC3C0->difficulty->level == 15) {
                self->bonus += 3;
            }
        }
        switch (mode) {
        case 0:
            self->health = (s32)((f32)(self->health * players) * lbl_803DC3C0->healthScaleEasy);
            break;
        case 1:
            self->health *= players;
            break;
        case 2:
            self->health = (s32)((f32)(self->health * players) * lbl_803DC3C0->healthScaleHard);
            break;
        }
    }
}
