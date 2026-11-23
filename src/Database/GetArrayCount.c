/* Database__GetArrayCount @ 0x80205BB0 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__GetArrayCount @ 0x80205BB0 (0x18). ProDG -O2. */
unsigned int Database__GetArrayCount(const unsigned short *header) {
    if (header == 0)
        return 0;
    return *header;
}
