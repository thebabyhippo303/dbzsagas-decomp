/* Preload__CacheNappaAssets @ 0x8012D4B4 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheNappaAssets @ 0x8012D4B4 (0x8C). ProDG -O2. */
extern void Preload__LoadDblAsset(char *name);
extern void Preload__ResolveFile(char *name);

extern char lbl_80329258[];
extern char lbl_80329270[];
extern char lbl_80329288[];
extern char lbl_8032929C[];
extern char lbl_803292B4[];
extern char lbl_803292C8[];
extern char lbl_803292DC[];
extern char lbl_803292F0[];
extern char lbl_80329300[];

int Preload__CacheNappaAssets(void) {
	Preload__LoadDblAsset(lbl_80329258);
	Preload__LoadDblAsset(lbl_80329270);
	Preload__LoadDblAsset(lbl_80329288);
	Preload__ResolveFile(lbl_8032929C);
	Preload__ResolveFile(lbl_803292B4);
	Preload__ResolveFile(lbl_803292C8);
	Preload__ResolveFile(lbl_803292DC);
	Preload__ResolveFile(lbl_803292F0);
	Preload__ResolveFile(lbl_80329300);
	return 1;
}
