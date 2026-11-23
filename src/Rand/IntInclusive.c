/* Rand__IntInclusive @ 0x802546A4 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float Rand__FloatUnit(void *rng);

/* ProDG pools the signed int-to-double bias at the end of .rodata.
   The linked copy is lbl_80347F28; its low half is the lfd displacement. */
static const char bias_pool_pad[0x7F28] = {1};

int Rand__IntInclusive(void *rng, int hi) {
    return (int)(Rand__FloatUnit(rng) * (float)(hi + 1));
}
