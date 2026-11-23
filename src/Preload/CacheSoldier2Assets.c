/* Preload__CacheSoldier2Assets @ 0x8012DEE0 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheSoldier2Assets @ 0x8012DEE0 (0xA4). ProDG -O2. */
extern char lbl_80329EB4[];
extern char lbl_80329ECC[];
extern char lbl_80329EE8[];
extern char lbl_80329F00[];
extern char lbl_80329E2C[];
extern char lbl_80329E3C[];
extern char lbl_80329E50[];
extern char lbl_80329E64[];
extern char lbl_80329E78[];
extern char lbl_80329E8C[];
extern char lbl_80329EA0[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheSoldier2Assets(void) {
	Preload__LoadDblAsset(lbl_80329EB4);
	Preload__LoadDblAsset(lbl_80329ECC);
	Preload__LoadDblAsset(lbl_80329EE8);
	Preload__ResolveFile(lbl_80329F00);
	Preload__ResolveFile(lbl_80329E2C);
	Preload__ResolveFile(lbl_80329E3C);
	Preload__ResolveFile(lbl_80329E50);
	Preload__ResolveFile(lbl_80329E64);
	Preload__ResolveFile(lbl_80329E78);
	Preload__ResolveFile(lbl_80329E8C);
	Preload__ResolveFile(lbl_80329EA0);
	return 1;
}
