/* MemBlock__GetAlignment @ 0x80185DD8 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemBlock__GetAlignment @ 0x80185DD8 (0x14). ProDG -O2. */
unsigned int MemBlock__GetAlignment(const unsigned int *block) {
	return 1U << (block[0] >> 27);
}
