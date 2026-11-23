/* Event__ResolveName @ 0x802B1914 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

int EventNameRegistry__ResolveId(void *, const char *);
char *Script__PopString(void *, void *, int *);
void Script__PushInt(void *, void *, int);
void fn_80184430(char *);
extern char lbl_803B1DC4[] __attribute__((section(".data")));

void Event__ResolveName(void *arg0, void *arg1) {
    int sp8;
    char *name;

    name = Script__PopString(arg0, arg1, &sp8);
    Script__PushInt(arg0, arg1, EventNameRegistry__ResolveId(lbl_803B1DC4, name));
    if (sp8 != 0 && name != 0) {
        fn_80184430(name);
    }
}
