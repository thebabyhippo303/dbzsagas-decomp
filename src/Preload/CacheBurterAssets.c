/* Preload__CacheBurterAssets @ 0x8012C874 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheBurterAssets @ 0x8012C874 (0x68). ProDG -O2. */
extern char lbl_80328558[];
extern char lbl_80328570[];
extern char lbl_8032858C[];
extern char lbl_803285A4[];
extern char lbl_803285BC[];
extern char lbl_803285D0[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheBurterAssets(void) {
    Preload__LoadDblAsset(lbl_80328558);
    Preload__LoadDblAsset(lbl_80328570);
    Preload__LoadDblAsset(lbl_8032858C);
    Preload__ResolveFile(lbl_803285A4);
    Preload__ResolveFile(lbl_803285BC);
    Preload__ResolveFile(lbl_803285D0);
    return 1;
}
