/* Preload__CacheGoku2aAssets @ 0x8012CF80 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheGoku2aAssets @ 0x8012CF80 (0x68). ProDG -O2. */
extern char lbl_80328D24[];
extern char lbl_80326990[];
extern char lbl_80328D3C[];
extern char lbl_80328D44[];
extern char lbl_80328C20[];
extern char lbl_80328C30[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);
extern void Preload__CacheGokuParticles(void);

void Preload__CacheGoku2aAssets(void) {
    Preload__LoadDblAsset(lbl_80328D24);
    Preload__LoadDblAsset(lbl_80326990);
    Preload__RegisterBank(lbl_80328D3C);
    Preload__ResolveFile(lbl_80328D44);
    Preload__ResolveFile(lbl_80328C20);
    Preload__ResolveFile(lbl_80328C30);
    Preload__CacheGokuParticles();
}
