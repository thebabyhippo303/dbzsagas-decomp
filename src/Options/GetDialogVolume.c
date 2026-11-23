/* Options__GetDialogVolume @ 0x8012875C (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__GetDialogVolume @ 0x8012875C (0x30). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_8032786C[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int Options__GetDialogVolume(void) {
    return PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_8032786C);
}
