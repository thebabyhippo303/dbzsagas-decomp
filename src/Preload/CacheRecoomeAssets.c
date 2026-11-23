/* Preload__CacheRecoomeAssets @ 0x8012D810 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheRecoomeAssets @ 0x8012D810 (0x8C). ProDG -O2. */
extern char lbl_803296A8[];
extern char lbl_803296C0[];
extern char lbl_803296DC[];
extern char lbl_803296F4[];
extern char lbl_8032970C[];
extern char lbl_80329720[];
extern char lbl_80329734[];
extern char lbl_80329748[];
extern char lbl_8032975C[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheRecoomeAssets(void) {
    Preload__LoadDblAsset(lbl_803296A8);
    Preload__LoadDblAsset(lbl_803296C0);
    Preload__LoadDblAsset(lbl_803296DC);
    Preload__ResolveFile(lbl_803296F4);
    Preload__ResolveFile(lbl_8032970C);
    Preload__ResolveFile(lbl_80329720);
    Preload__ResolveFile(lbl_80329734);
    Preload__ResolveFile(lbl_80329748);
    Preload__ResolveFile(lbl_8032975C);
    return 1;
}
