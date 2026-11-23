/* AIController__InitializeAvatarControl @ 0x80086F10 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
/* AIController__InitializeAvatarControl @ 0x80086F10 (0x108). ProDG -O2. */

extern char lbl_8031F3F4[] __attribute__((section(".data")));
extern char lbl_8031F408[] __attribute__((section(".data")));

extern void fn_800B686C(void *a, void *b);
extern void Avatar__SetAnimScriptVarIntImpl(void *avatar, char *name, int value, int flag);
extern void Avatar__SetControlCallbackState(void *avatar, void *state);
extern int fn_8023A97C(void *obj, int flag);
extern void Avatar__StartAnimationImpl(void *avatar, int anim, int a, int b, int c, int d);

void AIController__InitializeAvatarControl(void *self) {
    void *obj;
    short id;

    obj = *(void **)((char *)self + 124);
    fn_800B686C((char *)obj + 104, (char *)obj + 256);
    Avatar__SetAnimScriptVarIntImpl(*(void **)self, lbl_8031F3F4, 1, 0);
    Avatar__SetAnimScriptVarIntImpl(*(void **)self, lbl_8031F408, 1, 0);
    Avatar__SetControlCallbackState(*(void **)self, (char *)self + 8);
    *(int *)((char *)self + 144) = 9000;
    id = (short)fn_8023A97C(*(void **)((char *)*(void **)self + 132), 0);
    if (id != 788) {
        id = (short)fn_8023A97C(*(void **)((char *)*(void **)self + 132), 0);
        if (id != 780) {
            id = (short)fn_8023A97C(*(void **)((char *)*(void **)self + 132), 0);
            if (id != 778) {
                id = (short)fn_8023A97C(*(void **)((char *)*(void **)self + 132), 0);
                if (id != 779) {
                    Avatar__StartAnimationImpl(*(void **)self, 257, 1, 1, 0, 1);
                }
            }
        }
    }
}
