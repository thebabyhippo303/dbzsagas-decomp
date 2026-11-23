/* Preload__CachePrototype1Assets @ 0x8012D610 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CachePrototype1Assets @ 0x8012D610 (0x68). ProDG -O2. */
extern void Preload__LoadDblAsset(const char *path);
extern void Preload__ResolveFile(const char *path);

int Preload__CachePrototype1Assets(void) {
	Preload__LoadDblAsset("characters\\prototype1.dbl");
	Preload__LoadDblAsset("sprites\\faces\\prototype1.dbl");
	Preload__LoadDblAsset("particles\\prototype.dbp");
	Preload__ResolveFile("characters\\prototype1.var");
	Preload__ResolveFile("var\\AGruntAI.var");
	Preload__ResolveFile("var\\AGruntAIp.var");
	return 1;
}
