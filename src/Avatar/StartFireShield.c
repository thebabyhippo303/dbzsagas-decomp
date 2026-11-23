/* Avatar__StartFireShield @ 0x80033060 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__StartFireShield @ 0x80033060 (0x78). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Avatar__StartFireShieldImpl(void *avatar, int mode);
extern void AI__SetAttackSuppressed(void *effect, int enabled);

void Avatar__StartFireShield(void *script, void *context) {
    void *avatar = (void *)Script__PopInt(script, context);
    int mode = Script__PopInt(script, context);

    Avatar__StartFireShieldImpl(avatar, mode);
    if (*(int *)((char *)avatar + 0x7E4) != 1 && mode != 0 && mode != 6)
        AI__SetAttackSuppressed(*(void **)((char *)avatar + 0xB8C), 1);
}
