/* File__DestroyAll @ 0x80187FE8 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: File__DestroyAll @ 0x80187FE8 (0x7C). ProDG -O2. */
extern void *Database__BeginLoadedIteration(int type);
extern void *Database__NextLoaded(void);
extern void Database__UnloadType(void *loaded);
extern void File__Destroy(void *file, int mode);

void File__DestroyAll(int mode) {
    void *loaded = Database__BeginLoadedIteration(18);

    while (loaded != 0) {
        if (*(int *)((char *)loaded + 8) == 0 || mode == 1) {
            Database__UnloadType(loaded);
            if (loaded != 0)
                File__Destroy(loaded, 3);
        }
        loaded = Database__NextLoaded();
    }
}
