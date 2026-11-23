/* Actor__GetVarPointer @ 0x802AC264 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *owned);
extern int *Script__GetVariableAddress(void *script, void *context, char *name);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(char *text);

void Actor__GetVarPointer(void *script, void *context) {
    int owned;
    char *name = Script__PopString(script, context, &owned);
    int *address = Script__GetVariableAddress(script, context, name);
    Script__PushInt(script, context, (int)address);
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
