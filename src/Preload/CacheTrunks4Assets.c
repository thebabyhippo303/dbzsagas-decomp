/* Preload__CacheTrunks4Assets @ 0x8012DC08 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheTrunks4Assets @ 0x8012DC08 (0x50). ProDG -O2. */
extern char lbl_80329B70[];
extern char lbl_80329B88[];
extern char lbl_80329BA4[];
extern char lbl_80329BAC[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void fn_8012E9E0(char *name);
extern void Preload__CacheTrunksParticles(void);

void Preload__CacheTrunks4Assets(void) {
    Preload__LoadDblAsset(lbl_80329B70);
    Preload__LoadDblAsset(lbl_80329B88);
    Preload__RegisterBank(lbl_80329BA4);
    fn_8012E9E0(lbl_80329BAC);
    Preload__CacheTrunksParticles();
}
