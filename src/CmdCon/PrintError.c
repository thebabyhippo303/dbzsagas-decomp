/* CmdCon__PrintError @ 0x80189AF0 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef int s32;

typedef struct { char gpr; char fpr; short pad; char *overflow; char *save; } va_list;

void CmdCon__VPrintAtLevel(void *, s32, s8 *, va_list);

void CmdCon__PrintError(void *ctx, s8 *fmt, ...) {
    CmdCon__VPrintAtLevel(ctx, 1, fmt, *(va_list *)__builtin_saveregs());
}
