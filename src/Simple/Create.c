/* Simple__Create @ 0x8002F800 (size: 0x1E4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef float f32;

extern char *Script__PopString(void *script, void *stack, s32 *owned);
extern f32 Script__PopFloat(void *script, void *stack);
extern void Script__PushInt(void *script, void *stack, s32 value);
extern char *strrchr(const char *s, int ch);
extern u32 strlen(const char *s);
extern char *strncpy(char *dst, const char *src, u32 n);
extern char *fn_80184348(s32 size);
extern void *Environment__SpawnEntity(char *a, char *name, char *dup, char *c, f32 *pos, f32 scale, s32 id);
extern void fn_80184430(char *p);
extern u32 lbl_803945A4[] __attribute__((section(".data")));

void Simple__Create(void *script, void *stack) {
    s32 ownA;
    s32 ownB;
    s32 ownC;
    f32 pos[3];
    char *a;
    char *b;
    char *c;
    f32 scale;
    void *env;
    s32 id;
    char *slash;
    char *dup;
    u32 pre;
    void *entity;
    f32 *p;

    p = pos;
    a = Script__PopString(script, stack, &ownA);
    id = -1;
    b = Script__PopString(script, stack, &ownB);
    c = Script__PopString(script, stack, &ownC);
    p[0] = Script__PopFloat(script, stack);
    p[1] = Script__PopFloat(script, stack);
    p[2] = Script__PopFloat(script, stack);
    scale = Script__PopFloat(script, stack);
    env = *(void **)((char *)script + 200);
    if (env != 0) {
        if ((*(u32 *)env & lbl_803945A4[1]) == lbl_803945A4[0]) {
            id = *(s32 *)((char *)env + 1040);
        }
    }
    dup = 0;
    slash = strrchr(b, '/');
    if (slash == 0) {
        slash = strrchr(b, '\\');
    }
    if (slash != 0) {
        pre = strlen(b) - strlen(slash) + 1;
        dup = fn_80184348((s32)pre + 1);
        strncpy(dup, b, pre);
        b = slash + 1;
        dup[pre] = 0;
    }
    entity = Environment__SpawnEntity(a, b, dup, c, pos, scale, id);
    if ((ownA != 0) && (a != 0)) {
        fn_80184430(a);
    }
    if ((ownB != 0) && (b != 0)) {
        fn_80184430(b);
    }
    if ((ownC != 0) && (c != 0)) {
        fn_80184430(c);
    }
    if (dup != 0) {
        fn_80184430(dup);
    }
    Script__PushInt(script, stack, (s32)entity);
}
