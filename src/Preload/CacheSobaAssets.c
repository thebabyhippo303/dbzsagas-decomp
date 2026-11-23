/* Preload__CacheSobaAssets @ 0x8012DA3C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheSobaAssets @ 0x8012DA3C (0x74). ProDG -O2. */
extern char lbl_80329980[];
extern char lbl_80329994[];
extern char lbl_803299AC[];
extern char lbl_80328548[];
extern char lbl_803299C0[];
extern char lbl_803299D4[];
extern char lbl_803299E4[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheSobaAssets(void) {
    Preload__LoadDblAsset(lbl_80329980);
    Preload__LoadDblAsset(lbl_80329994);
    Preload__LoadDblAsset(lbl_803299AC);
    Preload__ResolveFile(lbl_80328548);
    Preload__ResolveFile(lbl_803299C0);
    Preload__ResolveFile(lbl_803299D4);
    Preload__ResolveFile(lbl_803299E4);
    return 1;
}
