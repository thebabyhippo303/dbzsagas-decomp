/* Database__FinalizeRegistration @ 0x80203A98 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_802043B8(void *entry, char *label);
extern void fn_802043BC(void *child, void *entry, char *label);
extern void fn_80234010(void *table);
extern char lbl_80345BD4[] __attribute__((section(".data")));
extern int lbl_803AD8D8 __attribute__((section(".data")));
extern void *lbl_803ADB6C __attribute__((section(".data")));

void Database__FinalizeRegistration(void) {
    void *entry;
    void *child;

    entry = lbl_803ADB6C;
    if (entry != 0) {
        do {
            *(unsigned short *)((char *)entry + 10) =
                (unsigned short)(*(unsigned short *)((char *)entry + 10) | 4);
            fn_802043B8(entry, lbl_80345BD4);
            child = *(void **)((char *)entry + 12);
            if (child != 0) {
                do {
                    *(unsigned short *)((char *)child + 10) =
                        (unsigned short)(*(unsigned short *)((char *)child + 10) | 2);
                    fn_802043BC(child, entry, lbl_80345BD4);
                    child = *(void **)child;
                } while (child != 0);
            }
            entry = *(void **)entry;
        } while (entry != 0);
    }
    fn_80234010(&lbl_803AD8D8);
}
