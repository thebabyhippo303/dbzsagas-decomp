/* VarString__GetValue @ 0x8018F0F4 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarString__GetValue @ 0x8018F0F4 (0x8). ProDG -O2. */
typedef struct {
	char pad[0x40];
	char *value;
} VarString;

char *VarString__GetValue(VarString *self) {
	return self->value;
}
