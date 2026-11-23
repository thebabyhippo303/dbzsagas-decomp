/* AI__AmIProne @ 0x800450C4 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__AmIProne @ 0x800450C4 (0x68). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void AI__AmIProne(void *script, void *context) {
	char *avatar;
	char *pose;
	int prone;
	avatar = Script__PopInt(script, context);
	prone = 0;
	if (avatar != 0 && *(int *)(avatar + 2020) == 0) {
		pose = *(char **)(avatar + 2956);
		if (*(int *)(pose + 316) != 0)
			prone = 1;
	}
	Script__PushInt(script, context, prone);
}
