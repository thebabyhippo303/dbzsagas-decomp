/* VarString__SetFromString @ 0x8018D1C8 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarString__SetFromString @ 0x8018D1C8 (0x5C). ProDG -O2. */
typedef struct {
	int flags;
	char pad[0x40 - 4];
	char *buf;
	int len;
} VarString;

extern char *strncpy(char *dst, const char *src, unsigned n);

int VarString__SetFromString(VarString *self, const char *src) {
	int locked;
	locked = self->flags & 1;
	if (locked != 0)
		return 0;
	strncpy(self->buf, src, (unsigned)self->len);
	self->buf[self->len - 1] = (char)locked;
	return 1;
}
