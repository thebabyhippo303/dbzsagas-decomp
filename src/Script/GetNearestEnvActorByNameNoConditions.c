/* Script__GetNearestEnvActorByNameNoConditions @ 0x8002A248 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef signed char s8;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void *Actor__FindNearestByName(char *, void *, int, int);
int Script__PopInt(void *, void *);
char *Script__PopString(void *, void *, int *);
void Script__PushInt(void *, void *, int);
void fn_80184430(char *);

void Script__FindNearestActorByName(void *self, void *context) {
    s32 status;
    char *name;
    s32 nearest;
    s32 result;
    name = Script__PopString(self, context, &status);
    result = Script__PopInt(self, context);
    nearest = (s32)Actor__FindNearestByName(name, M2C_FIELD(self, void **, 0xC8), result, 0);
    if (status != 0 && name != 0) {
        fn_80184430(name);
    }
    Script__PushInt(self, context, nearest);
}
