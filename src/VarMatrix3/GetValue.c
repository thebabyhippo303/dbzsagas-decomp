/* VarMatrix3__GetValue @ 0x8018F2A8 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarMatrix3__GetValue @ 0x8018F2A8 (0x8). ProDG -O2. */
typedef struct {
	char pad[0x40];
	unsigned int value;
} VarMatrix3;

unsigned int VarMatrix3__GetValue(VarMatrix3 *self) {
	return self->value;
}
