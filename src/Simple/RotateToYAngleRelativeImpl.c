/* Simple__RotateToYAngleRelativeImpl @ 0x802C6B18 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__RotateToYAngleRelativeImpl @ 0x802C6B18 (0x28). ProDG -O2. */
extern void Simple__RotateToYAngleImpl(void *self, float angle);

void Simple__RotateToYAngleRelativeImpl(char *self, float delta) {
	Simple__RotateToYAngleImpl(self, *(float *)(self + 684) + delta);
}
