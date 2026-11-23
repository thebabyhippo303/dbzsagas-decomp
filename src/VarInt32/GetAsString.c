/* VarInt32__GetAsString @ 0x8018CF04 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarInt32__GetAsString @ 0x8018CF04 (0x54). ProDG -O2. */
typedef struct {
	int flags;
	char pad[0x48 - 4];
	int *value;
} VarInt32;

extern void VarInt__Format(VarInt32 *self, int value, char *buf, int extra);

char *VarInt32__GetAsString(VarInt32 *self, char *buf, int extra) {
	if ((self->flags & 2) != 0) {
		return 0;
	}
	VarInt__Format(self, *self->value, buf, extra);
	return buf;
}
