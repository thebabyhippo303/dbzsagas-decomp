/* SaveGame__LoadFromStorage @ 0x8014F604 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void SaveGame__ClearWorkingState(void *self);
extern int SaveGame__ReadRecordTable(void *self);
extern int SaveGame__ReadPayloadBlock(void *self);
extern void SaveGame__TransferActiveRecordData(void *self, int which);
extern int lbl_803946C8 __attribute__((section(".bss")));

int SaveGame__LoadFromStorage(void *self) {
    int result;

    SaveGame__ClearWorkingState(self);
    result = SaveGame__ReadRecordTable(self);
    if (result == 0) {
        lbl_803946C8 = *(int *)(*(char **)((char *)self + 0x20) + 0x3C);
        result = SaveGame__ReadPayloadBlock(self);
        if (result == 0) {
            SaveGame__TransferActiveRecordData(self, 0);
        }
    }
    SaveGame__ClearWorkingState(self);
    return result;
}
