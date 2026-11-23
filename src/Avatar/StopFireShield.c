/* Avatar__StopFireShield @ 0x800330D8 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Avatar__StopFireShieldImpl(void *avatar, void *arg);
extern void fn_800654BC(void *effect, int flag);

void Avatar__StopFireShield(void *script, void *context) {
    void *avatar = Script__PopInt(script, context);
    void *arg = Script__PopInt(script, context);
    Avatar__StopFireShieldImpl(avatar, arg);
    if (*(int *)((char *)avatar + 0x7E4) != 1)
        fn_800654BC(*(void **)((char *)avatar + 0xB8C), 0);
}
