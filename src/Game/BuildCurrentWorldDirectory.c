/* Game__BuildCurrentWorldDirectory @ 0x8001E62C (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
extern char *strcat(char *, const char *);
extern char *Game__GetCurrentLevelDescriptor(void *);
extern char lbl_8030FDC4 __attribute__((section(".data")));
extern s32 lbl_8030FDBC[2] __attribute__((section(".data")));
char *Game__BuildCurrentWorldDirectory(void *game, char *directory) {
    s32 *d = (s32 *)directory;
    s32 a = lbl_8030FDBC[0];
    s32 b = lbl_8030FDBC[1];
    d[0] = a;
    d[1] = b;
    strcat(directory, Game__GetCurrentLevelDescriptor(game));
    strcat(directory, &lbl_8030FDC4);
    return directory;
}
