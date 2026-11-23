/* MissionUI__Construct @ 0x8012333C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_802678CC(void *self);
extern void fn_80270450(void *self);
extern void fn_8026B590(void *self);
extern void PointerArray__AddUnique(void *arr, void *item);
extern int lbl_8032D3C0 __attribute__((section(".data")));
extern void *lbl_803DC650;

void *MissionUI__Construct(void *self) {
    char *base;
    int zero;

    base = (char *)self + 65536;
    fn_802678CC(self);
    *(int *)((char *)self + 412) = (int)&lbl_8032D3C0;
    fn_80270450(base - 20848);
    fn_80270450(base - 20272);
    fn_8026B590(base - 19768);
    fn_8026B590(base - 19352);
    fn_8026B590(base - 18936);
    PointerArray__AddUnique(lbl_803DC650, self);
    zero = 0;
    *(volatile int *)(base - 20340) = zero;
    *(volatile int *)(base - 18512) = zero;
    *(volatile int *)(base - 18520) = zero;
    *(volatile int *)(base - 18508) = zero;
    *(volatile int *)(base - 18504) = zero;
    *(volatile int *)(base - 19772) = zero;
    *(volatile int *)(base - 20348) = zero;
    *(volatile int *)(base - 20344) = zero;
    return self;
}
