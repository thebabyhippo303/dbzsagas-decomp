/* VarMatrix4__GetValue @ 0x8018F260 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarMatrix4__GetValue @ 0x8018F260 (0x8). ProDG -O2. */
typedef struct {
	char pad[0x40];
	int value;
} VarMatrix4;

int VarMatrix4__GetValue(VarMatrix4 *self) {
	return self->value;
}
