/* AI__WaitForJuniors @ 0x80045A60 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__WaitForJuniors @ 0x80045A60 (0x54). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);

void AI__WaitForJuniors(void *script, void *context) {
	char *ai = Script__PopInt(script, context);
	int value = (int)Script__PopInt(script, context);
	if (*(int *)(ai + 0x7E4) == 0) {
		char *juniors = *(char **)(ai + 0xB8C);
		*(int *)(juniors + 0x554) = value;
	}
}
