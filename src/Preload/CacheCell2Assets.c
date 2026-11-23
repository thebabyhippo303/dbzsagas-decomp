/* Preload__CacheCell2Assets @ 0x8012CA38 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheCell2Assets @ 0x8012CA38 (0x80). ProDG -O2. */
extern char lbl_803287D4[];
extern char lbl_803287EC[];
extern char lbl_80328764[];
extern char lbl_80328804[];
extern char lbl_8032881C[];
extern char lbl_803287C4[];
extern char lbl_8032882C[];
extern char lbl_80328840[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheCell2Assets(void) {
    Preload__LoadDblAsset(lbl_803287D4);
    Preload__LoadDblAsset(lbl_803287EC);
    Preload__LoadDblAsset(lbl_80328764);
    Preload__ResolveFile(lbl_80328804);
    Preload__ResolveFile(lbl_8032881C);
    Preload__ResolveFile(lbl_803287C4);
    Preload__ResolveFile(lbl_8032882C);
    Preload__ResolveFile(lbl_80328840);
    return 1;
}
