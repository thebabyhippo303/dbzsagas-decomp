/* Preload__CacheDendeAssetsAndScripts @ 0x8012E510 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheDendeAssetsAndScripts @ 0x8012E510 (0x80). ProDG -O2. */
extern void Preload__LoadDblAsset(char *name);

extern char lbl_8032A658[];
extern char lbl_8032735C[];
extern char lbl_8032A670[];
extern char lbl_8032A68C[];
extern char lbl_8032A6A8[];
extern char lbl_8032A6C4[];
extern char lbl_8032A6E0[];
extern char lbl_8032A6FC[];

int Preload__CacheDendeAssetsAndScripts(void) {
	Preload__LoadDblAsset(lbl_8032A658);
	Preload__LoadDblAsset(lbl_8032735C);
	Preload__LoadDblAsset(lbl_8032A670);
	Preload__LoadDblAsset(lbl_8032A68C);
	Preload__LoadDblAsset(lbl_8032A6A8);
	Preload__LoadDblAsset(lbl_8032A6C4);
	Preload__LoadDblAsset(lbl_8032A6E0);
	Preload__LoadDblAsset(lbl_8032A6FC);
	return 1;
}
