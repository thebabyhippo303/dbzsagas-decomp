/* Floater__IsPathComplete @ 0x802B0454 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__IsPathComplete @ 0x802B0454 (0x48). ProDG -O2. */
extern void Script__PushInt(void *script, void *context, int value);

void Floater__IsPathComplete(void *script, void *context) {
	char *inner;
	char *path;
	int done;

	inner = *(char **)((char *)script + 0xC8);
	done = 0;
	path = inner + 0x414;
	if (*(int *)(path + 0x8C) != 0 || *(int *)(path + 0x88) != 0) {
		done = 1;
	}
	Script__PushInt(script, context, done);
}
