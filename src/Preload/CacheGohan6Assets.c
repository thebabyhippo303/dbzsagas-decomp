/* Preload__CacheGohan6Assets @ 0x8012CDC8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_80328BCC[];
extern char lbl_80328BE4[];
extern char lbl_80328C00[];
extern char lbl_80328C08[];
extern char lbl_80328C20[];
extern char lbl_80328C30[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);
extern void Preload__CacheGohanParticles(void);

void Preload__CacheGohan6Assets(void) {
    Preload__LoadDblAsset(lbl_80328BCC);
    Preload__LoadDblAsset(lbl_80328BE4);
    Preload__RegisterBank(lbl_80328C00);
    Preload__ResolveFile(lbl_80328C08);
    Preload__ResolveFile(lbl_80328C20);
    Preload__ResolveFile(lbl_80328C30);
    Preload__CacheGohanParticles();
}
