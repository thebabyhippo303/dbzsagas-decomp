/* Game__ReadSavePayloadBlock @ 0x80050318 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveMenu__ReadCurrentPayloadBlock @ 0x80050318 (0x28). ProDG -O2. */
typedef struct SaveRecord {
    char pad[21384];
    void *payload;
} SaveRecord;

extern SaveRecord *lbl_803DC368;
extern int SaveGame__ReadPayloadBlock(void *payload);

int SaveMenu__ReadCurrentPayloadBlock(void) {
    return SaveGame__ReadPayloadBlock(lbl_803DC368->payload);
}
