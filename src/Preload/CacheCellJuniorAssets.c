/* Preload__CacheCellJuniorAssets @ 0x8012C95C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheCellJuniorAssets @ 0x8012C95C (0x68). ProDG -O2. */
extern void Preload__LoadDblAsset(const char *path);
extern void Preload__ResolveFile(const char *path);

int Preload__CacheCellJuniorAssets(void) {
	Preload__LoadDblAsset("characters\\celljunior.dbl");
	Preload__LoadDblAsset("sprites\\faces\\cell_junior.dbl");
	Preload__LoadDblAsset("particles\\celljr.dbp");
	Preload__ResolveFile("characters\\celljunior.var");
	Preload__ResolveFile("var\\celljrai.var");
	Preload__ResolveFile("var\\celljraip.var");
	return 1;
}
