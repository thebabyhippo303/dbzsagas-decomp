/* Game__BuildCurrentWorldAssetPath @ 0x8001E690 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__BuildCurrentWorldAssetPath @ 0x8001E690 (0x74). ProDG -O2. */
typedef int s32;

extern void *Game__GetCurrentLevelDescriptor(void *arg0);
extern char *strcat(char *dst, const char *src);
extern char lbl_8030FDBC[] __attribute__((section(".data")));
extern char lbl_8030FDC4[] __attribute__((section(".data")));

char *Game__BuildCurrentWorldAssetPath(void *arg0, char *arg1, char *arg2) {
    char *src;
    s32 word0;
    s32 word1;

    src = lbl_8030FDBC;
    word0 = *(s32 *)lbl_8030FDBC;
    word1 = *(s32 *)(src + 4);
    *(s32 *)(arg1 + 0) = word0;
    *(s32 *)(arg1 + 4) = word1;
    strcat(arg1, Game__GetCurrentLevelDescriptor(arg0));
    strcat(arg1, lbl_8030FDC4);
    strcat(arg1, arg2);
    return arg1;
}
