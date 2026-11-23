/* ShadowMgr__AllocEntry @ 0x8022E4B0 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    int unk0;
    int unk4;
    char pad[24 - 8];
    int unk24;
    char pad2[144 - 28];
    union {
        struct {
            unsigned short index;
            unsigned short generation;
        } parts;
        unsigned int handle;
    } id;
    int unk148;
} ShadowEntry;

typedef struct {
    ShadowEntry *entries;
    char pad[28 - 4];
    unsigned short nextGeneration;
} ShadowPool;

extern char lbl_803ADB24[];
extern ShadowPool lbl_803ADB20;
extern ShadowEntry *SList__PopFront(void *list);

ShadowEntry *ShadowMgr__AllocEntry(void) {
    ShadowEntry *entry = SList__PopFront(lbl_803ADB24);
    if (entry == 0) {
        return 0;
    }
    entry->id.parts.index = entry - lbl_803ADB20.entries;
    entry->id.parts.generation = lbl_803ADB20.nextGeneration++;
    if (entry->id.handle == 0)
        entry->id.parts.generation = lbl_803ADB20.nextGeneration++;
    entry->unk4 = 0;
    entry->unk24 = 0;
    entry->unk148 = 0;
    return entry;
}
