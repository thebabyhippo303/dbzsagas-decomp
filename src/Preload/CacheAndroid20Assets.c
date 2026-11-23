/* Preload__CacheAndroid20Assets @ 0x8012C700 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheAndroid20Assets @ 0x8012C700 (0x74). ProDG -O2. */
extern char lbl_80328388[];
extern char lbl_803283A4[];
extern char lbl_803283C0[];
extern char lbl_803283D8[];
extern char lbl_803283F4[];
extern char lbl_80328408[];
extern char lbl_8032841C[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__ResolveFile(char *name);

int Preload__CacheAndroid20Assets(void) {
    Preload__LoadDblAsset(lbl_80328388);
    Preload__LoadDblAsset(lbl_803283A4);
    Preload__LoadDblAsset(lbl_803283C0);
    Preload__ResolveFile(lbl_803283D8);
    Preload__ResolveFile(lbl_803283F4);
    Preload__ResolveFile(lbl_80328408);
    Preload__ResolveFile(lbl_8032841C);
    return 1;
}
