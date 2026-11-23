/* Dba__BuildPath @ 0x801930A0 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *strcpy(char *dst, const char *src);
extern char *strcat(char *dst, const char *src);
extern int strlen(const char *s);
extern int String__CompareIgnoreCase(const char *left, const char *right);
extern char lbl_8033F448[] __attribute__((section(".data")));
extern char lbl_8033F44C[] __attribute__((section(".data")));

void Dba__BuildPath(const char *name, const char *dir, char *out) {
    int len;

    if (dir == 0) {
        strcpy(out, name);
    } else {
        strcpy(out, dir);
        len = strlen(out);
        if (len > 0 && out[len - 1] != '\\') {
            strcat(out, lbl_8033F448);
        }
        strcat(out, name);
    }
    len = strlen(out) - 4;
    if (len < 0 || String__CompareIgnoreCase(out + len, lbl_8033F44C) != 0) {
        strcat(out, lbl_8033F44C);
    }
}
