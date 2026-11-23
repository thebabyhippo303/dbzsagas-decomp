/* Simple__AIScriptGetInt @ 0x802AF804 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Script__PopActor(void *script, void *context, int zero);
char *Script__PopString(void *script, void *context, s32 *outFlag);
s32 Script__GetIntVariable(void *obj, s32 kind, char *name);
void Script__PushInt(void *script, void *context, s32 value);
void fn_80184430(char *text);

void Simple__AIScriptGetInt(void *arg0, void *arg1) {
    s32 flag;
    s32 value;
    char *name;
    void *actor;

    actor = Script__PopActor(arg0, arg1, 0);
    name = Script__PopString(arg0, arg1, &flag);
    value = Script__GetIntVariable(M2C_FIELD(actor, void **, 0x84), 3, name);
    if (flag != 0 && name != NULL) {
        fn_80184430(name);
    }
    Script__PushInt(arg0, arg1, value);
}
