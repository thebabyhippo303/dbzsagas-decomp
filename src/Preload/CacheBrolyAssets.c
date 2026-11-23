/* Preload__CacheBrolyAssets @ 0x8012C7C4 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheBrolyAssets @ 0x8012C7C4 (0xB0). ProDG -O2. */
extern char lbl_80328488[];
extern char lbl_803284A0[];
extern char lbl_803284B8[];
extern char lbl_803284C0[];
extern char lbl_803284D8[];
extern char lbl_803284E8[];
extern char lbl_803284F8[];
extern char lbl_80328508[];
extern char lbl_80328518[];
extern char lbl_80328528[];
extern char lbl_80328538[];
extern char lbl_80328548[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *path);

int Preload__CacheBrolyAssets(void) {
    Preload__LoadDblAsset(lbl_80328488);
    Preload__LoadDblAsset(lbl_803284A0);
    Preload__RegisterBank(lbl_803284B8);
    Preload__ResolveFile(lbl_803284C0);
    Preload__ResolveFile(lbl_803284D8);
    Preload__ResolveFile(lbl_803284E8);
    Preload__ResolveFile(lbl_803284F8);
    Preload__ResolveFile(lbl_80328508);
    Preload__ResolveFile(lbl_80328518);
    Preload__ResolveFile(lbl_80328528);
    Preload__ResolveFile(lbl_80328538);
    Preload__ResolveFile(lbl_80328548);
    return 1;
}
