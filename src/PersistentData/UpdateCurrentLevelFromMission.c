/* PersistentData__UpdateCurrentLevelFromMission @ 0x801277EC (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct MissionInner {
    char pad[4];
    int level;
} MissionInner;

typedef struct GameCfg {
    char pad[0x238];
    MissionInner *inner;
} GameCfg;

extern GameCfg *lbl_803DC3C0;
extern char *lbl_803DC368;
extern char lbl_803276E4[];
extern int PersistentData__GetGlobalImpl(void *rec, char *key);
extern void PersistentData__SetGlobalImpl(void *rec, char *key, int value);

void PersistentData__UpdateCurrentLevelFromMission(void) {
    int level;
    int current;

    level = lbl_803DC3C0->inner->level;
    current = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_803276E4);
    if (level > current)
        PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_803276E4, level);
}
