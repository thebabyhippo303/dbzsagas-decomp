/* Dende__IsHidingSpotValid @ 0x80044F0C (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);
extern int String__CompareIgnoreCase(const char *a, const char *b);
extern void fn_8023A97C(void *obj, int flag);
extern char lbl_80311F20[];
extern int lbl_803945A4[] __attribute__((section(".data")));
extern void *lbl_803DCCB8;

void Dende__IsHidingSpotValid(void *script, void *context) {
    void *target;
    int found;
    void **node;
    void *obj;

    target = Script__PopInt(script, context);
    found = 0;
    if (target != 0) {
        node = *(void ***)((char *)lbl_803DCCB8 + 44);
        if (node != 0) {
            do {
                obj = node[0];
                fn_8023A97C(*(void **)((char *)obj + 132), 0);
                if ((*(int *)obj & lbl_803945A4[1]) == lbl_803945A4[0] &&
                    String__CompareIgnoreCase((char *)obj + 448, lbl_80311F20) == 0) {
                    found = obj == target;
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
    }
    Script__PushInt(script, context, found);
}
