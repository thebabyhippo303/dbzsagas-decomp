/* Preload__CacheGohan1Assets @ 0x8012CC08 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheGohan1Assets @ 0x8012CC08 (0x68). ProDG -O2. */
extern char lbl_80328A04[];
extern char lbl_80328A1C[];
extern char lbl_80328A38[];
extern char lbl_80328A40[];
extern char lbl_80328A58[];
extern char lbl_80328A68[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);
extern void Preload__CacheGohanParticles(void);

void Preload__CacheGohan1Assets(void) {
    Preload__LoadDblAsset(lbl_80328A04);
    Preload__LoadDblAsset(lbl_80328A1C);
    Preload__RegisterBank(lbl_80328A38);
    Preload__ResolveFile(lbl_80328A40);
    Preload__ResolveFile(lbl_80328A58);
    Preload__ResolveFile(lbl_80328A68);
    Preload__CacheGohanParticles();
}
