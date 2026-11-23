/* BoneChain__ConstructBase @ 0x801DF8A8 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_80344C30 __attribute__((section(".data")));

void *BoneChain__ConstructBase(void *self) {
    *(void **)((char *)self + 0x34) = &lbl_80344C30;
    *(int *)self = 0;
    *(int *)((char *)self + 4) = 0;
    *(int *)((char *)self + 8) = 0;
    *(int *)((char *)self + 0xC) = 0;
    return self;
}
