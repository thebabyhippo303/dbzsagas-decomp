/* Script__PopInt @ 0x8023A310 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
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

int Script__PopInt(ScriptVM *vm, int lane) {
    ScriptState *st = vm->lanes[lane];
    float value = st->values[st->top];
    int out;
    if (st->kinds[st->top] == 2) {
        out = (int)value;
    } else {
        out = *(int *)&value;
    }
    st->top--;
    return out;
}
