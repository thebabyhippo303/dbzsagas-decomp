/* Preload__CacheKrillinAssets @ 0x8012D370 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheKrillinAssets @ 0x8012D370 (0x74). ProDG -O2. */
extern char lbl_80329124[];
extern char lbl_8032913C[];
extern char lbl_80329158[];
extern char lbl_80329170[];
extern char lbl_80329178[];
extern char lbl_80328C20[];
extern char lbl_80328C30[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);

int Preload__CacheKrillinAssets(void) {
    Preload__LoadDblAsset(lbl_80329124);
    Preload__LoadDblAsset(lbl_8032913C);
    Preload__LoadDblAsset(lbl_80329158);
    Preload__RegisterBank(lbl_80329170);
    Preload__ResolveFile(lbl_80329178);
    Preload__ResolveFile(lbl_80328C20);
    Preload__ResolveFile(lbl_80328C30);
    return 1;
}
