/* Preload__CacheVegeta1Assets @ 0x8012DCA8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheVegeta1Assets @ 0x8012DCA8 (0x68). ProDG -O2. */
extern char lbl_80329C18[];
extern char lbl_80329C30[];
extern char lbl_80329C4C[];
extern char lbl_80329C54[];
extern char lbl_80329C6C[];
extern char lbl_80329C80[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);
extern void Preload__CacheVegetaParticles(void);

void Preload__CacheVegeta1Assets(void) {
    Preload__LoadDblAsset(lbl_80329C18);
    Preload__LoadDblAsset(lbl_80329C30);
    Preload__RegisterBank(lbl_80329C4C);
    Preload__ResolveFile(lbl_80329C54);
    Preload__ResolveFile(lbl_80329C6C);
    Preload__ResolveFile(lbl_80329C80);
    Preload__CacheVegetaParticles();
}
