/* Assert_FormatMessage @ 0x8017E49C (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct __va_list_tag {
    unsigned char gpr;
    unsigned char fpr;
    unsigned char reserved[2];
    char *overflow_arg_area;
    char *reg_save_area;
} __va_list[1];

extern char lbl_803A1B5C[] __attribute__((section(".data")));
extern int vsprintf(char *buf, const char *fmt, __va_list ap);
extern void *__builtin_saveregs(void);

char *Assert_FormatMessage(const char *fmt, ...) {
    __va_list ap;

    __builtin_next_arg(fmt);
    __builtin_memcpy(ap, __builtin_saveregs(), sizeof(__va_list));
    vsprintf(lbl_803A1B5C, fmt, ap);
    return lbl_803A1B5C;
}
