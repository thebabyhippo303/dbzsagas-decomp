/* strstr @ 0x802CE8F8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
char *strstr(char *s, char *p) {
    char *q = s;
    if (*q == 0) {
        if (*p != 0)
            return 0;
        return q;
    }
    while (*q != 0) {
        int i = 0;
        for (;;) {
            char c = p[i];
            if (c == 0)
                return q;
            if (c != q[i])
                break;
            i++;
        }
        q++;
    }
    return 0;
}
