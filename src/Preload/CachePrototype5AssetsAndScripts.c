/* Preload__CachePrototype5AssetsAndScripts @ 0x8012E590 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CachePrototype5AssetsAndScripts @ 0x8012E590 (0x74). ProDG -O2. */
extern char lbl_8032A718[];
extern char lbl_8032A734[];
extern char lbl_8032A754[];
extern char lbl_8032A76C[];
extern char lbl_8032A784[];
extern char lbl_8032A79C[];
extern char lbl_8032A648[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__ResolveFile(char *name);

int Preload__CachePrototype5AssetsAndScripts(void) {
    Preload__LoadDblAsset(lbl_8032A718);
    Preload__LoadDblAsset(lbl_8032A734);
    Preload__LoadDblAsset(lbl_8032A754);
    Preload__LoadDblAsset(lbl_8032A76C);
    Preload__LoadDblAsset(lbl_8032A784);
    Preload__ResolveFile(lbl_8032A79C);
    Preload__ResolveFile(lbl_8032A648);
    return 1;
}
