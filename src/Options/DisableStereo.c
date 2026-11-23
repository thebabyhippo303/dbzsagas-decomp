/* Options__DisableStereo @ 0x80128C64 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__DisableStereo @ 0x80128C64 (0x40). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_803276C8[];
extern void *lbl_803DCC20;
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);
extern void fn_80190680(void *audio, int mode);

void Options__DisableStereo(void) {
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_803276C8, 1);
    fn_80190680(lbl_803DCC20, 0);
}
