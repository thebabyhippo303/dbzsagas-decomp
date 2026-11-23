/* VarInt32__SetFromString @ 0x8018CEB8 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarInt32__SetFromString @ 0x8018CEB8 (0x4C). ProDG -O2. */
typedef struct {
	unsigned int flags;
	char pad[0x44];
	int *value;
} VarInt32;

extern int fn_8018CAE4(void *self);

int VarInt32__SetFromString(VarInt32 *self) {
	if ((self->flags & 1) != 0)
		return 0;
	*self->value = fn_8018CAE4(self);
	return 1;
}
