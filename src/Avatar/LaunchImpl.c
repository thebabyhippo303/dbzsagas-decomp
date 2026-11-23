/* Avatar__LaunchImpl @ 0x800B0D48 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float Avatar__PopScriptFloat(void *, void *);
extern void fn_800B0B9C(void *);

void Script__LaunchImpl(void *arg0, void *arg1) {
    Avatar__PopScriptFloat(*(void **)arg0, arg1);
    fn_800B0B9C(arg0);
}
