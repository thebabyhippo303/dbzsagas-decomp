/* Preload__CacheGinyu2Assets @ 0x8012CFE8 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
extern char lbl_80328D5C[];
extern char lbl_80328D74[];
extern char lbl_80328D90[];
extern char lbl_80328C20[];
extern char lbl_80328C30[];
extern char lbl_80328CCC[];
extern char lbl_80328CDC[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__ResolveFile(char *path);
extern void Preload__CacheGokuParticles(void);

void Preload__CacheGinyu2Assets(void) {
    Preload__LoadDblAsset(lbl_80328D5C);
    Preload__LoadDblAsset(lbl_80328D74);
    Preload__ResolveFile(lbl_80328D90);
    Preload__ResolveFile(lbl_80328C20);
    Preload__ResolveFile(lbl_80328C30);
    Preload__ResolveFile(lbl_80328CCC);
    Preload__ResolveFile(lbl_80328CDC);
    Preload__CacheGokuParticles();
}
