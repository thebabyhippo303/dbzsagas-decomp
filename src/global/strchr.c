/* strchr @ 0x802CE738 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
char *strchr(const char *s, int ch) {
    const char *p = s;
    unsigned c = (unsigned char)ch;
    unsigned w;
    unsigned v;
    unsigned t;
    unsigned *wp;
    unsigned mask;
    int i;
    int b;
    if (((unsigned)s & 3) == 0) {
        w = 0;
        for (i = 0; i < 4; i++) {
            w = (w << 8) | c;
        }
        wp = (unsigned *)s;
        v = *wp;
        mask = 0x80808080;
        goto test;
    top:
        wp++;
        v = *wp;
    test:
        if ((v - 0x01010101) & ~v & mask) {
            p = (const char *)wp;
            goto bytes;
        }
        t = v ^ w;
        if (!((t - 0x01010101) & ~t & mask)) {
            goto top;
        }
        p = (const char *)wp;
    }
bytes:
    b = *(unsigned char *)p;
    while (b != 0 && b != (int)c) {
        p++;
        b = *(unsigned char *)p;
    }
    if (*(unsigned char *)p == c) {
        return (char *)p;
    }
    return 0;
}
