/* VarInt16__GetValue @ 0x8018F04C (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarInt16__GetValue @ 0x8018F04C (0x8). ProDG -O2. */
typedef struct {
	char pad[0x48];
	int value;
} VarInt16;

int VarInt16__GetValue(VarInt16 *self) {
	return self->value;
}
