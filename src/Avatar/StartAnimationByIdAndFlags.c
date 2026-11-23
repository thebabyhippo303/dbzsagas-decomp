/* Avatar__StartAnimationByIdAndFlags @ 0x80092EC0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Avatar__StartAnimationByIdAndFlags @ 0x80092EC0 */

extern void *AnimationTable__GetById(void *table, int id);
extern void fn_802004AC(void *self, void *inner, void *anim, int flags, int zeroA, int zeroB, int extra);

void Avatar__StartAnimationByIdAndFlags(void *self, int id, int flags, int extra) {
    void *inner;
    void *anim;

    if (extra > 0) {
        flags |= 0x100;
    }
    inner = *(void **)((char *)self + 0x84);
    anim = AnimationTable__GetById(*(void **)((char *)inner + 0x168), id);
    fn_802004AC(self, inner, anim, flags, 0, 0, extra);
}
