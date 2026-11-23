/* Script__PopFloat @ 0x8023A378 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef struct {
    char pad[8];
    s8 top;
    char pad2[48 - 9];
    float *values;
    unsigned char *kinds;
} ScriptState;

typedef struct {
    char pad[240];
    ScriptState *lanes[1];
} ScriptVM;

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0x6ED0] = {1};

float Script__PopFloat(ScriptVM *vm, int lane) {
    ScriptState *st = vm->lanes[lane];
    float value = st->values[st->top];
    if (st->kinds[st->top] == 1) {
        value = (float)*(int *)&value;
    }
    st->top--;
    return value;
}
