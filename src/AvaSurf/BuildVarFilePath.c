/* AvaSurf__BuildVarFilePath @ 0x80151F74 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */

typedef signed char s8;
#define NULL 0
void *fn_80184348(int size);
void fn_801843CC(void *block);
int strlen(const char *s);
int sprintf(char *dst, const char *fmt, ...);
extern char lbl_80332EE8[];
extern char *lbl_803DC724;
struct Surf { char pad[0x18]; char *path; };

void AvaSurf__BuildVarFilePath(struct Surf *self, s8 *name) {
    s8 *cursor;
    s8 ch;
    void *old;
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

    old = *(void **)((char *)self + 0x18);
    if (old != NULL) {
        fn_801843CC(old);
    }

    buf = fn_80184348(strlen(name) + strlen(lbl_803DC724) + 5);
    self->path = buf;
    sprintf(buf, lbl_80332EE8, lbl_803DC724, name);

}
