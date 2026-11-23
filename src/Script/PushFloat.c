/* Script__PushFloat @ 0x8023A264 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__PushFloat @ 0x8023A264 (0x40). ProDG -O2. */
typedef struct {
    char pad[8];
    signed char stack_index;
    char pad9[0x27];
    float *float_values;
    unsigned char *value_types;
} ScriptFrame;

typedef struct {
    char pad[0xF0];
    ScriptFrame *frames[1];
} ScriptState;

void Script__PushFloat(ScriptState *script, int frame_index, float value) {
    ScriptFrame *frame = script->frames[frame_index];
    frame->stack_index++;
    frame->value_types[frame->stack_index] = 2;
    frame->float_values[frame->stack_index] = value;
}
