/* Avatar__IsActorAvatar @ 0x80026870 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Avatar__IsActorAvatar @ 0x80026870 */
extern unsigned int *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);
extern unsigned int lbl_803945E4[2] __attribute__((section(".data")));

void Avatar__IsActorAvatar(void *script, void *context) {
    unsigned int *actor;

    actor = Script__PopInt(script, context);
    if (actor != 0) {
        Script__PushInt(script, context, ((*actor & lbl_803945E4[1]) ^ lbl_803945E4[0]) == 0);
        return;
    }
    Script__PushInt(script, context, 0);
}
