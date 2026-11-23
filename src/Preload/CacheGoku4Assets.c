/* Preload__CacheGoku4Assets @ 0x8012D05C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheGoku4Assets @ 0x8012D05C (0x68). ProDG -O2. */
extern char lbl_80328DA8[];
extern char lbl_80328DC0[];
extern char lbl_80328DD8[];
extern char lbl_80328DE0[];
extern char lbl_80328CCC[];
extern char lbl_80328CDC[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *path);
extern int Preload__CacheGokuParticles(void);

int Preload__CacheGoku4Assets(void) {
    Preload__LoadDblAsset(lbl_80328DA8);
    Preload__LoadDblAsset(lbl_80328DC0);
    Preload__RegisterBank(lbl_80328DD8);
    Preload__ResolveFile(lbl_80328DE0);
    Preload__ResolveFile(lbl_80328CCC);
    Preload__ResolveFile(lbl_80328CDC);
    return Preload__CacheGokuParticles();
}
