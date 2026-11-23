/* Simple__AIScriptSetString @ 0x802AF730 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8;

void *Script__PopActor(void *script, void *context, int kind);
char *Script__PopString(void *script, void *context, int *owned);
void Script__SetStringVariable(void *obj, int id, char *name, char *value);
void fn_80184430(char *text);

typedef struct {
    char pad[4];
    u8 flags;
} AIFlags;

typedef struct {
    char pad[0xFC];
    AIFlags *flags;
} AIObj;

typedef struct {
    char pad[0x84];
    AIObj *obj;
} AIActor;

void Simple__AIScriptSetString(void *script, void *context) {
    AIActor *actor;
    char *name;
    char *value;
    int name_owned;
    int value_owned;
    AIObj *obj;

    actor = Script__PopActor(script, context, 0);
    name = Script__PopString(script, context, &name_owned);
    value = Script__PopString(script, context, &value_owned);
    actor->obj->flags->flags |= 2;
    Script__SetStringVariable(actor->obj, 3, name, value);
    actor->obj->flags->flags &= 0xFDu;
    if ((name_owned != 0) && (name != 0)) {
        fn_80184430(name);
    }
    if ((value_owned != 0) && (value != 0)) {
        fn_80184430(value);
    }
}
