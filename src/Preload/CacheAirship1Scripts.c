/* Preload__CacheAirship1Scripts @ 0x8012E4B4 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_8032A5E8[];
extern char lbl_8032A600[];
extern char lbl_8032A618[];
extern char lbl_8032A630[];
extern char lbl_8032A648[];
extern void *Preload__LoadDblAsset(char *path);
extern void *Preload__ResolveFile(char *path);

int Preload__CacheAirship1Scripts(void) {
    Preload__LoadDblAsset(lbl_8032A5E8);
    Preload__LoadDblAsset(lbl_8032A600);
    Preload__LoadDblAsset(lbl_8032A618);
    Preload__LoadDblAsset(lbl_8032A630);
    Preload__ResolveFile(lbl_8032A648);
    return 1;
}
