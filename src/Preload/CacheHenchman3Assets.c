/* Preload__CacheHenchman3Assets @ 0x8012D214 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheHenchman3Assets @ 0x8012D214 (0x68). ProDG -O2. */
extern char lbl_80328FA0[];
extern char lbl_80328FBC[];
extern char lbl_80328E80[];
extern char lbl_80328FD8[];
extern char lbl_80328FF4[];
extern char lbl_80329004[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__ResolveFile(char *name);

int Preload__CacheHenchman3Assets(void) {
    Preload__LoadDblAsset(lbl_80328FA0);
    Preload__LoadDblAsset(lbl_80328FBC);
    Preload__LoadDblAsset(lbl_80328E80);
    Preload__ResolveFile(lbl_80328FD8);
    Preload__ResolveFile(lbl_80328FF4);
    Preload__ResolveFile(lbl_80329004);
    return 1;
}
