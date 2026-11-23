/* Distort__FindById @ 0x8009A440 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Distort__FindById @ 0x8009A440 (0x40). ProDG -O2. */
typedef struct {
	int id;
} Distort;

typedef struct {
	Distort **items;
	int count;
} DistortList;

Distort *Distort__FindById(DistortList *list, int id) {
	int i;
	for (i = 0; i < list->count; ++i) {
		Distort *distort = list->items[i];
		if (distort->id == id)
			return distort;
	}
	return 0;
}
