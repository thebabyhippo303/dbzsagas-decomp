/* Game__SetBossDeathMode @ 0x80045154 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__SetBossDeathMode @ 0x80045154 (0x40). ProDG -O2. */
typedef struct {
    char pad[0x2148];
    int boss_death_mode;
} GameCfg;

extern GameCfg *lbl_803DC3C0;
extern int Script__PopInt(void *script, void *context);

void Game__SetBossDeathMode(void *script, void *context) {
    GameCfg *cfg = lbl_803DC3C0;
    int value = Script__PopInt(script, context);
    cfg->boss_death_mode = value != 0;
}
