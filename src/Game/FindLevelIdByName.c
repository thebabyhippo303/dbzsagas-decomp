/* Game__FindLevelIdByName @ 0x800079B0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__FindLevelIdByName @ 0x800079B0 (0x64). ProDG -O2. */
typedef int s32;

extern int String__CompareIgnoreCase(const char *a, const char *b);
extern char *lbl_8035E640[] __attribute__((section(".data")));

s32 Game__FindLevelIdByName(void *arg0, char *name) {
    char *entry;
    s32 index;
    char *cur;

    entry = (char *)lbl_8035E640;
    index = 0;
    do {
        cur = *(char **)entry;
        entry += 0x20;
        if (String__CompareIgnoreCase(cur, name) != 0) {
            index += 1;
            if (index > 0x22) {
                return -1;
            }
        } else {
            return index;
        }
    } while (1);
}
