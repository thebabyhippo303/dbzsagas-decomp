/* AvatarModelVariants__InitializeFromAvatar @ 0x8009ABB4 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_80252114(void *dst, void *src);
extern int lbl_803B1E84 __attribute__((section(".bss")));

void AvatarModelVariants__InitializeFromAvatar(void *self) {
    void *inner;
    int a;
    int b;

    fn_80252114(&lbl_803B1E84, (char *)self + 4);
    *(int *)((char *)self + 8) = 1;
    inner = *(void **)self;
    a = *(int *)((char *)inner + 0x84);
    *(int *)((char *)self + 0xC) = a;
    b = *(int *)((char *)inner + 0xA4);
    *(int *)((char *)self + 0x84) = 0;
    *(int *)((char *)self + 0x10) = b;
}
