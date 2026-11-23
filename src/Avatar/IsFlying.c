/* Avatar__IsFlying @ 0x80033570 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Avatar__IsFlying @ 0x80033570 */
#define NULL 0
extern void *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);
extern int Avatar__IsFlyingImpl(void *avatar);
extern unsigned int lbl_803945E4[2] __attribute__((section(".data")));

void Avatar__IsFlying(void *script, void *context) {
    void *avatar;
    int result;

    result = 0;
    avatar = Script__PopInt(script, context);
    if (avatar != NULL && (*(unsigned int *)avatar & lbl_803945E4[1]) == lbl_803945E4[0]) {
        if (Avatar__IsFlyingImpl(avatar) != 0) {
            result = 1;
        }
    }
    Script__PushInt(script, context, result);
}
