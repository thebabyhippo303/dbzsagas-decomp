/* Preload__CacheYakiAssets @ 0x8012DDC8 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheYakiAssets @ 0x8012DDC8 (0x5C). ProDG -O2. */
extern char lbl_80329D64[];
extern char lbl_80329D78[];
extern char lbl_80329D90[];
extern char lbl_80329DA4[];
extern char lbl_80329DB8[];
extern void Preload__LoadDblAsset(char *name);
extern void fn_8012E9E0(char *name);

int Preload__CacheYakiAssets(void) {
	Preload__LoadDblAsset(lbl_80329D64);
	Preload__LoadDblAsset(lbl_80329D78);
	Preload__LoadDblAsset(lbl_80329D90);
	fn_8012E9E0(lbl_80329DA4);
	fn_8012E9E0(lbl_80329DB8);
	return 1;
}
