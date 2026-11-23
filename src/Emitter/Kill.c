/* Emitter__Kill @ 0x8022433C (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Emitter__Kill @ 0x8022433C (0x94). ProDG -O2. */
typedef struct {
    unsigned int handle;
    unsigned int flags;
    char pad[0xC4 - 8];
    void *buffer;
    char pad2[0x110 - 0xC8];
} KillEmitter;

typedef struct {
    char pad[0x430];
    KillEmitter *emitters;
    char activeList[0xC];
    char freeList[1];
} EmitterPool;

extern EmitterPool lbl_803AD05C;
extern void memFree(void *block);
extern void fn_80184530(void *list, void *entry);
extern void fn_801845EC(void *list, void *entry);

int Emitter__Kill(unsigned int handle) {
    EmitterPool *pool = &lbl_803AD05C;
    KillEmitter *emitter = &pool->emitters[handle >> 16];
    if (emitter->handle != handle)
        return 0;
    emitter->handle = 0;
    if (emitter->flags & 0x200) {
        memFree(emitter->buffer);
        emitter->buffer = 0;
    }
    fn_80184530(pool->freeList, emitter);
    fn_801845EC(pool->activeList, emitter);
    return 1;
}
