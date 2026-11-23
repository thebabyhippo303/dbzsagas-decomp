/* VarReal__GetValue @ 0x8018F1B8 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VarReal__GetValue @ 0x8018F1B8 (0x8). ProDG -O2. */
typedef struct {
	char pad[0x40];
	unsigned int value;
} VarReal;

unsigned int VarReal__GetValue(VarReal *self) {
	return self->value;
}
