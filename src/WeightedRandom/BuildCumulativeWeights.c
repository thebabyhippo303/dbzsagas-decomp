/* WeightedRandom__BuildCumulativeWeights @ 0x80073438 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct WeightedRandom { s32 count; s32 *cum; s32 total; } WeightedRandom;
void WeightedRandom__SetCount(WeightedRandom *, s32);

void WeightedRandom__BuildCumulativeWeights(WeightedRandom *self, s32 count, s32 *weights) {
    s32 sum;
    s32 i;
    if (self->cum == 0 || count != self->count) {
        WeightedRandom__SetCount(self, count);
    }
    sum = 0;
    for (i = 0; i < count; i++) {
        sum += weights[i];
        self->cum[i] = sum;
    }
    self->total = sum;
}
