/* Avatar__CanAffordItem @ 0x80045CB0 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__CanAffordItem @ 0x80045CB0 (0x58). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern int Avatar__CanAffordItemImpl(void *avatar, float cost);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__CanAffordItem(void *script, void *context) {
    void *avatar = (void *)Script__PopInt(script, context);
    float cost = Script__PopFloat(script, context);
    int ok = Avatar__CanAffordItemImpl(avatar, cost);
    Script__PushInt(script, context, ok);
}
