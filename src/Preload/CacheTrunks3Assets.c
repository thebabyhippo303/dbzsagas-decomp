/* Preload__CacheTrunks3Assets @ 0x8012DB68 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheTrunks3Assets @ 0x8012DB68 (0x50). ProDG -O2. */
extern char lbl_80329AC4[];
extern char lbl_80329ADC[];
extern char lbl_80329AF8[];
extern char lbl_80329B00[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void fn_8012E9E0(char *name);
extern void *Preload__ResolveFile(char *path);
extern void Preload__CacheTrunksParticles(void);

void Preload__CacheTrunks3Assets(void) {
    Preload__LoadDblAsset(lbl_80329AC4);
    Preload__LoadDblAsset(lbl_80329ADC);
    Preload__RegisterBank(lbl_80329AF8);
    fn_8012E9E0(lbl_80329B00);
    Preload__CacheTrunksParticles();
}
