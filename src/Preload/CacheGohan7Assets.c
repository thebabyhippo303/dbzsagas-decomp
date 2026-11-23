/* Preload__CacheGohan7Assets @ 0x8012CE30 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheGohan7Assets @ 0x8012CE30 (0x68). ProDG -O2. */
extern char lbl_80328C40[];
extern char lbl_80328C58[];
extern char lbl_80328C74[];
extern char lbl_80328C7C[];
extern char lbl_80328C20[];
extern char lbl_80328C30[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);
extern void Preload__CacheGohanParticles(void);

void Preload__CacheGohan7Assets(void) {
    Preload__LoadDblAsset(lbl_80328C40);
    Preload__LoadDblAsset(lbl_80328C58);
    Preload__RegisterBank(lbl_80328C74);
    Preload__ResolveFile(lbl_80328C7C);
    Preload__ResolveFile(lbl_80328C20);
    Preload__ResolveFile(lbl_80328C30);
    Preload__CacheGohanParticles();
}
