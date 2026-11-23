/* strrchr @ 0x80163C68 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
char *strrchr(const char *s, int c) {
    const char *last = 0;
    char ch = (char)c;
    while (*s != 0) {
        if (*s == ch) {
            last = s;
        }
        s++;
    }
    if (*s == ch) {
        last = s;
    }
    return (char *)last;
}
