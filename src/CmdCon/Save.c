/* CmdCon__Save @ 0x8018BDC4 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CmdCon__Save @ 0x8018BDC4 (0x24). */
typedef struct {
    char pad[0x10];
    void *context;
} CmdConSave;

extern void CmdCon__SaveContextScript(void *self, void *context);

void CmdCon__Save(CmdConSave *self) {
    CmdCon__SaveContextScript(self, self->context);
}
