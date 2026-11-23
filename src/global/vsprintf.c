/* vsprintf @ 0x802CE430 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
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

extern void *lbl_803DC9E8;
extern int Printf__DispatchByConversion(BufFile *file, const char *fmt, void *ap);

int vsprintf(char *dst, const char *fmt, void *ap) {
    BufFile file;
    int result;
    int lim;
    void *dispatch;

    dispatch = lbl_803DC9E8;
    lim = 0x7fffffff;
    file.limitB = lim;
    file.flags = 520;
    file.base = dst;
    file.dispatch = dispatch;
    file.cursor = dst;
    file.limitA = lim;
    result = Printf__DispatchByConversion(&file, fmt, ap);
    *file.cursor = 0;
    return result;
}
