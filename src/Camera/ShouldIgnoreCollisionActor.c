/* Camera__ShouldIgnoreCollisionActor @ 0x800CA278 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int fn_80254BB8(void *db, const char *name, int def);
extern void *lbl_803DCCC0;
extern char lbl_803219FC[];
extern unsigned int lbl_803945C4[];
extern unsigned int lbl_80394644[];

int Camera__ShouldIgnoreCollisionActor(void *cam, void *actor, void *arg2) {
    int id;
    unsigned int bits;
    void *node;

    id = *(int *)((char *)cam + 232);
    if (id == -1) {
        goto lookup;
    }
    if (*(unsigned char *)((char *)arg2 + 34) != id) {
        goto checks;
    }
    goto yes;
lookup:
    *(int *)((char *)cam + 232) = fn_80254BB8(lbl_803DCCC0, lbl_803219FC, -1);
checks:
    if (actor == 0) {
        return 0;
    }
    bits = *(unsigned int *)actor;
    if ((bits & lbl_803945C4[1]) == lbl_803945C4[0]) {
        goto yes;
    }
    if ((bits & lbl_80394644[1]) == lbl_80394644[0]) {
        goto yes;
    }
    node = *(void **)((char *)actor + 132);
    if ((*(unsigned short *)((char *)node + 2) & 1) == 0) {
        return 0;
    }
yes:
    return 1;
}
