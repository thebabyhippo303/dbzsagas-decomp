/* AI__MarkAllCellJuniorsForDeath @ 0x80087018 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Avatar__SetAnimScriptVarIntImpl(void *avatar, char *name, int value, int flag);
extern char lbl_8031F418[] __attribute__((section(".data")));
extern int lbl_803945E4[] __attribute__((section(".data")));
extern void *lbl_803DCCB8;

void AI__MarkAllCellJuniorsForDeath(void) {
    void **node;
    void *obj;
    int *sub;

    node = *(void ***)((char *)lbl_803DCCB8 + 20);
    if (node == 0) {
        return;
    }
    do {
        obj = node[0];
        if ((*(int *)obj & lbl_803945E4[1]) == lbl_803945E4[0]) {
            sub = *(int **)((char *)obj + 6616);
            if (sub[3] == 41) {
                Avatar__SetAnimScriptVarIntImpl(obj, lbl_8031F418, 1, 1);
            }
        }
        {
            void *list;

            list = lbl_803DCCB8;
            if (node != 0) {
                node = *(void ***)((char *)node + 20);
            } else {
                node = *(void ***)((char *)list + 20);
            }
        }
    } while (node != 0);
}
