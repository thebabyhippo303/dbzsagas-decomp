/* ParticleMgr__FindEmitterByName @ 0x8021C760 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Emitter__FindAssetIdsByName @ 0x8021C760 (0x30). ProDG -O2. */
typedef struct EmitterAssetTable {
    char pad[0x548];
    int table;
    char mid[0x10];
    int count;
} EmitterAssetTable;

extern EmitterAssetTable lbl_803AD05C;
extern void EffectAsset__FindIdsByName(void *a, void *b, void *c, int table, int count);

void Emitter__FindAssetIdsByName(void *a, void *b, void *c) {
    int count = lbl_803AD05C.count;
    int table = lbl_803AD05C.table;
    EffectAsset__FindIdsByName(a, b, c, table, count);
}
