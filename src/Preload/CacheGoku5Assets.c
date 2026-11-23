/* Preload__CacheGoku5Assets @ 0x8012D0C4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheGoku5Assets @ 0x8012D0C4 (0x50). ProDG -O2. */
extern char lbl_80328DF8[];
extern char lbl_80328E10[];
extern char lbl_80328E28[];
extern char lbl_80328E30[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);
extern void Preload__CacheGokuParticles(void);

void Preload__CacheGoku5Assets(void) {
    Preload__LoadDblAsset(lbl_80328DF8);
    Preload__LoadDblAsset(lbl_80328E10);
    Preload__RegisterBank(lbl_80328E28);
    Preload__ResolveFile(lbl_80328E30);
    Preload__CacheGokuParticles();
}
