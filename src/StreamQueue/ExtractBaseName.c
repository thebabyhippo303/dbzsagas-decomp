/* StreamQueue__ExtractBaseName @ 0x80194E6C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int strlen(const char *);

void StreamQueue__ExtractBaseName(void *unused, char *path, char *out) {
    int i = strlen(path) - 1;
    int j;
    unsigned char c;
    while (i > 0 && path[i] != '\\') {
        i--;
    }
    if (path[i] == '\\') {
        i++;
    }
    c = path[i];
    j = 0;
    while (1) {
        signed char t = c;
        if (t == 0 || t == '.') break;
        out[j] = c;
        i++;
        c = path[i];
        j++;
    }
    out[j] = 0;
}
