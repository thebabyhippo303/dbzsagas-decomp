/* strncpy @ 0x80163B9C (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: strncpy @ 0x80163B9C (0xCC). ProDG -O2. */
char *strncpy(char *dst, const char *src, unsigned int n) {
	char *d;
	unsigned int word;
	unsigned int mask;
	char c;

	d = dst;
	if ((((unsigned int)src | (unsigned int)dst) & 3) == 0 && n > 3) {
		word = *(unsigned int *)src;
		mask = 0x80808080;
		if (((word + 0xFEFEFEFF) & ~word & mask) == 0) {
			do {
				word = *(unsigned int *)src;
				n -= 4;
				src += 4;
				*(unsigned int *)d = word;
				d += 4;
				if (n <= 3) {
					break;
				}
				word = *(unsigned int *)src;
			} while (((word + 0xFEFEFEFF) & ~word & mask) == 0);
		}
	}
	while (n != 0) {
		c = *src;
		n -= 1;
		src += 1;
		*d = c;
		d += 1;
		if (c == 0) {
			if (n == 0) {
				return dst;
			}
			do {
				n -= 1;
				*d = 0;
				d += 1;
			} while (n != 0);
			return dst;
		}
	}
	return dst;
}
