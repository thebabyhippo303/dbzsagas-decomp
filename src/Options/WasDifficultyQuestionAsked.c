/* Options__WasDifficultyQuestionAsked @ 0x80128D70 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *lbl_803DC368;
extern char lbl_803278B0[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int Options__WasDifficultyQuestionAsked(void) {
    return PersistentData__GetGlobalImpl((char *)lbl_803DC368 + 300, lbl_803278B0) > 0;
}
