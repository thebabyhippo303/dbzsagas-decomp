/* SaveGame__HasLiveActorId @ 0x801502AC (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match SaveGame__HasLiveActorId @ 0x801502AC (0x84). ProDG -O2. */
extern char *lbl_803DCCB8 __attribute__((section(".sdata")));

typedef struct SaveGameLive {
    char pad[0x3C];
    void *cur;
} SaveGameLive;

int SaveGame__HasLiveActorId(SaveGameLive *self, int id) {
    char *root;
    char *node;
    char *actor;
    int dead;

    self->cur = 0;
    root = lbl_803DCCB8;
    node = *(char **)(root + 0x14);
    while (node != 0) {
        actor = *(char **)node;
        self->cur = actor;
        if (actor != 0 && *(int *)(actor + 0x10C) == id) {
            dead = 0;
            if (*(int *)(actor + 0x90) != 0 && *(int *)(actor + 0x94) <= 0) {
                dead = 1;
            }
            if (dead == 0) {
                return 1;
            }
        }
        root = lbl_803DCCB8;
        if (node != 0) {
            node = *(char **)(node + 0x14);
        } else {
            node = *(char **)(root + 0x14);
        }
    }
    return 0;
}
