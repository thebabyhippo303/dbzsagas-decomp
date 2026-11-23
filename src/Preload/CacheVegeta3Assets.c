/* Preload__CacheVegeta3Assets @ 0x8012DD60 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_80329CE8[];
extern char lbl_80329D00[];
extern char lbl_80329D1C[];
extern char lbl_80329D24[];
extern char lbl_80329D3C[];
extern char lbl_80329D50[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern int Preload__ResolveFile(char *name);
extern int Preload__CacheVegetaParticles(int resolved);

int Preload__CacheVegeta3Assets(void) {
    Preload__LoadDblAsset(lbl_80329CE8);
    Preload__LoadDblAsset(lbl_80329D00);
    Preload__RegisterBank(lbl_80329D1C);
    Preload__ResolveFile(lbl_80329D24);
    Preload__ResolveFile(lbl_80329D3C);
    return Preload__CacheVegetaParticles(Preload__ResolveFile(lbl_80329D50));
}
