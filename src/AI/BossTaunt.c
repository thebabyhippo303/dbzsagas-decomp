/* AI__BossTaunt @ 0x80043950 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_801945FC(void *obj, float value);
extern void fn_80065964(int id);
extern float lbl_80311E50 __attribute__((section(".data")));
extern int lbl_803945E4[] __attribute__((section(".data")));
extern char *lbl_803DCC20;
extern void *lbl_803DCCB8;

void AI__BossTaunt(void) {
    void **node;
    void *obj;

    fn_801945FC(lbl_803DCC20 + 204, lbl_80311E50);
    node = *(void ***)((char *)lbl_803DCCB8 + 44);
    if (node == 0) {
        return;
    }
    do {
        obj = node[0];
        if ((*(int *)obj & lbl_803945E4[1]) == lbl_803945E4[0] && *(int *)((char *)obj + 2020) == 0) {
            fn_80065964(*(int *)((char *)obj + 2956));
        }
        {
            void *list;

            list = lbl_803DCCB8;
            if (node != 0) {
                node = *(void ***)((char *)node + 20);
            } else {
                node = *(void ***)((char *)list + 44);
            }
        }
    } while (node != 0);
}
