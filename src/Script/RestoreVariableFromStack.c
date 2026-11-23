/* Script__RestoreVariableFromStack @ 0x80239DF4 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__RestoreVariableFromStack @ 0x80239DF4 (0x90). ProDG -O2. */
typedef struct {
    char pad[0x38];
    int skipsOperand;
} ThreadCode;

typedef struct {
    char pad[9];
    unsigned char sp;
    char pad2[0x1C - 0xA];
    ThreadCode *code;
    char pad3[0x38 - 0x20];
    float *stack;
} ScriptThread;

typedef struct {
    char pad[240];
    ScriptThread *threads[1];
} ScriptState;

extern float *ScriptThread__GetVariableSlot(ScriptThread *thread, int name);

int Script__RestoreVariableFromStack(ScriptState *script, int threadIndex, int *volatile *pc) {
    ScriptThread *thread = script->threads[threadIndex];
    float *slot;
    unsigned char sp;
    if (thread != 0 && thread->code->skipsOperand != 0)
        (*pc)++;
    slot = ScriptThread__GetVariableSlot(thread, *(*pc)++);
    sp = thread->sp;
    thread->sp = sp - 1;
    *slot = thread->stack[(signed char) sp];
    return 0;
}
