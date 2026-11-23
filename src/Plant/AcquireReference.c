/* Plant__AcquireReference @ 0x800F64A4 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Plant__AcquireReference @ 0x800F64A4 */

typedef struct PlantEntry {
    int field0;
    struct PlantEntry *next;
    char pad[4];
    char name[16];
} PlantEntry;

extern volatile PlantEntry *lbl_803DC600;
extern int Plant__ContainsReference(PlantEntry *plant, void *reference);
extern void Plant__NormalizeName(char *name, char *out);
extern int strcmp(const char *left, const char *right);
extern void *fn_801842C4(unsigned int size);
extern PlantEntry *Plant__ConstructEntry(void *mem);
extern void Plant__InitializeEntry(PlantEntry *entry, char *name, int extra);
extern void Plant__AddReference(PlantEntry *entry, void *reference);

PlantEntry *Plant__AcquireReference(void *reference, char *name, int extra) {
    PlantEntry *entry;
    char normalized[16];

    for (entry = (PlantEntry *)lbl_803DC600; entry != 0; entry = entry->next) {
        if (Plant__ContainsReference(entry, reference) != 0) {
            return entry;
        }
    }

    Plant__NormalizeName(name, normalized);

    for (entry = (PlantEntry *)lbl_803DC600; entry != 0; entry = entry->next) {
        if (strcmp(entry->name, normalized) == 0) {
            Plant__AddReference(entry, reference);
            return entry;
        }
    }

    entry = Plant__ConstructEntry(fn_801842C4(236));
    entry->field0 = 0;
    entry->next = (PlantEntry *)lbl_803DC600;
    lbl_803DC600 = entry;
    Plant__InitializeEntry(entry, normalized, extra);
    Plant__AddReference(entry, reference);
    return entry;
}
