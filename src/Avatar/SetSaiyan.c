/* Avatar__SetSaiyan @ 0x80032DF8 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetSaiyan @ 0x80032DF8 (0x4C). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Avatar__SetSaiyanFormImpl(void *avatar, int form);

void Avatar__SetSaiyan(void *script, void *context) {
    void *avatar = (void *)Script__PopInt(script, context);
    int form = Script__PopInt(script, context);
    Avatar__SetSaiyanFormImpl(avatar, form);
}
