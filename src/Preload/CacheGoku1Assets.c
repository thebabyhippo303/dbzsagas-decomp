/* Preload__CacheGoku1Assets @ 0x8012CE98 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheGoku1Assets @ 0x8012CE98 (0x80). ProDG -O2. */
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);
extern void Preload__CacheGokuParticles(void);

extern char lbl_80328C94[];
extern char lbl_80326960[];
extern char lbl_80328CAC[];
extern char lbl_80328CB4[];
extern char lbl_80328C20[];
extern char lbl_80328C30[];
extern char lbl_80328CCC[];
extern char lbl_80328CDC[];

void Preload__CacheGoku1Assets(void) {
	Preload__LoadDblAsset(lbl_80328C94);
	Preload__LoadDblAsset(lbl_80326960);
	Preload__RegisterBank(lbl_80328CAC);
	Preload__ResolveFile(lbl_80328CB4);
	Preload__ResolveFile(lbl_80328C20);
	Preload__ResolveFile(lbl_80328C30);
	Preload__ResolveFile(lbl_80328CCC);
	Preload__ResolveFile(lbl_80328CDC);
	Preload__CacheGokuParticles();
}
