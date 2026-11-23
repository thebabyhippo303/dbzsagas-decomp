/* MissionStats__GetPlayerRecord @ 0x80125A8C (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionStats__GetPlayerRecord @ 0x80125A8C (0x10). ProDG -O2. */
extern char *lbl_803DC6C8;

char *MissionStats__GetPlayerRecord(int player) {
    return lbl_803DC6C8 + player * 332;
}
