/* Preload__CacheFrieza2Assets @ 0x8012CB2C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_803388F4[];
extern char lbl_8033890C[];
extern char lbl_8033888C[];
extern char lbl_80338928[];
extern char lbl_80338940[];
extern char lbl_80338954[];
extern void Preload__LoadDblAsset(char *name);
extern void Preload__ResolveFile(char *name);

int Preload__CacheFrieza2Assets(void) {
    Preload__LoadDblAsset(lbl_803388F4);
    Preload__LoadDblAsset(lbl_8033890C);
    Preload__LoadDblAsset(lbl_8033888C);
    Preload__ResolveFile(lbl_80338928);
    Preload__ResolveFile(lbl_80338940);
    Preload__ResolveFile(lbl_80338954);
    return 1;
}
