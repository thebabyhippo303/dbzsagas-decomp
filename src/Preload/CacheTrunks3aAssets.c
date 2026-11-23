/* Preload__CacheTrunks3aAssets @ 0x8012DBB8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheTrunks3aAssets @ 0x8012DBB8 (0x50). ProDG -O2. */
extern char lbl_80329B18[];
extern char lbl_80329B30[];
extern char lbl_80329B4C[];
extern char lbl_80329B58[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void fn_8012E9E0(char *name);
extern void Preload__CacheTrunksParticles(void);

void Preload__CacheTrunks3aAssets(void) {
    Preload__LoadDblAsset(lbl_80329B18);
    Preload__LoadDblAsset(lbl_80329B30);
    Preload__RegisterBank(lbl_80329B4C);
    fn_8012E9E0(lbl_80329B58);
    Preload__CacheTrunksParticles();
}
