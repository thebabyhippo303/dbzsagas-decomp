/* Preload__CachePrototype4Assets @ 0x8012D710 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
extern char lbl_80329550[];
extern char lbl_8032956C[];
extern char lbl_80329444[];
extern char lbl_8032958C[];
extern char lbl_803295A8[];
extern char lbl_803295BC[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CachePrototype4Assets(void) {
    Preload__LoadDblAsset(lbl_80329550);
    Preload__LoadDblAsset(lbl_8032956C);
    Preload__LoadDblAsset(lbl_80329444);
    Preload__ResolveFile(lbl_8032958C);
    Preload__ResolveFile(lbl_803295A8);
    Preload__ResolveFile(lbl_803295BC);
    return 1;
}
