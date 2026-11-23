/* CmdCon__AssignDirectoryString @ 0x8018C4B8 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Mem__DeleteArray(void *);
extern char *Mem__NewArray(int);
extern void String__TrimTrailingWhitespace(char *);
extern char *strcat(char *, const char *);
extern char *strcpy(char *, const char *);
extern int strlen(const char *);
extern char lbl_8033E9A4 __attribute__((section(".data")));

int CmdCon__AssignDirectoryString(void *self, char *str, char **dst) {
    char *t;
    if (*dst != 0) {
        Mem__DeleteArray(*dst);
    }
    *dst = 0;
    if (str == 0) {
        return 1;
    }
    while (*str == ' ') {
        str++;
    }
    if (*str == 0) {
        return 0;
    }
    t = Mem__NewArray(strlen(str) + 2);
    *dst = t;
    if (t == 0) {
        return 0;
    }
    strcpy(t, str);
    String__TrimTrailingWhitespace(*dst);
    if ((*dst)[strlen(*dst) - 1] != '\\') {
        strcat(*dst, &lbl_8033E9A4);
    }
    return 1;
}
