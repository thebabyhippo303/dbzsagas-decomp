/* Path__Join @ 0x80180D5C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Path__Join @ 0x80180D5C (0x7C). ProDG -O2. */
extern char *strcpy(char *dst, const char *src);
extern char *strcat(char *dst, const char *src);

void Path__Join(const char *a, char *out, const char *b, const char *c) {
    char *p;

    strcpy(out, c);
    strcat(out, b);
    strcat(out, a);
    for (p = out; *p; p++) {
        if (*p == '\\') {
            *p = '/';
        }
    }
}
