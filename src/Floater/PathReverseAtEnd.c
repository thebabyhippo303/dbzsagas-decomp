/* Floater__PathReverseAtEnd @ 0x802B00D8 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__PathReverseAtEnd @ 0x802B00D8 (0x40). ProDG -O2. */
extern int Script__PopInt(void *self, int stack_index);

void Floater__PathReverseAtEnd(void *self, int stack_index) {
	int reverse = Script__PopInt(self, stack_index);
	char *floater = *(char **)((char *)self + 0xC8);
	*(int *)(floater + 0x4A8) = reverse == 1;
}
