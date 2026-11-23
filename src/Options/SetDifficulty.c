/* Options__SetDifficulty @ 0x80128CA4 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__SetDifficulty @ 0x80128CA4 (0x34). ProDG -O2. */
extern char *lbl_803D8008;
extern char lbl_8032789C[];
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

void Options__SetDifficulty(void *self, int difficulty) {
    PersistentData__SetGlobalImpl(lbl_803D8008 + 300, lbl_8032789C, difficulty);
}
