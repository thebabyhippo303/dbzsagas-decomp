/* Preload__CacheHenchman2Assets @ 0x8012D194 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheHenchman2Assets @ 0x8012D194 (0x80). ProDG -O2. */
extern char lbl_80328F04[];
extern char lbl_80328F20[];
extern char lbl_80328E80[];
extern char lbl_80328F3C[];
extern char lbl_80328F58[];
extern char lbl_80328F68[];
extern char lbl_80328F78[];
extern char lbl_80328F8C[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheHenchman2Assets(void) {
    Preload__LoadDblAsset(lbl_80328F04);
    Preload__LoadDblAsset(lbl_80328F20);
    Preload__LoadDblAsset(lbl_80328E80);
    Preload__ResolveFile(lbl_80328F3C);
    Preload__ResolveFile(lbl_80328F58);
    Preload__ResolveFile(lbl_80328F68);
    Preload__ResolveFile(lbl_80328F78);
    Preload__ResolveFile(lbl_80328F8C);
    return 1;
}
