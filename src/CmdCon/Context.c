/* CmdCon__Context @ 0x8018B680 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef signed char s8;

typedef struct {
    s32 *items;
    s32 count;
} ContextList;

typedef struct {
    char pad0[8];
    ContextList *contexts;
    char pad1[4];
    s32 current;
} CmdCon;

void CmdCon__Print(CmdCon *, char *, ...);
s32 CmdCon__SelectContext(CmdCon *, char *);
void CmdCon__PrintNotify(CmdCon *, char *, ...);
void CmdCon__PrintError(CmdCon *, char *, ...);
extern char lbl_8033E728[] __attribute__((section(".data")));
extern char lbl_8033E738[] __attribute__((section(".data")));
extern char lbl_8033E748[] __attribute__((section(".data")));
extern char lbl_8033E760[] __attribute__((section(".data")));

s32 CmdCon__Context(CmdCon *self, s32 unused, char *name) {
    s32 *first;
    s32 count;
    s32 result;
    s32 c;
    s32 cur;

    c = (s8)*name;
    if (c == 0) {
        count = self->contexts->count;
        if (c >= count || count == 0) {
            first = 0;
        } else {
            first = self->contexts->items;
        }
        cur = self->current;
        if (cur == *first) {
            CmdCon__Print(self, lbl_8033E728, cur);
        } else {
            CmdCon__Print(self, lbl_8033E738, cur);
        }
        return 1;
    }
    result = CmdCon__SelectContext(self, name);
    if (result != 0) {
        CmdCon__PrintNotify(self, lbl_8033E748, name);
    } else {
        CmdCon__PrintError(self, lbl_8033E760, name);
    }
    return result;
}
