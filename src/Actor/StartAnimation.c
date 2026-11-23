/* Actor__StartAnimation @ 0x802AC868 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__StartAnimation @ 0x802AC868 (0x44). ProDG -O2. */
extern int Script__PopInt(void);
extern void fn_801DCCE0(void *anim, unsigned short id, int a, int b, int c);

void Actor__StartAnimation(void *self) {
    unsigned short id = (unsigned short)Script__PopInt();
    fn_801DCCE0(*(void **)((char *)self + 200), id, 0, 0, 0);
}
