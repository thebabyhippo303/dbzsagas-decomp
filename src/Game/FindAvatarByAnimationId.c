/* Game__FindAvatarByAnimationId @ 0x800942EC (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_8023A97C(void *obj, int flag);
extern int lbl_803945E4[] __attribute__((section(".data")));
extern void *lbl_803DCCB8;

void *Game__FindAvatarByAnimationId(int animId) {
    void **node;
    void *obj;
    void *found;
    int matched;
    int *sub;

    found = 0;
    matched = 0;
    node = *(void ***)((char *)lbl_803DCCB8 + 20);
    if (node == 0) {
        goto done;
    }
    do {
        obj = node[0];
        fn_8023A97C(*(void **)((char *)obj + 132), 0);
        if ((*(int *)obj & lbl_803945E4[1]) == lbl_803945E4[0]) {
            found = obj;
            sub = *(int **)((char *)obj + 6616);
            if (sub[3] == animId) {
                matched = 1;
                break;
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
done:
    if (matched == 0) {
        found = 0;
    }
    return found;
}
