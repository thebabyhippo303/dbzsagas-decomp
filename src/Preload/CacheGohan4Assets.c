/* Preload__CacheGohan4Assets @ 0x8012CD28 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheGohan4Assets @ 0x8012CD28 (0x50). ProDG -O2. */
extern void Preload__LoadDblAsset(const char *path);
extern void Preload__RegisterBank(const char *name);
extern void fn_8012E9E0(const char *path);
extern void Preload__CacheGohanParticles(void);

void Preload__CacheGohan4Assets(void) {
	Preload__LoadDblAsset("characters\\gohan4.dbl");
	Preload__LoadDblAsset("sprites\\faces\\gohan4.dbl");
	Preload__RegisterBank("gohan4");
	fn_8012E9E0("characters\\gohan4.var");
	Preload__CacheGohanParticles();
}
