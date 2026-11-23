/* Preload__CacheSaibaman2Assets @ 0x8012D904 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_80329804[];
extern char lbl_80329820[];
extern char lbl_803297A8[];
extern char lbl_8032983C[];
extern char lbl_80329858[];
extern char lbl_80329870[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheSaibaman2Assets(void) {
    Preload__LoadDblAsset(lbl_80329804);
    Preload__LoadDblAsset(lbl_80329820);
    Preload__LoadDblAsset(lbl_803297A8);
    Preload__ResolveFile(lbl_8032983C);
    Preload__ResolveFile(lbl_80329858);
    Preload__ResolveFile(lbl_80329870);
    return 1;
}
