/* Preload__CacheSaibaman1Assets @ 0x8012D89C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_80329770[];
extern char lbl_8032978C[];
extern char lbl_803297A8[];
extern char lbl_803297C0[];
extern char lbl_803297DC[];
extern char lbl_803297F0[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__ResolveFile(char *name);

int Preload__CacheSaibaman1Assets(void) {
    Preload__LoadDblAsset(lbl_80329770);
    Preload__LoadDblAsset(lbl_8032978C);
    Preload__LoadDblAsset(lbl_803297A8);
    Preload__ResolveFile(lbl_803297C0);
    Preload__ResolveFile(lbl_803297DC);
    Preload__ResolveFile(lbl_803297F0);
    return 1;
}
