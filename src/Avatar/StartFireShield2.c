/* Avatar__StartFireShield2 @ 0x8003313C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__StartFireShield2 @ 0x8003313C (0x4C). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Avatar__StartFireShield2Impl(void *avatar, int shield_id);

void Avatar__StartFireShield2(void *script, void *context) {
    void *avatar = Script__PopInt(script, context);
    int shield_id = (int)Script__PopInt(script, context);
    Avatar__StartFireShield2Impl(avatar, shield_id);
}
