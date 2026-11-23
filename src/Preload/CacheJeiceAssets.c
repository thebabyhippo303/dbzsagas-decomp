/* Preload__CacheJeiceAssets @ 0x8012D2FC (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheJeiceAssets @ 0x8012D2FC (0x74). ProDG -O2. */
extern char lbl_80329094[];
extern char lbl_803290AC[];
extern char lbl_803290C4[];
extern char lbl_803290D8[];
extern char lbl_803290F0[];
extern char lbl_80329100[];
extern char lbl_80329110[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__ResolveFile(char *name);

int Preload__CacheJeiceAssets(void) {
    Preload__LoadDblAsset(lbl_80329094);
    Preload__LoadDblAsset(lbl_803290AC);
    Preload__LoadDblAsset(lbl_803290C4);
    Preload__ResolveFile(lbl_803290D8);
    Preload__ResolveFile(lbl_803290F0);
    Preload__ResolveFile(lbl_80329100);
    Preload__ResolveFile(lbl_80329110);
    return 1;
}
