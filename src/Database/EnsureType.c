/* Database__EnsureType @ 0x80203B34 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__EnsureType @ 0x80203B34 (0x30). ProDG -O2. */
extern int Database__GetOrCreateType(int type);

int Database__EnsureType(int type) {
    return Database__GetOrCreateType(type) != 0;
}
