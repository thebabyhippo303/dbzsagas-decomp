/* AI__WaitForCellClones @ 0x80045C04 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__WaitForCellClones @ 0x80045C04 (0x54). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);

void AI__WaitForCellClones(void *script, void *context) {
	char *ai = Script__PopInt(script, context);
	int value = (int)Script__PopInt(script, context);
	if (*(int *)(ai + 0x7E4) == 0) {
		char *juniors = *(char **)(ai + 0xB8C);
		*(int *)(juniors + 0x568) = value;
	}
}
