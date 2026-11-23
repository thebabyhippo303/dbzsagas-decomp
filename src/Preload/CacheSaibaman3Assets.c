/* Preload__CacheSaibaman3Assets @ 0x8012D96C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheSaibaman3Assets @ 0x8012D96C (0x68). ProDG -O2.
   characters\saibaman3.dbl, sprites\faces\saibaman3.dbl, particles\saibaman.dbp,
   characters\saibaman3.var, var\sShooterAI.var, var\sShooterAIp.var. */
extern char lbl_80329888[];
extern char lbl_803298A4[];
extern char lbl_803297A8[];
extern char lbl_803298C0[];
extern char lbl_803298DC[];
extern char lbl_803298F0[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheSaibaman3Assets(void) {
    Preload__LoadDblAsset(lbl_80329888);
    Preload__LoadDblAsset(lbl_803298A4);
    Preload__LoadDblAsset(lbl_803297A8);
    Preload__ResolveFile(lbl_803298C0);
    Preload__ResolveFile(lbl_803298DC);
    Preload__ResolveFile(lbl_803298F0);
    return 1;
}
