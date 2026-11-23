/* File__GetSize @ 0x80187A60 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: File__GetSize @ 0x80187A60 (0x8). ProDG -O2. */
unsigned int File__GetSize(const void *file) {
	return *(const unsigned int *)((const char *)file + 0x0C);
}
