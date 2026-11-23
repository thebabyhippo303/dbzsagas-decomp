/* Floater__GetPathDistanceFromT @ 0x802B036C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__GetPathDistanceFromT @ 0x802B036C (0x50). ProDG -O2. */
extern float fn_801FC8A0(void *curve);
extern void Script__PushFloat(void *script, void *context, float value);

void Floater__GetPathDistanceFromT(void *script, void *context) {
	char *inner;
	char *path;
	float length;
	float distance;

	inner = *(char **)((char *)script + 0xC8);
	path = inner + 0x414;
	length = fn_801FC8A0(*(void **)(path + 4));
	distance = *(float *)(path + 0x1C);
	Script__PushFloat(script, context, distance / length);
}
