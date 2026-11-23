/* ComboData__GetCurrentIndex @ 0x801511E4 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ComboData__GetCurrentIndex @ 0x801511E4 (0x38). ProDG -O2. */
typedef struct VTable {
	char pad[0x28];
	short adjust;
	int (*get_index)(void *self);
} VTable;

typedef struct Inner {
	char pad[0x10];
	VTable *vtable;
} Inner;

typedef struct ComboData {
	Inner *inner;
} ComboData;

int ComboData__GetCurrentIndex(ComboData *self) {
	Inner *inner;
	VTable *vtable;

	inner = self->inner;
	vtable = inner->vtable;
	return vtable->get_index((char *)inner + vtable->adjust);
}
