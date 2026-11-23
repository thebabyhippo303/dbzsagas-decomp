/* MenuController__Construct @ 0x8004B2BC (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_802678CC(void);
extern void PointerArray__AddUnique(void *array, void *item);
extern char lbl_80317330[] __attribute__((section(".data")));
extern void *lbl_803DC650 __attribute__((section(".sdata")));

void *MenuController__Construct(void *self) {
    void *arr;

    fn_802678CC();
    arr = lbl_803DC650;
    *(void **)((char *)self + 412) = lbl_80317330;
    PointerArray__AddUnique(arr, self);
    *(int *)((char *)self + 0xAE90) = 0;
    *(int *)((char *)self + 0xAE9C) = 0;
    *(int *)((char *)self + 0xAE94) = 0;
    *(int *)((char *)self + 0xAE98) = 0;
    return self;
}
