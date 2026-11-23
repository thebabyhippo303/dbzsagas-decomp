/* Options__EnableStereo @ 0x80128C24 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__EnableStereo @ 0x80128C24 (0x40). ProDG -O2. */
extern char *lbl_803D8008;
extern char lbl_803276C8[];
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);
extern void *lbl_803D88C0;
extern void fn_80190680(void *state, int enabled);

void Options__EnableStereo(void) {
    PersistentData__SetGlobalImpl(lbl_803D8008 + 300, lbl_803276C8, 2);
    fn_80190680(lbl_803D88C0, 1);
}
