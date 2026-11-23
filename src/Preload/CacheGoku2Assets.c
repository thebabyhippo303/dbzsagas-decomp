/* Preload__CacheGoku2Assets @ 0x8012CF18 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheGoku2Assets @ 0x8012CF18 (0x68). ProDG -O2. */
extern char lbl_80328CEC[];
extern char lbl_80326978[];
extern char lbl_80328D04[];
extern char lbl_80328D0C[];
extern char lbl_80328C20[];
extern char lbl_80328C30[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);
extern void Preload__CacheGokuParticles(void);

void Preload__CacheGoku2Assets(void) {
    Preload__LoadDblAsset(lbl_80328CEC);
    Preload__LoadDblAsset(lbl_80326978);
    Preload__RegisterBank(lbl_80328D04);
    Preload__ResolveFile(lbl_80328D0C);
    Preload__ResolveFile(lbl_80328C20);
    Preload__ResolveFile(lbl_80328C30);
    Preload__CacheGokuParticles();
}
