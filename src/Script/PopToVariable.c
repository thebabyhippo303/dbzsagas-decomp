/* Script__PopToVariable @ 0x8023A448 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__PopToVariable @ 0x8023A448 (0x7C). ProDG -O2. */
typedef struct ScriptThread {
    char pad0[8];
    unsigned char top;
    char pad1[0x28 - 9];
    float *variables;
    char pad2[4];
    float *values;
} ScriptThread;

typedef struct Script {
    char pad[0xF0];
    ScriptThread *threads[1];
} Script;

extern int ScriptThread__FindVariableIndex(ScriptThread *thread, void *name);
extern void fn_8023A810(ScriptThread *thread, int index);

void Script__PopToVariable(Script *script, int threadIndex, void *name) {
    ScriptThread *thread = script->threads[threadIndex];
    int variableIndex = ScriptThread__FindVariableIndex(thread, name);
    if (variableIndex != -1) {
        unsigned char top;
        fn_8023A810(thread, variableIndex);
        top = thread->top;
        thread->top = (unsigned char)(top - 1);
        thread->variables[variableIndex] = thread->values[(signed char)top];
    }
}
