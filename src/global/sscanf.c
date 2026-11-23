/* sscanf @ 0x80161318 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct VaListTag {
    unsigned char gpr;
    unsigned char fpr;
    unsigned char reserved[2];
    char *overflow_arg_area;
    char *reg_save_area;
} VaListTag;

typedef struct ScanState {
    char *str;
    int len;
    int pad8;
    short mode;
    short pad14;
    char *str2;
    int len2;
    int pad24;
    int pad28;
    int (*cb)(void);
    int pad36;
    int pad40;
    int pad44;
    int zero48;
    int pad52;
    int pad56;
    int pad60;
    int pad64;
    int pad68;
    int pad72;
    int zero76;
    int pad80;
    int pad84;
    int pad88;
    void *stdio;
} ScanState;

extern void *__builtin_saveregs(void);
extern void *__builtin_next_arg(void *);
extern int strlen(const char *s);
typedef struct { char gpr; char fpr; short pad; char *overflow; char *save; } va_s;
extern int Scanf__ParseInput(ScanState *st, const char *fmt, va_s *ap);
extern void *lbl_803DC9E8;
extern int fn_80161310(void);

int sscanf(const char *str, const char *fmt, ...) {
    va_s ap;
    ScanState st;
    int len;
    char *s = (char *)str;
    st.mode = 4;
    st.str = s;
    st.str2 = s;
    len = strlen(s);
    st.len = len;
    st.len2 = len;
    st.cb = fn_80161310;
    st.stdio = lbl_803DC9E8;
    st.zero48 = 0;
    st.zero76 = 0;
    ap = *(va_s *)__builtin_saveregs();
    return Scanf__ParseInput(&st, fmt, &ap);
}
