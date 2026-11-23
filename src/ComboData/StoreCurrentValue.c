/* ComboData__StoreCurrentValue @ 0x8015121C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ComboData__StoreCurrentValue @ 0x8015121C (0x60). ProDG -O2. */
typedef struct {
	char pad[0x28];
	short delta;
	short pad2;
	int (*fn)(void *arg);
} ComboDesc;

typedef struct {
	void *base;
	char pad[0x2C - 4];
	int *values;
} ComboData;

void ComboData__StoreCurrentValue(ComboData *self, int unused_a, int unused_b, int *src) {
	ComboDesc *desc;
	int index;
	void *base;
	(void)unused_a;
	(void)unused_b;
	base = self->base;
	desc = *(ComboDesc **)((char *)base + 0x10);
	index = desc->fn((char *)base + desc->delta);
	if (index < 0)
		return;
	self->values[index] = *src;
}
