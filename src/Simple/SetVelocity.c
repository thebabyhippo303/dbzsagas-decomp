/* Simple__SetVelocity @ 0x802AE6C0 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__SetVelocity @ 0x802AE6C0 (0x5C). ProDG -O2. */
typedef struct {
	char pad[0xC8];
	char *velocity;
} Simple;

extern float Script__PopFloat(void *script, void *context);

void Simple__SetVelocity(Simple *self, void *context) {
	char *base = self->velocity;
	char *velocity;
	float value;
	value = Script__PopFloat(self, context);
	velocity = base + 0x68;
	*(float *)(velocity + 8) = value;
	value = Script__PopFloat(self, context);
	*(float *)(velocity + 4) = value;
	value = Script__PopFloat(self, context);
	*(float *)(base + 0x68) = value;
}
