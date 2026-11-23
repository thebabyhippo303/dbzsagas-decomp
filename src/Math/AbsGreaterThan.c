/* Math__AbsGreaterThan @ 0x80046338 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Math__AbsGreaterThan @ 0x80046338 (0x14). ProDG -O2. */
int Math__AbsGreaterThan(float value, float limit) {
	return __builtin_fabsf(value) < limit;
}
