/* PersistentData__ResetNewGameProgress @ 0x80126B60 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__ResetNewGameProgress @ 0x80126B60 (0x8C). ProDG -O2. */
extern char *lbl_803DC368;

extern void PersistentData__ResetCoinCounters(void *counters);
extern void PersistentData__ClearCapsuleCounts(void *counters);
extern void PersistentData__ResetCurrentLevel(void *level);
extern void PersistentData__StorePlayerStats(void *stats);
extern void PersistentData__InitializePickupFlags(void *flags);
extern void PersistentData__SetPlayerCount(void *self, int count);
extern void PersistentData__ResetRecordTables(void *records);
extern void PersistentData__SetPendulumUnlocked(void *state);
extern void Options__ClearDifficultyQuestionAsked(void *options);
extern void Options__SetDifficulty(void *options, int difficulty);

void PersistentData__ResetNewGameProgress(void *self) {
    PersistentData__ResetCoinCounters((char *)self + 0x30);
    PersistentData__ClearCapsuleCounts((char *)self + 0x3C);
    PersistentData__ResetCurrentLevel((char *)self + 0x45);
    PersistentData__StorePlayerStats((char *)self + 0x50);
    PersistentData__InitializePickupFlags((char *)self + 0x54);
    PersistentData__SetPlayerCount(self, 1);
    PersistentData__ResetRecordTables(lbl_803DC368 + 0x138);
    PersistentData__SetPendulumUnlocked((char *)self + 0x44);
    Options__ClearDifficultyQuestionAsked(lbl_803DC368 + 0x370);
    Options__SetDifficulty(lbl_803DC368 + 0x370, 1);
}
