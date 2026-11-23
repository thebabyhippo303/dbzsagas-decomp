/* Database__GetArrayFlags @ 0x80205BC8 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__GetArrayFlags @ 0x80205BC8 (0x18). ProDG -O2. */
unsigned int Database__GetArrayFlags(const unsigned short *header) {
    if (header == 0)
        return 0;
    return header[1];
}
