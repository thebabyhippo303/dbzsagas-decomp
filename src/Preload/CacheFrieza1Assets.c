/* Preload__CacheFrieza1Assets @ 0x8012CAB8 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheFrieza1Assets @ 0x8012CAB8 (0x74). ProDG -O2. */
extern char lbl_80328858[];
extern char lbl_80328870[];
extern char lbl_8032888C[];
extern char lbl_803288A4[];
extern char lbl_803288BC[];
extern char lbl_803288CC[];
extern char lbl_803288E0[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__ResolveFile(char *name);

int Preload__CacheFrieza1Assets(void) {
    Preload__LoadDblAsset(lbl_80328858);
    Preload__LoadDblAsset(lbl_80328870);
    Preload__LoadDblAsset(lbl_8032888C);
    Preload__ResolveFile(lbl_803288A4);
    Preload__ResolveFile(lbl_803288BC);
    Preload__ResolveFile(lbl_803288CC);
    Preload__ResolveFile(lbl_803288E0);
    return 1;
}
