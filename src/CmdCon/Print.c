/* CmdCon__Print @ 0x80189A54 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef int s32;
typedef struct { char gpr; char fpr; short pad; char *overflow; char *save; } va_s;
void CmdCon__VPrintAtLevel(void *, s32, s8 *, va_s);
void CmdCon__Print(void *arg0, s8 *arg1, ...) {
    CmdCon__VPrintAtLevel(arg0, 0, arg1, *(va_s *)__builtin_saveregs());
}
