/* PersistentData__AdvanceCurrentLevel @ 0x8012784C (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__AdvanceCurrentLevel @ 0x8012784C (0x64). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_803276E4[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);
extern void PersistentData__SetGlobalImpl(void *data, char *name, int value);

void PersistentData__AdvanceCurrentLevel(void *self, int level) {
    int current;

    if (level > 21)
        level = 21;
    current = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_803276E4);
    if (level > current)
        PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_803276E4, level);
}
