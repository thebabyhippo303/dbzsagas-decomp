/* Database__GetFirstReferencedObject @ 0x80206B18 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__GetFirstReferencedObject @ 0x80206B18 (0x24). ProDG -O2. */
extern void *Database__GetReferencedObject(void *db, int index);

void *Database__GetFirstReferencedObject(void *db) {
    return Database__GetReferencedObject(db, 0);
}
