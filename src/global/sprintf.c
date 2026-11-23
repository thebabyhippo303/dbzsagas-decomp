/* sprintf @ 0x80161238 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct BufFile {
    char *cursor;
    int unused;
    int limitA;
    short flags;
    short unused2;
    char *base;
    int limitB;
    char pad[68];
    void *dispatch;
} BufFile;
typedef struct { char gpr; char fpr; short pad; char *overflow; char *save; } va_s;

extern void *lbl_803DC9C8;
extern int Printf__DispatchByConversion(BufFile *file, const char *fmt, va_s *ap);

void sprintf(char *dst, const char *fmt, ...) {
    va_s ap;
    BufFile file;
    int lim = 0x7fffffff;
    file.flags = 520;
    file.cursor = dst;
    file.limitA = lim;
    file.base = dst;
    file.limitB = lim;
    file.dispatch = lbl_803DC9C8;
    ap = *(va_s *)__builtin_saveregs();
    Printf__DispatchByConversion(&file, fmt, &ap);
    *file.cursor = 0;
}
