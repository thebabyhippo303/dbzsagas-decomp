/* Pickup__FindIdByName @ 0x800F2A94 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__FindIdByName @ 0x800F2A94 (0x60). ProDG -O2. */
typedef int s32;

extern int strcmp(const char *a, const char *b);
extern char lbl_8033B8AC[] __attribute__((section(".data")));

s32 Pickup__FindIdByName(void *arg0, char *name) {
    char *entry;
    char *end;

    entry = lbl_8033B8AC;
    end = lbl_8033B8AC + 0x48;
    do {
        if (strcmp(*(char **)entry, name) != 0) {
            entry += 0xC;
            if (entry > end) {
                return -1;
            }
        } else {
            return *(s32 *)(entry + 8);
        }
    } while (1);
}
