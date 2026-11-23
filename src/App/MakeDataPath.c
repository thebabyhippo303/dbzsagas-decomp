/* App__MakeDataPath @ 0x801801A0 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: App__MakeDataPath @ 0x801801A0 (0x38). ProDG -O2. */
extern char lbl_803A0EE0[];
extern char *App__BuildDataPath(const char *path, char *dest, int gcn);

char *App__MakeDataPath(const char *path) {
    App__BuildDataPath(path, lbl_803A0EE0, 0);
    return lbl_803A0EE0;
}
