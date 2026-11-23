/* MissionStats__SetPlayerRecordAvatar @ 0x80125B08 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionStats__SetPlayerRecordAvatar @ 0x80125B08 (0x8). ProDG -O2. */
typedef struct {
    void *avatar;
} PlayerRecord;

void MissionStats__SetPlayerRecordAvatar(PlayerRecord *record, void *avatar) {
    record->avatar = avatar;
}
