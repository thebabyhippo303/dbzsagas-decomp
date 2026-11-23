/* Preload__CacheGohan5Assets @ 0x8012CD78 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheGohan5Assets @ 0x8012CD78 (0x50). ProDG -O2. */
extern char lbl_80328B78[];
extern char lbl_80328B90[];
extern char lbl_80328BAC[];
extern char lbl_80328BB4[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void fn_8012E9E0(char *name);
extern void Preload__CacheGohanParticles(void);

void Preload__CacheGohan5Assets(void) {
    Preload__LoadDblAsset(lbl_80328B78);
    Preload__LoadDblAsset(lbl_80328B90);
    Preload__RegisterBank(lbl_80328BAC);
    fn_8012E9E0(lbl_80328BB4);
    Preload__CacheGohanParticles();
}
