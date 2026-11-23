/* Preload__CacheFrieza3Assets @ 0x8012CB94 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheFrieza3Assets @ 0x8012CB94 (0x74). ProDG -O2. */
extern char lbl_80328968[];
extern char lbl_80328980[];
extern char lbl_8032899C[];
extern char lbl_803289B4[];
extern char lbl_803289CC[];
extern char lbl_803289DC[];
extern char lbl_803289F0[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__ResolveFile(char *name);

int Preload__CacheFrieza3Assets(void) {
    Preload__LoadDblAsset(lbl_80328968);
    Preload__LoadDblAsset(lbl_80328980);
    Preload__LoadDblAsset(lbl_8032899C);
    Preload__ResolveFile(lbl_803289B4);
    Preload__ResolveFile(lbl_803289CC);
    Preload__ResolveFile(lbl_803289DC);
    Preload__ResolveFile(lbl_803289F0);
    return 1;
}
