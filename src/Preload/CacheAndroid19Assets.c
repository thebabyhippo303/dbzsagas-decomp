/* Preload__CacheAndroid19Assets @ 0x8012C680 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheAndroid19Assets @ 0x8012C680 (0x80). ProDG -O2. */
extern char lbl_803282C8[];
extern char lbl_803282E4[];
extern char lbl_80328300[];
extern char lbl_80328318[];
extern char lbl_80328334[];
extern char lbl_80328348[];
extern char lbl_8032835C[];
extern char lbl_80328370[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheAndroid19Assets(void) {
    Preload__LoadDblAsset(lbl_803282C8);
    Preload__LoadDblAsset(lbl_803282E4);
    Preload__LoadDblAsset(lbl_80328300);
    Preload__ResolveFile(lbl_80328318);
    Preload__ResolveFile(lbl_80328334);
    Preload__ResolveFile(lbl_80328348);
    Preload__ResolveFile(lbl_8032835C);
    Preload__ResolveFile(lbl_80328370);
    return 1;
}
