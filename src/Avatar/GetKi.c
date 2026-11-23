/* Avatar__GetKi @ 0x80031A40 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetKi @ 0x80031A40 (0x40). ProDG -O2. */
extern int Script__PopInt(void *self, int stack_index);
extern void Script__PushFloat(void *self, int stack_index, float value);

void Avatar__GetKi(void *self, int stack_index) {
	int ki_data = Script__PopInt(self, stack_index);
	float ki = *(float *)((char *)ki_data + 660);
	Script__PushFloat(self, stack_index, ki);
}
