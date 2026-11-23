/* Preload__CachePiccolo1Assets @ 0x8012D540 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CachePiccolo1Assets @ 0x8012D540 (0x74). ProDG -O2. */
extern char lbl_80329314[];
extern char lbl_8032932C[];
extern char lbl_80329348[];
extern char lbl_80329360[];
extern char lbl_8032936C[];
extern char lbl_80329384[];
extern char lbl_80329398[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__RegisterBank(char *name);
extern void Preload__ResolveFile(char *name);

int Preload__CachePiccolo1Assets(void) {
    Preload__LoadDblAsset(lbl_80329314);
    Preload__LoadDblAsset(lbl_8032932C);
    Preload__LoadDblAsset(lbl_80329348);
    Preload__RegisterBank(lbl_80329360);
    Preload__ResolveFile(lbl_8032936C);
    Preload__ResolveFile(lbl_80329384);
    Preload__ResolveFile(lbl_80329398);
    return 1;
}
