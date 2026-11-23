/* Avatar__CanAffordItemImpl @ 0x800990F8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__CanAffordItemImpl @ 0x800990F8 (0x68). ProDG -O2. */
typedef void (*AffordFn)(void *self, char *name);
typedef struct {
    char pad[16];
    short adjust;
    short unused;
    AffordFn fn;
} AffordVtable;

extern char lbl_8031FA9C[];

int Avatar__CanAffordItemImpl(void *self, float cost) {
    void *obj;
    AffordVtable *vt;
    if (*(float *)((char *)self + 660) >= cost)
        return 1;
    if (*(int *)((char *)self + 2020) != 0) {
        obj = *(void **)((char *)self + 172);
        vt = *(AffordVtable **)((char *)obj + 12);
        vt->fn((char *)obj + vt->adjust, lbl_8031FA9C);
        return 0;
    }
    return 1;
}
