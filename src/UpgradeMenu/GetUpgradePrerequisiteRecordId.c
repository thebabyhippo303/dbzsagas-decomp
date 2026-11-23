/* UpgradeMenu__GetUpgradePrerequisiteRecordId @ 0x801276A8 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: UpgradeMenu__GetUpgradePrerequisiteRecordId @ 0x801276A8 (0x24). ProDG -O2. */
extern void *PersistentData__GetRecordById(int id);

int UpgradeMenu__GetUpgradePrerequisiteRecordId(int id) {
    return *(int *)((char *)PersistentData__GetRecordById(id) + 16);
}
