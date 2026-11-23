/* Assert_Fail @ 0x8017E464 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Assert_Fail @ 0x8017E464 (0x38). ProDG -O2. docs/compiler.md */
typedef void (*AssertHandler)(const char *expr, const char *file, int line, int extra);
extern AssertHandler lbl_803DCB40;
void Assert_Display(const char *expr, const char *file, int line, int extra);

void Assert_Fail(const char *expr, const char *file, int line, int extra) {
    if (lbl_803DCB40 == 0)
        Assert_Display(expr, file, line, extra);
    else
        lbl_803DCB40(expr, file, line, extra);
}
