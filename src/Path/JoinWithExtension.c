/* Path__JoinWithExtension @ 0x8025265C (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Path__JoinWithExtension @ 0x8025265C (0x10C). ProDG -O2. */
char *strcpy(char *dst, const char *src);
unsigned int strlen(const char *s);
char *strcat(char *dst, const char *src);
char *strrchr(const char *s, int c);
char *strchr(const char *s, int c);

extern char lbl_80347D94 __attribute__((section(".data")));
extern char lbl_80347DAC __attribute__((section(".data")));

char *Path__JoinWithExtension(char *out, char *path, char *name, char *ext) {
    char *scan;

    if (path == 0) {
        *out = 0;
    } else {
        strcpy(out, path);
        if (strlen(out) != 0) {
            if (out[strlen(out) - 1] != '\\') {
                strcat(out, &lbl_80347D94);
            }
        }
    }
    strcat(out, name);
    if (ext != 0) {
        scan = strrchr(name, '\\');
        if (scan == 0) {
            scan = name;
        }
        if (strchr(scan, '.') == 0) {
            strcat(out, &lbl_80347DAC);
            strcat(out, ext);
        }
    }
    {
        char *cursor = out;
        if (*out != 0) {
            do {
                if (*cursor == '/') {
                    *cursor = '\\';
                }
            } while (*++cursor != 0);
        }
    }
    return out;
}
