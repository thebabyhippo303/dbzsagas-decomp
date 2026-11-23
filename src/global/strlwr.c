/* strlwr @ 0x802CE7D4 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;

extern u8 lbl_8033C9D9[] __attribute__((section(".data")));

char *strlwr(char *s) {
    char *p;
    s8 c;

    p = s;
    if (*s == 0) {
        return s;
    }
    do {
        c = *p;
        if (c[(u8 *)lbl_8033C9D9] & 1) {
            *p = (char)(c + 32);
        }
    } while (*++p != 0);
    return s;
}
