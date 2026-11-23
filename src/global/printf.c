/* printf @ 0x802CE350 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct __va_list_tag {
    unsigned char gpr;
    unsigned char fpr;
    unsigned char reserved[2];
    char *overflow_arg_area;
    char *reg_save_area;
} __va_list[1];

typedef struct StdioSlot {
    char pad[8];
    void *file;
} StdioSlot;

extern void *__builtin_saveregs(void);
extern StdioSlot *lbl_803DC9E8;
extern int Printf__DispatchByConversion(void *file, const char *fmt, __va_list ap);

int printf(const char *fmt, ...) {
    __va_list ap;
    StdioSlot *out;

    __builtin_next_arg(fmt);
    __builtin_memcpy(ap, __builtin_saveregs(), sizeof(__va_list));
    out = lbl_803DC9E8;
    *(StdioSlot **)((char *)out->file + 92) = out;
    return Printf__DispatchByConversion(out->file, fmt, ap);
}
