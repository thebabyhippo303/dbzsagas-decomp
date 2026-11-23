/* Database__UnloadFileContainingObject @ 0x80252410 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__UnloadContainingObject @ 0x80252410 (0x2C). ProDG -O2. */
extern void *Database__FindLoadedContainingObject(void *object);
extern void Remove(void *database, int flags);

void Database__UnloadContainingObject(void *unused, void *object) {
    Remove(Database__FindLoadedContainingObject(object), 0);
}
