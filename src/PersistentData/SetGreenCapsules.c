/* PersistentData__SetGreenCapsules @ 0x80127CA8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC368;
extern char lbl_80327720[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

int PersistentData__SetGreenCapsules(void *self, int value) {
    int current = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_80327720);
    return PersistentData__SetGlobalImpl(
        lbl_803DC368 + 300, lbl_80327720, current + value);
}
