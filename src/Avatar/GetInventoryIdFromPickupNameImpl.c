/* Avatar__GetInventoryIdFromPickupNameImpl @ 0x8009B31C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_80323D0C[];
extern char lbl_8031FC28[];
extern int String__CompareIgnoreCase(const char *, const char *);

int Avatar__GetInventoryIdFromPickupNameImpl(void *unused, char *name) {
    if (name != 0 && *name != 0) {
        int i = 0;
        for (;; i++) {
            int off = i * 76;
            char *tbl = lbl_80323D0C;
            char *n = *(char **)(tbl + off);
            if (String__CompareIgnoreCase(n, lbl_8031FC28) == 0) {
                break;
            }
            if (String__CompareIgnoreCase(n, name) == 0) {
                { char *fld = tbl + 28; return *(int *)(fld + off); }
            }
        }
    }
    return -1;
}
