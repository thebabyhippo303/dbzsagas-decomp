/* MissionStats__ResolveSummaryEntryPlayers @ 0x80122B08 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match MissionStats__ResolveSummaryEntryPlayers @ 0x80122B08 (0x8C). ProDG -O2. */
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));
extern void *Game__GetPlayerImpl(void *game, int index);
extern int fn_80099628(void *player, int id);
extern int Game__GetConfiguredPlayerCount(void *game);

typedef struct SummaryEntry {
    int id0;
    int id1;
    int a;
    int b;
    int c;
    int d;
    char label[4];
} SummaryEntry;

void MissionStats__ResolveSummaryEntryPlayers(SummaryEntry *self) {
    int i;
    int *slot;
    void *player;
    int id1;

    for (i = 0, slot = &self->c; i < Game__GetConfiguredPlayerCount(lbl_803DC3C0); i++, slot++) {
        player = Game__GetPlayerImpl(lbl_803DC3C0, i);
        slot[-2] = fn_80099628(player, self->id0);
        id1 = self->id1;
        if (id1 != -1) {
            *slot = fn_80099628(player, id1);
        } else {
            *slot = id1;
        }
    }
}
