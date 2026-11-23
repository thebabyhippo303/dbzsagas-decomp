/* Floater__GetSpeed @ 0x802AFF3C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__GetSpeed @ 0x802AFF3C (0x40). ProDG -O2. */
extern void Script__PushFloat(void *self, int stack_index, float value);

void Floater__GetSpeed(void *self, int stack_index) {
	char *floater = *(char **)((char *)self + 0xC8);
	if (*(int *)(floater + 0x4CC) != 0) {
		Script__PushFloat(self, stack_index, *(float *)(floater + 0x444));
	} else {
		Script__PushFloat(self, stack_index, *(float *)(floater + 0x4F8));
	}
}
