/* SaveGame__VerifySmallBlockHash @ 0x8014F8AC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__VerifySmallBlockHash @ 0x8014F8AC (0x48). ProDG -O2. */
typedef struct {
	unsigned hash;
} SmallSaveBlock;

extern unsigned Hash__Buffer32(void *data, int length, int seed);

int SaveGame__VerifySmallBlockHash(void *save, SmallSaveBlock *block,
	void *data) {
	unsigned hash = Hash__Buffer32(data, 0x140, 0);
	return block->hash == hash;
}
