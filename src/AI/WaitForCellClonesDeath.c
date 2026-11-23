/* AI__WaitForCellClonesDeath @ 0x80045C58 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad0[0x7E4];
    int state;
    char pad1[0xB8C - 0x7E8];
    void *component;
} AI;

extern int Script__PopInt(void *script, void *context);
extern void AI__SetWaitForCellClonesDeath(void *component, int wait);

void AI__WaitForCellClonesDeath(void *script, void *context) {
    AI *ai = (AI *)Script__PopInt(script, context);
    int wait = Script__PopInt(script, context);
    if (ai->state == 0)
        AI__SetWaitForCellClonesDeath(ai->component, wait);
}
