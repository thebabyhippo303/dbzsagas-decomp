/* Game__IsPendulumModeImpl @ 0x80127E74 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__IsPendulumModeImpl @ 0x80127E74 (0x40). ProDG -O2. */
extern void *lbl_803D8008;
extern char lbl_80327730[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int Game__IsPendulumModeImpl(void) {
    return PersistentData__GetGlobalImpl((char *)lbl_803D8008 + 0x12C,
                                         lbl_80327730) > 0;
}
