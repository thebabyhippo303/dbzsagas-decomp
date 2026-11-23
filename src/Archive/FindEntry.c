/* Archive__FindEntry @ 0x8017F968 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Archive__FindEntryByName @ 0x8017F968 (0x8C). ProDG -O2. */
typedef struct ArchiveEntry {
    const char *name;
    char pad[8];
} ArchiveEntry;

typedef struct Archive {
    char pad0[0x10];
    int entryCount;
    char pad1[8];
    ArchiveEntry *entries;
} Archive;

extern int strcmp(const char *left, const char *right);

ArchiveEntry *Archive__FindEntryByName(Archive *archive, const char *name) {
    int low = 0;
    int high = archive->entryCount - 1;

    while (low <= high) {
        int middle = (low + high) >> 1;
        int comparison = strcmp(name, archive->entries[middle].name);

        if (comparison == 0)
            return &archive->entries[middle];
        if (comparison < 0) {
            high = middle - 1;
            continue;
        }
        if (comparison > 0)
            low = middle + 1;
    }
    return 0;
}
