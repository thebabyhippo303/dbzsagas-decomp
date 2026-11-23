/* Preload__CacheAndroid18Assets @ 0x8012C5D0 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheAndroid18Assets @ 0x8012C5D0 (0xB0). ProDG -O2. */
extern char lbl_803281B4[];
extern char lbl_803281D0[];
extern char lbl_803281EC[];
extern char lbl_80328204[];
extern char lbl_80328220[];
extern char lbl_80328234[];
extern char lbl_80328248[];
extern char lbl_8032825C[];
extern char lbl_80328270[];
extern char lbl_80328284[];
extern char lbl_80328298[];
extern char lbl_803282B0[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__ResolveFile(char *name);

int Preload__CacheAndroid18Assets(void) {
    Preload__LoadDblAsset(lbl_803281B4);
    Preload__LoadDblAsset(lbl_803281D0);
    Preload__LoadDblAsset(lbl_803281EC);
    Preload__ResolveFile(lbl_80328204);
    Preload__ResolveFile(lbl_80328220);
    Preload__ResolveFile(lbl_80328234);
    Preload__ResolveFile(lbl_80328248);
    Preload__ResolveFile(lbl_8032825C);
    Preload__ResolveFile(lbl_80328270);
    Preload__ResolveFile(lbl_80328284);
    Preload__ResolveFile(lbl_80328298);
    Preload__ResolveFile(lbl_803282B0);
    return 1;
}
