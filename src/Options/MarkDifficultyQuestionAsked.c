/* Options__MarkDifficultyQuestionAsked @ 0x80128CD8 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__MarkDifficultyQuestionAsked @ 0x80128CD8 (0x34). ProDG -O2. */
extern char *lbl_803D8008;
extern char lbl_803278B0[];
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

void Options__MarkDifficultyQuestionAsked(void) {
	PersistentData__SetGlobalImpl(lbl_803D8008 + 300, lbl_803278B0, 1);
}
