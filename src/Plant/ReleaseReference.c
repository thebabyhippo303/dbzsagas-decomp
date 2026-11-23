/* Plant__ReleaseReference @ 0x800F6578 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int Plant__ContainsReference(void *entry, void *ref);
extern void Plant__RemoveReference(void *entry, void *ref);
extern void Plant__DestroyEntry(void *entry, int flags);
extern void *lbl_803DC600;

void Plant__ReleaseReference(void *ref) {
    void *entry;

    entry = lbl_803DC600;
    if (entry != 0) {
        for (;;) {
            if (Plant__ContainsReference(entry, ref) != 0) {
                Plant__RemoveReference(entry, ref);
                if (*(int *)((char *)entry + 24) <= 0) {
                    if (entry == lbl_803DC600) {
                        lbl_803DC600 = *(void **)((char *)entry + 4);
                    }
                    if (entry != 0) {
                        Plant__DestroyEntry(entry, 3);
                    }
                }
                return;
            }
            entry = *(void **)((char *)entry + 4);
            if (entry == 0) {
                return;
            }
        }
    }
}
