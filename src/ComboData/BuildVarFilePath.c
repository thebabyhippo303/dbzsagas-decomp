/* ComboData__BuildVarFilePath @ 0x801515AC (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;

void *fn_80184348(int size);
void fn_801843CC(void *block);
int strlen(const char *s);
int sprintf(char *dst, const char *fmt, ...);

extern char lbl_80332EE8[];
extern char *lbl_803DC720;

typedef struct ComboData {
    char pad[0x18];
    char *varPath;
} ComboData;

void ComboData__BuildVarFilePath(ComboData *self, s8 *name) {
    s8 *cursor;
    s8 ch;
    char *old;
    char *buf;

    ch = *name;
    cursor = name;
    if (ch != 0) {
        if (ch == '.') {
            *name = 0;
        } else {
            do {
                ch = *++cursor;
                if (ch == 0) {
                    break;
                }
            } while (ch != '.');
            if (ch != 0) {
                *cursor = 0;
            }
        }
    }
    old = self->varPath;
    if (old != 0) {
        fn_801843CC(old);
    }
    buf = fn_80184348(strlen(name) + strlen(lbl_803DC720) + 5);
    self->varPath = buf;
    sprintf(buf, lbl_80332EE8, lbl_803DC720, name);
}
