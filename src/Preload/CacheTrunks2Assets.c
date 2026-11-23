/* Preload__CacheTrunks2Assets @ 0x8012DB18 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheTrunks2Assets @ 0x8012DB18 (0x50). ProDG -O2. */
extern char lbl_80329A70[];
extern char lbl_80329A88[];
extern char lbl_80329AA4[];
extern char lbl_80329AAC[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void fn_8012E9E0(char *name);
extern void Preload__CacheTrunksParticles(void);

void Preload__CacheTrunks2Assets(void) {
    Preload__LoadDblAsset(lbl_80329A70);
    Preload__LoadDblAsset(lbl_80329A88);
    Preload__RegisterBank(lbl_80329AA4);
    fn_8012E9E0(lbl_80329AAC);
    Preload__CacheTrunksParticles();
}
