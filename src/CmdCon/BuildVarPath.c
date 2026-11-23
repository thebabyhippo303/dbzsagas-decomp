/* CmdCon__BuildVarPath @ 0x8018C594 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CmdCon__BuildVarPath @ 0x8018C594 (0xC4). */
extern int fn_8018C658(const char *path);
extern void fn_8018C378(char *path);
extern char *strcpy(char *dst, const char *src);
extern char *strcat(char *dst, const char *src);
extern int strlen(const char *s);

typedef struct {
    char pad[0x24];
    char *base;
} CmdCon;

void CmdCon__BuildVarPath(CmdCon *self, const char *name, char *out) {
    int index;
    char *cursor;
    char ch;

    if ((fn_8018C658(name) != 0) || (self->base == 0)) {
        strcpy(out, name);
    } else {
        strcpy(out, self->base);
        strcat(out, name);
    }
    fn_8018C378(out);
    index = strlen(out) - 5;
    if (index < 0) {
        index = 0;
    }
    ch = out[index];
    cursor = out + index;
    if (ch != 0) {
        do {
            if (*cursor == '.') {
                return;
            }
            ch = *++cursor;
        } while (ch != 0);
    }
    strcat(out, ".var");
}
