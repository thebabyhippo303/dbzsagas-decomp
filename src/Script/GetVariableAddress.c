/* Script__GetVariableAddress @ 0x8023A6C8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__GetVariableAddress @ 0x8023A6C8 (0x48). ProDG -O2. */
typedef struct ScriptThread {
    char pad[0x28];
    int *vars;
} ScriptThread;

typedef struct ScriptObj {
    char pad[0xF0];
    ScriptThread *threads[1];
} ScriptObj;

extern int ScriptThread__FindVariableIndex(ScriptThread *thread, void *name);

int *Script__GetVariableAddress(ScriptObj *self, int index, void *name) {
    ScriptThread *thread = self->threads[index];
    int var_index = ScriptThread__FindVariableIndex(thread, name);
    return thread->vars + var_index;
}
