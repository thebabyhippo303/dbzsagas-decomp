/* Options__GetRumble @ 0x80128830 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__GetRumble @ 0x80128830 (0x30). ProDG -O2. */
extern char *lbl_803D8008;
extern char lbl_8032788C[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int Options__GetRumble(void) {
    return PersistentData__GetGlobalImpl(lbl_803D8008 + 300, lbl_8032788C);
}
