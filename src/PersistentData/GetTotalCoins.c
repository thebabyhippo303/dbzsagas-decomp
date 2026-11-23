/* PersistentData__GetTotalCoins @ 0x80127A20 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__GetTotalCoins @ 0x80127A20 (0x3C). ProDG -O2. */
extern int PersistentData__GetCoinsUsed(void *self);
extern int PersistentData__GetCoinsAvailable(void *self);

int PersistentData__GetTotalCoins(void *self) {
    int used;

    used = PersistentData__GetCoinsUsed(self);
    return used + PersistentData__GetCoinsAvailable(self);
}
