/* WeightedRandom__SetCount @ 0x800733EC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: WeightedRandom__SetCount @ 0x800733EC (0x4C). ProDG -O2. */
typedef struct WeightedRandom {
    int count;
    void *weights;
} WeightedRandom;

extern void fn_80184430(void *block);
extern void *fn_80184348(int size);

void WeightedRandom__SetCount(WeightedRandom *self, int count) {
    void *old = self->weights;
    self->count = count;
    if (old != 0) {
        fn_80184430(old);
    }
    self->weights = fn_80184348(count << 2);
}
