/* Database__GetTypedObject @ 0x80205AA4 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__GetTypedObject @ 0x80205AA4 (0x48). ProDG -O2. */
extern void *Database__FindObjectByType(void *c, void *a, void *b, int z0, int z1, int z2, void *d, int z3);

void *Database__GetTypedObject(void *a, void *b, void *c, void *d) {
    return Database__FindObjectByType(c, a, b, 0, 0, 0, d, 0);
}
