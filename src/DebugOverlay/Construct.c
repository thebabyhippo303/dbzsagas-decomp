/* DebugOverlay__Construct @ 0x8013659C (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
void fn_802628E4(void *);
void fn_80260DCC(void *);
void fn_80270450(void *);
void fn_80264DFC(void *);
void fn_8026F790(void *);
extern char lbl_8032C490[] __attribute__((section(".data")));

void *DebugOverlay__Construct(char *self) {
    int n = 5;
    char *p = self + 20552;
    int m;
    char *q;
    char *last;
    fn_802628E4(self);
    *(char **)(self + 412) = lbl_8032C490;
    fn_80260DCC(self + 416);
    fn_80270450(self + 16860);
    fn_80270450(self + 17360);
    fn_80270450(self + 17860);
    fn_80264DFC(self + 18360);
    fn_80270450(self + 19552);
    fn_80270450(self + 20052);
    do {
        fn_80270450(p);
        p += 500;
    } while (n-- != 0);
    q = self + 23552;
    m = 7;
    last = self + 27572;
    do {
        fn_80270450(q);
        q += 500;
    } while (m-- != 0);
    fn_8026F790(last);
    return self;
}
