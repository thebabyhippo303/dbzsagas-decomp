/* Script__PushVariable @ 0x8023A4C4 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct ScriptThread {
    char pad0[8];
    unsigned char top;
    char pad1[0x28 - 9];
    float *variables;
    unsigned char *types;
    float *values;
    unsigned char *typeStack;
} ScriptThread;

typedef struct Script {
    char pad[0xF0];
    ScriptThread *threads[1];
} Script;

extern int ScriptThread__FindVariableIndex(ScriptThread *thread, void *name);

void Script__PushVariable(Script *script, int threadIndex, void *name) {
    ScriptThread *thread = script->threads[threadIndex];
    int index = ScriptThread__FindVariableIndex(thread, name);

    if (index != -1) {
        thread->top = (unsigned char)(thread->top + 1);
        thread->values[(signed char)thread->top] = thread->variables[index];
        thread->typeStack[(signed char)thread->top] = thread->types[index];
    }
}
