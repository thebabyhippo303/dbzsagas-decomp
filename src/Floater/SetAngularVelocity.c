/* Floater__SetAngularVelocity @ 0x802B05C4 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__SetAngularVelocity @ 0x802B05C4 (0x78). ProDG -O2. */
typedef struct {
	char pad[0xC8];
	char *inner;
} FloaterAng;

extern float Script__PopFloat(void *script, void *context);

void Floater__SetAngularVelocity(FloaterAng *self, void *context) {
	float v[3];
	float *p;
	float z;
	float y;
	char *dst;
	int bits0;
	int bits2;
	int bits1;

	z = Script__PopFloat(self, context);
	p = v;
	p[2] = z;
	y = Script__PopFloat(self, context);
	p[1] = y;
	v[0] = Script__PopFloat(self, context);
	bits0 = *(int *)&v[0];
	bits1 = *(int *)(p + 1);
	bits2 = *(int *)(p + 2);
	dst = self->inner + 0x74;
	*(int *)dst = bits0;
	*(int *)(dst + 4) = bits1;
	*(int *)(dst + 8) = bits2;
}
