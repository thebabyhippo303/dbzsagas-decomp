/* Preload__CacheTrunks5Assets @ 0x8012DC58 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheTrunks5Assets @ 0x8012DC58 (0x50). ProDG -O2. */
extern char lbl_80329BC4[];
extern char lbl_80329BDC[];
extern char lbl_80329BF8[];
extern char lbl_80329C00[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void fn_8012E9E0(char *name);
extern void Preload__CacheTrunksParticles(void);

void Preload__CacheTrunks5Assets(void) {
    Preload__LoadDblAsset(lbl_80329BC4);
    Preload__LoadDblAsset(lbl_80329BDC);
    Preload__RegisterBank(lbl_80329BF8);
    fn_8012E9E0(lbl_80329C00);
    Preload__CacheTrunksParticles();
}
