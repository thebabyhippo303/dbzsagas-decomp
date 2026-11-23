/* MissionStats__ClearPlayerRecords @ 0x80125B10 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC6C8;
extern void MissionStats__ClearPlayerRecord(void *record);

void MissionStats__ClearPlayerRecords(void) {
    int i = 0;
    int offset = 0;

    do {
        i = i + 1;
        MissionStats__ClearPlayerRecord(lbl_803DC6C8 + offset);
        offset += 332;
    } while ((unsigned int)i <= 1u);
}
