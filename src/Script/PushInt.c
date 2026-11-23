/* Script__PushInt @ 0x8023A224 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__PushInt @ 0x8023A224 (0x40). ProDG -O2. */
typedef struct {
    char pad0[8];
    signed char top;
    char pad1[0x30 - 9];
    int *values;
    unsigned char *types;
} ScriptThread;

typedef struct {
    char pad[0xF0];
    ScriptThread *threads[4];
} Script;

void Script__PushInt(Script *script, int threadIndex, int value) {
    ScriptThread *thread = script->threads[threadIndex];
    thread->top = (signed char)(thread->top + 1);
    thread->types[thread->top] = 1;
    thread->values[thread->top] = value;
}
