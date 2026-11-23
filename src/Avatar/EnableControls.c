/* Avatar__EnableControls @ 0x80024EE0 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int Script__PopInt(void *script, void *context);
extern void Avatar__ActivateControls(void *avatar, int enabled);

void Avatar__EnableControls(void *script, void *context) {
    void *avatar = (void *)Script__PopInt(script, context);
    int enabled = Script__PopInt(script, context) == 1;
    Avatar__ActivateControls(avatar, enabled);
}
