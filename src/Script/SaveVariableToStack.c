/* Script__SaveVariableToStack @ 0x80239D64 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__SaveVariableToStack @ 0x80239D64 (0x90). ProDG -O2. */
typedef struct {
    char pad[0x38];
    int skipsOperand;
} ThreadCode;

typedef struct {
    char pad[9];
    signed char sp;
    char pad2[0x1C - 0xA];
    ThreadCode *code;
    char pad3[0x38 - 0x20];
    int *stack;
} ScriptThread;

typedef struct {
    char pad[240];
    ScriptThread *threads[1];
} ScriptState;

extern int *ScriptThread__GetVariableSlot(ScriptThread *thread, int name);

int Script__SaveVariableToStack(ScriptState *script, int threadIndex, int *volatile *pc) {
    ScriptThread *thread = script->threads[threadIndex];
    int name;
    int *slot;
    if (thread != 0 && thread->code->skipsOperand != 0)
        (*pc)++;
    name = *(*pc)++;
    slot = ScriptThread__GetVariableSlot(thread, name);
    thread->sp++;
    thread->stack[thread->sp] = *slot;
    return 0;
}
