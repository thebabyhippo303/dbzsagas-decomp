/* Preload__CacheTrunks1Assets @ 0x8012DAB0 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheTrunks1Assets @ 0x8012DAB0 (0x68). ProDG -O2. */
extern char lbl_803299F4[];
extern char lbl_80329A0C[];
extern char lbl_80329A28[];
extern char lbl_80329A30[];
extern char lbl_80329A48[];
extern char lbl_80329A5C[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);
extern void Preload__CacheTrunksParticles(void);

void Preload__CacheTrunks1Assets(void) {
    Preload__LoadDblAsset(lbl_803299F4);
    Preload__LoadDblAsset(lbl_80329A0C);
    Preload__RegisterBank(lbl_80329A28);
    Preload__ResolveFile(lbl_80329A30);
    Preload__ResolveFile(lbl_80329A48);
    Preload__ResolveFile(lbl_80329A5C);
    Preload__CacheTrunksParticles();
}
