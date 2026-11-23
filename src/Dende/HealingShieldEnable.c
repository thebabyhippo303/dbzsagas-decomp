/* Dende__HealingShieldEnable @ 0x800409EC (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Dende__HealingShieldEnable @ 0x800409EC (0x64). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Avatar__StartFireShieldImpl(void *avatar, int mode);
extern void Avatar__StopFireShieldImpl(void *avatar, int mode);

void Dende__HealingShieldEnable(void *script, void *context) {
    void *avatar = (void *)Script__PopInt(script, context);
    int enable = Script__PopInt(script, context);
    if (enable != 0)
        Avatar__StartFireShieldImpl(avatar, 2);
    else
        Avatar__StopFireShieldImpl(avatar, 2);
}
