/* PlayerIndicator__Create @ 0x8011F174 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PlayerIndicator__Create @ 0x8011F174 (0xB8). ProDG -O2. */
typedef struct {
    char pad[0x60];
    short adjust;
    char pad2[2];
    void (*fn)(void *self, int flag);
} PlayerIndicatorVtable;

typedef struct {
    char pad[0x34];
    PlayerIndicatorVtable *vt;
} PlayerIndicator;

extern float lbl_803272E8 __attribute__((section(".rodata")));
extern char lbl_80327090[];
extern char lbl_8031D820[];
extern float lbl_803DE500 __attribute__((section(".sdata2")));

/* Float stays in f1; the following int is r8. Declaration order matches that schedule. */
extern void *Environment__SpawnEntity(char *name, int id, int zero, void *desc, float *pos, float scale, int mode);
extern void Actor__ToNonProtagonistCastImpl(void *actor);
extern void Simple__SetRotVelImpl(void *actor, float *vel);

void *PlayerIndicator__Create(int id) {
    float pos[3];
    float *slot;
    float scale;
    PlayerIndicator *actor;
    PlayerIndicatorVtable *vt;

    scale = lbl_803272E8;
    slot = pos;
    pos[0] = scale;
    slot[1] = scale;
    slot[2] = scale;
    actor = Environment__SpawnEntity(lbl_80327090, id, 0, lbl_8031D820, slot, scale, -1);
    if (actor != 0) {
        vt = actor->vt;
        vt->fn((void *)((char *)actor + vt->adjust), 1);
        Actor__ToNonProtagonistCastImpl(actor);
        pos[0] = scale;
        slot[1] = lbl_803DE500;
        slot[2] = scale;
        Simple__SetRotVelImpl(actor, slot);
    }
    return actor;
}
