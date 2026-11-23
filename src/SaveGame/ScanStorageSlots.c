/* SaveGame__ScanStorageSlots @ 0x801508B4 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void SaveGame__SetHasValidSlot(void *, s32);
void SaveGame__MarkSlotInvalid(void *, s32);
void SaveGame__SelectStorageSlot(void *, s32);
s32 SaveGame__ValidateRecordTable(void *);

s32 SaveGame__ScanStorageSlots(char *self) {
    s32 *slots;
    s32 found;
    s32 i;
    s32 r;
    s32 one;

    found = 0;
    *(s32 *)(self + 0x44) = 0;
    SaveGame__SetHasValidSlot(self, 0);
    i = 0;
    do {
        SaveGame__MarkSlotInvalid(self, i);
        i += 1;
    } while (i <= 2);
    i = 0;
    one = 1;
    slots = (s32 *)(self + 0x60);
    do {
        SaveGame__SelectStorageSlot(self, i);
        r = SaveGame__ValidateRecordTable(self);
        if (r == 0) {
            *slots = r;
            if (found == 0) {
                *(s32 *)(self + 0x48) = i;
                *(s32 *)(self + 0x5C) = one;
            }
            found = one;
            *(s32 *)(self + 0x44) = *(s32 *)(self + 0x44) + 1;
        } else {
            *(s32 *)(self + 0x48) = i;
            if (r != 2) {
                return r;
            }
        }
        i += 1;
        slots += 1;
    } while (i <= 2);
    return (found == 0) ? 2 : 0;
}
