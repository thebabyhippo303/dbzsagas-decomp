/* Preload__CacheGohan2Assets @ 0x8012CC70 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheGohan2Assets @ 0x8012CC70 (0x50). ProDG -O2. */
extern char lbl_80328A7C[];
extern char lbl_80328A94[];
extern char lbl_80328AB0[];
extern char lbl_80328AB8[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);
extern void Preload__CacheGohanParticles(void);

void Preload__CacheGohan2Assets(void) {
    Preload__LoadDblAsset(lbl_80328A7C);
    Preload__LoadDblAsset(lbl_80328A94);
    Preload__RegisterBank(lbl_80328AB0);
    Preload__ResolveFile(lbl_80328AB8);
    Preload__CacheGohanParticles();
}
