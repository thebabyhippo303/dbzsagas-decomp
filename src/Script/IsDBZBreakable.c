/* Script__IsDBZBreakable @ 0x8003B4DC (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);
extern int lbl_80394694[] __attribute__((section(".data")));

void Script__IsDBZBreakable(void *script, void *context) {
    int *value;

    value = (int *)Script__PopInt(script, context);
    if ((*value & lbl_80394694[1]) == lbl_80394694[0]) {
        Script__PushInt(script, context, 1);
        return;
    }
    Script__PushInt(script, context, 0);
}
