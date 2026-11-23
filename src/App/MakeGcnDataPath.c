/* App__MakeGcnDataPath @ 0x80180168 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: App__MakeGcnDataPath @ 0x80180168 (0x38). ProDG -O2. */
extern char lbl_803A0DE0[] __attribute__((section(".data")));
extern char *App__BuildDataPath(const char *path, char *dest, int gcn);

char *App__MakeGcnDataPath(const char *path) {
    App__BuildDataPath(path, lbl_803A0DE0, 1);
    return lbl_803A0DE0;
}
