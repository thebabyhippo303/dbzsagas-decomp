/* HUD__Destroy @ 0x800FF204 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct ActorVtable ActorVtable;
typedef struct Actor Actor;

struct ActorVtable {
    char pad[8];
    short adjust;
    char pad2[2];
    void (*destroy)(void *self, int mode);
};

struct Actor {
    char pad[0x19C];
    ActorVtable *vt;
};

typedef struct {
    char pad[0x2BBC];
    Actor *first;
    Actor *second;
    char pad2[0x2CC4 - 0x2BC4];
    Actor *timer;
    char pad3[0x2F28 - 0x2CC8];
    int timerSlot;
} HUD;

void Minimap__Destroy(void);
void LetterBox__HideBars(void);
void PlayerIndicator__ResetState(void);
void ProgressArrow__ClearActorRegistry(void);
void HUD__DestroyBossStatBars(void);
void HUD__ClearAllWidgets(HUD *hud);
void CombatHUD__ClearAttemptBreakerWidgets(HUD *hud);
void PiccoloTimer__Destroy(Actor *timer, int mode);
void fn_801843CC(HUD *hud);

void HUD__Destroy(HUD *hud, int flags) {
    Actor *timer;
    Actor *second;
    Actor *first;
    ActorVtable *vt;

    Minimap__Destroy();
    LetterBox__HideBars();
    PlayerIndicator__ResetState();
    ProgressArrow__ClearActorRegistry();
    HUD__DestroyBossStatBars();
    HUD__ClearAllWidgets(hud);
    CombatHUD__ClearAttemptBreakerWidgets(hud);
    timer = hud->timer;
    if (timer != 0) {
        PiccoloTimer__Destroy(timer, 3);
    }
    second = hud->second;
    hud->timer = 0;
    hud->timerSlot = 0;
    if (second != 0) {
        vt = second->vt;
        vt->destroy((char *)second + vt->adjust, 3);
    }
    first = hud->first;
    if (first != 0) {
        vt = first->vt;
        vt->destroy((char *)first + vt->adjust, 3);
    }
    if (flags & 1) {
        fn_801843CC(hud);
    }
}
