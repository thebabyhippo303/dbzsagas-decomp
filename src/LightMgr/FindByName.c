/* LightMgr__FindByName @ 0x80209524 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Light__FindByName @ 0x80209524 (0x9C). ProDG -O2.
   Scans the pointer table at +0x14. Skips null entries and a null name.
   The name-null test is hoisted into cr4 so it survives strcmp. */
typedef struct {
    unsigned count;
    char pad[16];
    void **entries;
} LightList;

extern int strcmp(const char *left, const char *right);

void *Light__FindByName(LightList *list, const char *name) {
    unsigned i;

    for (i = 0; i < list->count; i++) {
        void *light = list->entries[i];
        if (light != 0 && name != 0 && strcmp((char *)light + 116, name) == 0)
            return light;
    }
    return 0;
}
