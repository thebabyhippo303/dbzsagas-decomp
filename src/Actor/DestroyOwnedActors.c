/* Actor__DestroyOwnedActors @ 0x800DC7A8 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Missile__DestroyOwnedByActor @ 0x800DC7A8 (0xF8). ProDG -O2. */
typedef struct { int value; int mask; } TypeTag;
extern char *lbl_803DCCB8;
extern TypeTag lbl_80394624 __attribute__((section(".data")));
extern float lbl_80322B28 __attribute__((section(".data")));
extern void Actor__MarkForDeath(void *actor, float time);

void Missile__DestroyOwnedByActor(void *owner) {
    void **head;
    void **node;
    if (lbl_803DCCB8 != 0) {
        node = *(void ***)(lbl_803DCCB8 + 0x2C);
        head = (void **)(lbl_803DCCB8 + 0x2C);
        if (node != 0) {
            do {
                char *m = *(char **)node;
                if ((*(int *)m & lbl_80394624.mask) == lbl_80394624.value && *(void **)(m + 0x36C) == owner) {
                    int dead;
                    *(int *)(m + 0x36C) = 0;
                    *(int *)(m + 0x28) = 0;
                    Actor__MarkForDeath(m, lbl_80322B28);
                    dead = 0;
                    if (*(int *)(m + 0x90) != 0 && *(int *)(m + 0x94) <= 0)
                        dead = 1;
                    if (dead != 0 && m != 0) {
                        char *vt = *(char **)(m + 0x34);
                        ((void (*)(void *, int))*(void **)(vt + 0x3C))(m + *(short *)(vt + 0x38), 3);
                    }
                }
                if (node != 0)
                    node = *(void ***)((char *)node + 0x14);
                else
                    node = (void **)*head;
            } while (node != 0);
        }
    }
}
