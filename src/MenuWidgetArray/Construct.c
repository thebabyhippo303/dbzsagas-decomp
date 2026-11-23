/* MenuWidgetArray__Construct @ 0x80014EAC (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct {
    char *data;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
} ArrayBlock;

void fn_8026B590(void *);
char *fn_80184348(s32);
extern char lbl_8030E588 __attribute__((section(".data")));

void *MenuWidgetArray__Construct(char *self) {
    ArrayBlock *block = (ArrayBlock *)(self + 0x1A0);
    s32 zero = 0;
    s32 eight = 8;
    fn_8026B590(self);
    *(void **)(self + 0x19C) = &lbl_8030E588;
    block->data = fn_80184348(0x20);
    block->f4 = zero;
    block->f8 = eight;
    block->fC = eight;
    block->f10 = zero;
    block->f14 = zero;
    fn_8026B590(self + 0x1B8);
    fn_8026B590(self + 0x358);
    fn_8026B590(self + 0x4F8);
    fn_8026B590(self + 0x698);
    *(s32 *)(self + 0x83C) = zero;
    *(s32 *)(self + 0x848) = zero;
    *(s32 *)(self + 0x84C) = zero;
    *(s32 *)(self + 0x850) = zero;
    *(s32 *)(self + 0x854) = zero;
    return self;
}
