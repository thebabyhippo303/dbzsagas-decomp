/* Database__PathSuffixMatches @ 0x80204A58 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__PathSuffixMatches @ 0x80204A58 (0xC8). ProDG -O2. */
extern char *strncpy(char *dst, const char *src, unsigned n);
extern int strlen(const char *s);
extern int String__CompareNIgnoreCase(const char *a, const char *b, int n);

int Database__PathSuffixMatches(const char *path, const char *suffix) {
	char buf[256];
	char *p;
	int len;
	unsigned other;
	int n;

	strncpy(buf, path, 256);
	p = buf;
	if (buf[0] != 0) {
		n = 256;
		do {
			if (*p == '/') {
				*p = '\\';
			}
			p += 1;
			if (*p == 0) {
				break;
			}
			n -= 1;
		} while (n != 0);
	}
	len = strlen(buf);
	if (suffix[255] == 0) {
		other = (unsigned)strlen(suffix);
	} else {
		other = 256;
	}
	if ((unsigned)len > other) {
		return 0;
	}
	return String__CompareNIgnoreCase(buf, suffix + (other - (unsigned)len), len) == 0;
}
