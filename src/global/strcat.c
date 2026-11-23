/* strcat @ 0x8016380C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef signed char s8;

char *strcpy(char *dest, const char *src);

char *strcat(char *dest, const char *src) {
    u32 word;
    u32 next;
    char *p;

    p = dest;
    if (((u32)p & 3) == 0) {
        word = *(const u32 *)p;
        if (((word + 0xFEFEFEFFu) & ~word & 0x80808080u) == 0) {
            do {
                p += 4;
                next = *(const u32 *)p;
            } while (((next + 0xFEFEFEFFu) & ~next & 0x80808080u) == 0);
        }
    }
    if (*p != 0) {
        do {
            p++;
        } while (*p != 0);
    }
    strcpy(p, src);
    return dest;
}
