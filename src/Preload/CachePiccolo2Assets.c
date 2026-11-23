/* Preload__CachePiccolo2Assets @ 0x8012D5B4 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__CachePiccolo2Assets @ 0x8012D5B4 (0x5C). ProDG -O2. */
extern char lbl_803393B0[];
extern char lbl_803393C8[];
extern char lbl_80339348[];
extern char lbl_803393E4[];
extern char lbl_803393F0[];
extern void Preload__LoadDblAsset(char *path);
extern void Preload__RegisterBank(char *name);
extern void fn_8012E9E0(char *path);

int Preload__CachePiccolo2Assets(void) {
    Preload__LoadDblAsset(lbl_803393B0);
    Preload__LoadDblAsset(lbl_803393C8);
    Preload__LoadDblAsset(lbl_80339348);
    Preload__RegisterBank(lbl_803393E4);
    fn_8012E9E0(lbl_803393F0);
    return 1;
}
