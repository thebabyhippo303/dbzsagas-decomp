/* Preload__CacheRaditzAssets @ 0x8012D778 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheRaditzAssets @ 0x8012D778 (0x98). ProDG -O2. */
extern char lbl_803295D0[];
extern char lbl_803295E8[];
extern char lbl_80329604[];
extern char lbl_8032961C[];
extern char lbl_80329634[];
extern char lbl_80329644[];
extern char lbl_80329658[];
extern char lbl_8032966C[];
extern char lbl_80329680[];
extern char lbl_80329694[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheRaditzAssets(void) {
    Preload__LoadDblAsset(lbl_803295D0);
    Preload__LoadDblAsset(lbl_803295E8);
    Preload__LoadDblAsset(lbl_80329604);
    Preload__ResolveFile(lbl_8032961C);
    Preload__ResolveFile(lbl_80329634);
    Preload__ResolveFile(lbl_80329644);
    Preload__ResolveFile(lbl_80329658);
    Preload__ResolveFile(lbl_8032966C);
    Preload__ResolveFile(lbl_80329680);
    Preload__ResolveFile(lbl_80329694);
    return 1;
}
