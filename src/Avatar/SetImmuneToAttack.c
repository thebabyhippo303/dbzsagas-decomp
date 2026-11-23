/* Avatar__SetImmuneToAttack @ 0x80045940 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetImmuneToAttack @ 0x80045940 (0x64). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern char lbl_80311FCC[];
extern void Avatar__SetAnimScriptVarIntImpl(void *avatar, char *name, int value, int extra);

void Avatar__SetImmuneToAttack(void *script, void *context) {
    void *avatar = (void *)Script__PopInt(script, context);
    int flag = Script__PopInt(script, context);
    int value = 1;
    if (flag == 0)
        value = 0;
    Avatar__SetAnimScriptVarIntImpl(avatar, lbl_80311FCC, value, 0);
}
