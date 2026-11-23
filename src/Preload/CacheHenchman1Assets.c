/* Preload__CacheHenchman1Assets @ 0x8012D114 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheHenchman1Assets @ 0x8012D114 (0x80). ProDG -O2. */
extern char lbl_80328E48[];
extern char lbl_80328E64[];
extern char lbl_80328E80[];
extern char lbl_80328E98[];
extern char lbl_80328EB4[];
extern char lbl_80328EC8[];
extern char lbl_80328EDC[];
extern char lbl_80328EF0[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheHenchman1Assets(void) {
    Preload__LoadDblAsset(lbl_80328E48);
    Preload__LoadDblAsset(lbl_80328E64);
    Preload__LoadDblAsset(lbl_80328E80);
    Preload__ResolveFile(lbl_80328E98);
    Preload__ResolveFile(lbl_80328EB4);
    Preload__ResolveFile(lbl_80328EC8);
    Preload__ResolveFile(lbl_80328EDC);
    Preload__ResolveFile(lbl_80328EF0);
    return 1;
}
