/* Path__StripExtension @ 0x80188654 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int strlen(const char *);

void Path__StripExtension(char *path) {
    int i = strlen(path);

    while (--i > 0) {
        char c = path[i];
        if (c == '\\') {
            break;
        }
        if (c == '.') {
            path[i] = 0;
            break;
        }
    }
}
