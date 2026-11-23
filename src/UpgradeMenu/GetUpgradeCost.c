/* UpgradeMenu__GetUpgradeCost @ 0x80127684 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: UpgradeMenu__GetUpgradeCost @ 0x80127684 (0x24). ProDG -O2. */
extern void *PersistentData__GetRecordById(int id);

int UpgradeMenu__GetUpgradeCost(int id) {
    return *(int *)((char *)PersistentData__GetRecordById(id) + 12);
}
