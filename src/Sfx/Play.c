/* Sfx__Play @ 0x802B0948 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Sfx__Play @ 0x802B0948 */
extern char *Script__PopString(void *script, void *context, int *flag);
extern void fn_80184430(char *name);

void Sfx__Play(void *script, void *context) {
    int flag;
    char *name;
    void *target;
    void *ops;
    void *vtbl;
    void (*play)(void *self, char *name);

    target = *(void **)((char *)script + 0xC8);
    name = Script__PopString(script, context, &flag);
    if (name != (char *)-1) {
        ops = *(void **)((char *)target + 0xAC);
        vtbl = *(void **)((char *)ops + 0xC);
        play = *(void (**)(void *, char *))((char *)vtbl + 0x14);
        play((char *)ops + *(short *)((char *)vtbl + 0x10), name);
    }
    if (flag != 0 && name != 0) {
        fn_80184430(name);
    }
}
