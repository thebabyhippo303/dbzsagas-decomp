/* SaveGame__VerifyLargeBlockHash @ 0x8014F8F4 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__VerifyLargeBlockHash @ 0x8014F8F4 (0x48). ProDG -O2. */
typedef struct {
    int pad;
    unsigned hash;
} SaveBlock;

extern unsigned Hash__Buffer32(void *data, int length, int seed);

int SaveGame__VerifyLargeBlockHash(void *save, SaveBlock *block, void *data) {
    unsigned hash = Hash__Buffer32(data, 0x2400, 0);
    return block->hash == hash;
}
