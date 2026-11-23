/* Effect__SetEnergyBallEmitterAnimVars @ 0x800DA830 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;

extern char lbl_80322A04 __attribute__((section(".data")));
extern char lbl_80322A10 __attribute__((section(".data")));
extern char lbl_80322A1C __attribute__((section(".data")));
extern char lbl_80322A28 __attribute__((section(".data")));

extern void Avatar__SetAnimScriptVarIntImpl(void *, char *, int, int);
extern void Avatar__SetAnimScriptVarFloat(void *, f32, char *, int);

void Avatar__SetEnergyBallEmitterAnimVars(void *avatar, f32 *pos) {
    void *anim = *(void **)((char *)avatar + 876);

    Avatar__SetAnimScriptVarIntImpl(anim, &lbl_80322A04, 1, 1);
    Avatar__SetAnimScriptVarFloat(anim, pos[0], &lbl_80322A10, 1);
    Avatar__SetAnimScriptVarFloat(anim, pos[1], &lbl_80322A1C, 1);
    Avatar__SetAnimScriptVarFloat(anim, pos[2], &lbl_80322A28, 1);
}
