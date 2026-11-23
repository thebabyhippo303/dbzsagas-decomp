/* SaveMenu__LoadSpriteDatabase @ 0x8004F734 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveMenu__LoadSpriteDatabase @ 0x8004F734 (0x5C). ProDG -O2. */
typedef struct SaveMenuOps {
    char pad[0x398];
    signed short offset;
    char pad39A[2];
    void (*fn)(void *self);
} SaveMenuOps;

extern void *dblLoad(const char *name, void *a, int b);

void SaveMenu__LoadSpriteDatabase(char *self, const char *name) {
    SaveMenuOps *ops = *(SaveMenuOps **)(self + 412);

    ops->fn(self + ops->offset);
    *(void **)(self + 0x4913C) = dblLoad(name, 0, 0);
}
