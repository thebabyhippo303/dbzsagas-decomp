/* ComboData__FreeValues @ 0x8015119C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ComboData__FreeValues @ 0x8015119C (0x40). ProDG -O2. */
typedef struct {
	char pad[0x2C];
	void *values;
} ComboData;

extern void fn_80184430(void *ptr);

void ComboData__FreeValues(ComboData *self) {
	if (self->values) {
		fn_80184430(self->values);
	}
	self->values = 0;
}
