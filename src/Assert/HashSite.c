/* Assert__HashSite @ 0x8017E600 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Assert__HashSite @ 0x8017E600 (0x18). ProDG -O2. */
unsigned int Assert__HashSite(unsigned int first, unsigned int second, unsigned int third) {
	return ((first << 4) ^ (second << 2) ^ third) & 0x00FFFFFF;
}
