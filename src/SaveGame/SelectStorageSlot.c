/* SaveGame__SelectStorageSlot @ 0x80150884 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__SelectStorageSlot @ 0x80150884 (0x30). ProDG -O2. */
extern const char *lbl_8036CD74[];
extern void fn_80150330(void *save, const char *name);

void SaveGame__SelectStorageSlot(void *save, int slot) {
    fn_80150330(save, lbl_8036CD74[slot]);
}
