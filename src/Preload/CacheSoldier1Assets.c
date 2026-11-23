/* Preload__CacheSoldier1Assets @ 0x8012DE24 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match Preload__CacheSoldier1Assets @ 0x8012DE24 (0xBC). */
extern char lbl_80329DC8[];
extern char lbl_80329DE0[];
extern char lbl_80329DFC[];
extern char lbl_80329E14[];
extern char lbl_80329384[];
extern char lbl_80329398[];
extern char lbl_80329E2C[];
extern char lbl_80329E3C[];
extern char lbl_80329E50[];
extern char lbl_80329E64[];
extern char lbl_80329E78[];
extern char lbl_80329E8C[];
extern char lbl_80329EA0[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheSoldier1Assets(void) {
    Preload__LoadDblAsset(lbl_80329DC8);
    Preload__LoadDblAsset(lbl_80329DE0);
    Preload__LoadDblAsset(lbl_80329DFC);
    Preload__ResolveFile(lbl_80329E14);
    Preload__ResolveFile(lbl_80329384);
    Preload__ResolveFile(lbl_80329398);
    Preload__ResolveFile(lbl_80329E2C);
    Preload__ResolveFile(lbl_80329E3C);
    Preload__ResolveFile(lbl_80329E50);
    Preload__ResolveFile(lbl_80329E64);
    Preload__ResolveFile(lbl_80329E78);
    Preload__ResolveFile(lbl_80329E8C);
    Preload__ResolveFile(lbl_80329EA0);
    return 1;
}
