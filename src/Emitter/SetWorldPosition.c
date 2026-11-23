/* Emitter__SetWorldPosition @ 0x80224454 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Emitter__SetWorldPosition @ 0x80224454 (0x58). ProDG -O2. */
typedef struct {
    float x;
    float y;
    float z;
} EmitterVec3;

typedef struct {
    unsigned int id;
    char pad[0x10 - 4];
    EmitterVec3 *posPtr;
    EmitterVec3 pos;
} EmitterPosEntry;

extern EmitterPosEntry *lbl_803AD48C __attribute__((section(".data")));

int Emitter__SetWorldPosition(unsigned int id, EmitterVec3 *pos) {
    EmitterPosEntry *entry;

    entry = (EmitterPosEntry *)((char *)lbl_803AD48C + (id >> 16) * 0x110);
    if (entry->id != id) {
        return 0;
    }
    entry->pos = *pos;
    entry->posPtr = &entry->pos;
    return 1;
}
