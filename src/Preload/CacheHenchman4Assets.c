/* Preload__CacheHenchman4Assets @ 0x8012D27C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CacheHenchman4Assets @ 0x8012D27C (0x80). ProDG -O2. */
extern char lbl_80329018[];
extern char lbl_80329034[];
extern char lbl_80328E80[];
extern char lbl_80329050[];
extern char lbl_80328F58[];
extern char lbl_80328F68[];
extern char lbl_8032906C[];
extern char lbl_80329080[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__ResolveFile(char *path);

int Preload__CacheHenchman4Assets(void) {
    Preload__LoadDblAsset(lbl_80329018);
    Preload__LoadDblAsset(lbl_80329034);
    Preload__LoadDblAsset(lbl_80328E80);
    Preload__ResolveFile(lbl_80329050);
    Preload__ResolveFile(lbl_80328F58);
    Preload__ResolveFile(lbl_80328F68);
    Preload__ResolveFile(lbl_8032906C);
    Preload__ResolveFile(lbl_80329080);
    return 1;
}
