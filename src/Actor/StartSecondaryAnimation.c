/* Actor__StartSecondaryAnimation @ 0x802AC8AC (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__StartSecondaryAnimation @ 0x802AC8AC (0x58). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void fn_801DCCE0(void *anim, unsigned short id, int a, int b, int c);

void Actor__StartSecondaryAnimation(void *script, void *context) {
    int flags = Script__PopInt(script, context);
    unsigned short id = (unsigned short)Script__PopInt(script, context);
    fn_801DCCE0(*(void **)((char *)script + 200), id, 1, 1, flags);
}
