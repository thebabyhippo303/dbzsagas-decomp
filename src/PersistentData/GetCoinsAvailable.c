/* PersistentData__GetCoinsAvailable @ 0x801279C0 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC368;
extern char lbl_803276F4[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int PersistentData__GetCoinsAvailable(void) {
    return PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_803276F4);
}
