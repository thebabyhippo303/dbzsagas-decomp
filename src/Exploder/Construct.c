/* Exploder__Construct @ 0x800EC32C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Exploder__Construct @ 0x800EC32C */
extern void Actor__Construct(void *self, void *vtbl);
extern char lbl_803318C0[] __attribute__((section(".data")));
extern char lbl_803318A0[] __attribute__((section(".data")));
extern char lbl_803317D0[] __attribute__((section(".data")));
extern char lbl_80331968[] __attribute__((section(".data")));
extern char lbl_80394684[] __attribute__((section(".data")));

void *Exploder__Construct(void *self) {
    Actor__Construct(self, lbl_80394684);
    *(void **)((char *)self + 408) = lbl_803318C0;
    *(void **)((char *)self + 436) = lbl_803318A0;
    *(void **)((char *)self + 1224) = lbl_803317D0;
    *(void **)((char *)self + 52) = lbl_80331968;
    *(int *)((char *)self + 1808) = 1;
    *(int *)((char *)self + 1796) = 0;
    *(int *)((char *)self + 1800) = 0;
    *(int *)((char *)self + 1720) = 0;
    *(int *)((char *)self + 1816) = 0;
    return self;
}
