/* EffectHandle__AllocateEntry @ 0x8022F728 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: EffectHandle__AllocateEntry @ 0x8022F728 (0x88). ProDG -O2. */
typedef struct {
    char pad[0x18];
    union {
        struct {
            unsigned short index;
            unsigned short generation;
        } parts;
        unsigned int handle;
    } id;
    char pad2[0x94 - 0x1C];
} EffectEntry;

typedef struct {
    char pad[4];
    EffectEntry *entries;
    char pad2[0x28];
    unsigned short nextGeneration;
} EffectPool;

extern char lbl_803ADD90[];
extern EffectPool lbl_803ADD88;
extern EffectEntry *IntrusiveList__PopFront(void *list);

EffectEntry *EffectHandle__AllocateEntry(void) {
    EffectEntry *entry = IntrusiveList__PopFront(lbl_803ADD90);
    if (entry == 0)
        return 0;
    entry->id.parts.index = entry - lbl_803ADD88.entries;
    entry->id.parts.generation = lbl_803ADD88.nextGeneration++;
    if (entry->id.handle == 0)
        entry->id.parts.generation = lbl_803ADD88.nextGeneration++;
    return entry;
}
