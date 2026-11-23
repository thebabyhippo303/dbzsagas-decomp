/* Preload__CacheGohan3Assets @ 0x8012CCC0 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
extern char lbl_80328AD0[];
extern char lbl_80328AE8[];
extern char lbl_80328B04[];
extern char lbl_80328B0C[];
extern char lbl_80328A58[];
extern char lbl_80328A68[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);
extern void Preload__CacheGohanParticles(void);

void Preload__CacheGohan3Assets(void) {
    Preload__LoadDblAsset(lbl_80328AD0);
    Preload__LoadDblAsset(lbl_80328AE8);
    Preload__RegisterBank(lbl_80328B04);
    Preload__ResolveFile(lbl_80328B0C);
    Preload__ResolveFile(lbl_80328A58);
    Preload__ResolveFile(lbl_80328A68);
    Preload__CacheGohanParticles();
}
