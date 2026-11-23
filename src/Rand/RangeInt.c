/* Rand__RangeInt @ 0x8025470C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Rand__RangeInt @ 0x8025470C (0x50). ProDG -O2. */
extern int Rand__IntInclusive(void *rng, int maximum);

int Rand__RangeInt(void *rng, int minimum, int maximum) {
	if (minimum <= maximum)
		return minimum + Rand__IntInclusive(rng, maximum - minimum);
	return maximum + Rand__IntInclusive(rng, minimum - maximum);
}
