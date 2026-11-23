/* MenuLoop__Construct @ 0x8004C634 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_80270450(void *self);
extern void fn_8026B590(void *self);
extern int lbl_8031A9D0 __attribute__((section(".data")));
extern int lbl_803946DC __attribute__((section(".data")));

void *MenuLoop__Construct(void *self, int a, int b) {
    char *p;
    int i;
    int *obj;

    obj = self;
    obj[2] = a;
    obj[3] = b;
    obj[0] = (int)&lbl_8031A9D0;
    p = (char *)self + 1360;
    fn_80270450((char *)self + 28);
    i = 1;
    fn_8026B590((char *)self + 528);
    fn_8026B590((char *)self + 944);
    do {
        fn_8026B590(p);
        p += 416;
    } while (i-- != 0);
    fn_8026B590((char *)self + 2192);
    fn_8026B590((char *)self + 2608);
    lbl_803946DC = 0;
    obj[1] = 0;
    return self;
}
