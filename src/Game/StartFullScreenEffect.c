/* Game__StartFullScreenEffect @ 0x800332B8 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *lbl_803DC5E4;

char *Script__PopString(void *script, void *ctx, int *owned);
float Script__PopFloat(void *script, void *ctx);
int Script__PopInt(void *script, void *ctx);
void *FullScreenEffect__Create(void *resource, const char *name, int count, float x, float y, float z);
void Script__PushInt(void *script, void *ctx, int value);
void fn_80184430(char *text);

void Game__StartFullScreenEffect(void *script, void *ctx) {
    int owned;
    char *name;
    float a;
    float b;
    float c;
    int count;

    name = Script__PopString(script, ctx, &owned);
    a = Script__PopFloat(script, ctx);
    b = Script__PopFloat(script, ctx);
    c = Script__PopFloat(script, ctx);
    count = Script__PopInt(script, ctx);
    Script__PushInt(script, ctx, (int)FullScreenEffect__Create(lbl_803DC5E4, name, count, a, b, c));
    if (owned != 0 && name != 0) {
        fn_80184430(name);
    }
}
