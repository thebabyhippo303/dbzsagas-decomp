/* PersistentData__TransferCoinsToUsed @ 0x80127AFC (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__TransferCoinsToUsed @ 0x80127AFC (0x78). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_803276F4[];
extern char lbl_80327704[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

void PersistentData__TransferCoinsToUsed(void *self, int amount) {
    int available;
    int used;

    available = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_803276F4);
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_803276F4, available - amount);
    used = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_80327704);
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_80327704, used + amount);
}
