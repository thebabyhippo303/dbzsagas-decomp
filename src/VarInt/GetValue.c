/* VarInt__GetValue @ 0x8018EF8C (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarInt__GetValue @ 0x8018EF8C (0x8). ProDG -O2. */
typedef struct {
	char pad[0x48];
	int value;
} VarInt;

int VarInt__GetValue(VarInt *self) {
	return self->value;
}
