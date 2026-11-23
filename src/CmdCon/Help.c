/* CmdCon__Help @ 0x8018B97C (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct CmdEntry { int pad0; int pad4; char *name; char *help; } CmdEntry;
typedef struct CmdCon { char pad[0x1C]; CmdEntry *cmds; int count; } CmdCon;
extern void CmdCon__Print(void *con, const char *fmt, ...);
extern char lbl_8033E81C[] __attribute__((section(".data")));
extern char lbl_8033E828[] __attribute__((section(".data")));
extern char lbl_8033E708[] __attribute__((section(".data")));

int CmdCon__Help(CmdCon *self) {
    int i;
    CmdCon__Print(self, lbl_8033E81C);
    for (i = 0; i < self->count; i++) {
        CmdEntry *e = (CmdEntry *)(i * 16 + (int)self->cmds);
        CmdCon__Print(self, lbl_8033E828, e->name, e->help);
    }
    CmdCon__Print(self, lbl_8033E708);
    return 1;
}
