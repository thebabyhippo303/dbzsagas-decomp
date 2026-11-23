/* Avatar__CreateEmitter @ 0x8003BBDC (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int Script__PopInt(void *script, void *ctx);
extern char *Script__PopString(void *script, void *ctx, int *ownsOut);
extern int Avatar__CreateEmitterImpl(int emitterBase, char *name, int a, int b, int c, int flag);
extern void Script__PushInt(void *script, void *ctx, int value);
extern void Mem__DeleteArray(void *p);

void Avatar__CreateEmitter(void *script, void *ctx) {
    int owns;
    int avatar;
    char *name;
    int a, b, c;
    int flag;

    avatar = Script__PopInt(script, ctx);
    name = Script__PopString(script, ctx, &owns);
    a = Script__PopInt(script, ctx);
    b = Script__PopInt(script, ctx);
    c = Script__PopInt(script, ctx);
    Script__PopInt(script, ctx);
    Script__PopInt(script, ctx);
    flag = Script__PopInt(script, ctx) != 0;
    Script__PushInt(script, ctx, Avatar__CreateEmitterImpl(avatar + 0x684, name, a, b, c, flag));
    if (owns != 0 && name != 0) {
        Mem__DeleteArray(name);
    }
}
