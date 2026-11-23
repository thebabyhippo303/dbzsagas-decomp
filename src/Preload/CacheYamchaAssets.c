/* Preload__CacheYamchaAssets @ 0x8012D3E4 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheYamchaAssets @ 0x8012D3E4 (0x74). ProDG -O2. */
extern char lbl_80339190[];
extern char lbl_803391A8[];
extern char lbl_803391C4[];
extern char lbl_803391DC[];
extern char lbl_803391E4[];
extern char lbl_80338C20[];
extern char lbl_80338C30[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *path);

int Preload__CacheYamchaAssets(void) {
    Preload__LoadDblAsset(lbl_80339190);
    Preload__LoadDblAsset(lbl_803391A8);
    Preload__LoadDblAsset(lbl_803391C4);
    Preload__RegisterBank(lbl_803391DC);
    Preload__ResolveFile(lbl_803391E4);
    Preload__ResolveFile(lbl_80338C20);
    Preload__ResolveFile(lbl_80338C30);
    return 1;
}
