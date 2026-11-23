/* SpiritBomb__StartAnimation @ 0x80044544 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SpiritBomb__StartAnimation @ 0x80044544 (0x38). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern int Avatar__StartAnimationImpl(
    void *avatar, unsigned short animation, int loop, int arg3, int arg4, int arg5);

void SpiritBomb__StartAnimation(void *script, void *context) {
    void *avatar = Script__PopInt(script, context);
    Avatar__StartAnimationImpl(avatar, 0x1100, 1, 0, 1, 1);
}
