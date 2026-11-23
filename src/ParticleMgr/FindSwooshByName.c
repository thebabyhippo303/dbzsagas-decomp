/* ParticleMgr__FindSwooshByName @ 0x8021C7C0 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
void EffectAsset__FindIdsByName(void *a, void *b, void *c, int d, int e);
typedef struct {
    char pad[0x54C];
    int ids_first;
    char pad2[0x10];
    int ids_second;
} SwooshAssetIds;
extern SwooshAssetIds lbl_803AD05C __attribute__((section(".data")));

void SwooshStreak__FindAssetIdsByName(void *self, void *name, void *out) {
    EffectAsset__FindIdsByName(self, name, out, lbl_803AD05C.ids_first, lbl_803AD05C.ids_second);
}
