/* AvatarCurve__RestoreMovementControls @ 0x800A1C1C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_8031F3F4[] __attribute__((section(".data")));
extern char lbl_8031F408[] __attribute__((section(".data")));

extern void Avatar__SetAnimScriptVarIntImpl(void *, char *, int, int);
extern void Avatar__SetControlCallbackState(void *, void *);
extern void fn_800B6810(void *, void *);
extern void fn_800B686C(void *, void *);

void AvatarCurve__RestoreMovementControls(void *self) {
    void *obj;

    Avatar__SetAnimScriptVarIntImpl(*(void **)self, lbl_8031F3F4, 1, 0);
    Avatar__SetAnimScriptVarIntImpl(*(void **)self, lbl_8031F408, 1, 0);
    Avatar__SetControlCallbackState(*(void **)self, (char *)self + 8);
    obj = *(void **)((char *)self + 0x7C);
    fn_800B6810((char *)obj + 0x68, (char *)obj + 0xB8);
    obj = *(void **)((char *)self + 0x7C);
    fn_800B686C((char *)obj + 0x68, (char *)obj + 0x100);
}
