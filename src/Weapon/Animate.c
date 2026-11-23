/* Weapon__Animate @ 0x800DEDA0 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Weapon__Animate @ 0x800DEDA0 (0x60). ProDG -O2. */
extern void fn_802004AC(void *self, void *inner, int a, int flags, int b, int zero, int bit);

void Weapon__Animate(void *self, int a, int flags, int b) {
    if (flags & 256)
        fn_802004AC(self, *(void **)((char *)self + 72), a, flags, b, 0, 1);
    else
        fn_802004AC(self, *(void **)((char *)self + 72), a, flags, b, 0, 0);
}
