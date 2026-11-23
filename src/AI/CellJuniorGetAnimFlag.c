/* AI__CellJuniorGetAnimFlag @ 0x80043F20 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__CellJuniorGetAnimFlag @ 0x80043F20 (0x68). ProDG -O2. */
typedef struct {
    char pad_000[0x524];
    int animation_flag;
} CellJuniorState;

typedef struct {
    char pad_000[0x7E4];
    int field_7E4;
    char pad_7E8[0x3A4];
    CellJuniorState *state;
} CellJuniorActor;

extern CellJuniorActor *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void AI__CellJuniorGetAnimFlag(void *script, void *context) {
    CellJuniorActor *actor = Script__PopInt(script, context);
    int value = 0;

    if (actor != 0 && actor->field_7E4 == 0 && actor->state->animation_flag != 0)
        value = 1;
    Script__PushInt(script, context, value);
}
