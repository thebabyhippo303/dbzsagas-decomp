/* Preload__CacheSaibaman4Assets @ 0x8012D9D4 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheSaibaman4Assets @ 0x8012D9D4 (0x68). ProDG -O2. */
extern char lbl_80329904[];
extern char lbl_80329920[];
extern char lbl_803297A8[];
extern char lbl_8032993C[];
extern char lbl_80329958[];
extern char lbl_8032996C[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheSaibaman4Assets(void) {
    Preload__LoadDblAsset(lbl_80329904);
    Preload__LoadDblAsset(lbl_80329920);
    Preload__LoadDblAsset(lbl_803297A8);
    Preload__ResolveFile(lbl_8032993C);
    Preload__ResolveFile(lbl_80329958);
    Preload__ResolveFile(lbl_8032996C);
    return 1;
}
