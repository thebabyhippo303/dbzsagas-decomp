/* Plant__RefreshParameters @ 0x800F6610 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Plant__RefreshParameters @ 0x800F6610 (0x5C). ProDG -O2. */
typedef struct PlantParameterEntry {
    int field_00;
    struct PlantParameterEntry *next;
} PlantParameterEntry;

extern PlantParameterEntry *lbl_803DC600;
extern int lbl_803DC604;
extern int lbl_803A35A0 __attribute__((section(".data")));
extern void Plant__ApplyParameters(PlantParameterEntry *entry);

void Plant__RefreshParameters(void) {
    PlantParameterEntry *entry;
    int generation;

    generation = lbl_803A35A0;
    if (generation != lbl_803DC604) {
        entry = lbl_803DC600;
        lbl_803DC604 = generation;
        while (entry != 0) {
            Plant__ApplyParameters(entry);
            entry = entry->next;
        }
    }
}
