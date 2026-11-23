/* AI__CellJuniorCheckForAnim @ 0x80043EA8 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__CellJuniorCheckForAnim @ 0x80043EA8 (0x78). ProDG -O2. */
typedef struct {
    char pad_000[0x520];
    int animation_flag;
} CellJuniorState;

typedef struct {
    char pad_000[0xC];
    int type;
} CellJuniorInfo;

typedef struct {
    char pad_000[0x7E4];
    int field_7E4;
    char pad_7E8[0x3A4];
    CellJuniorState *state;
    char pad_B90[0xE48];
    CellJuniorInfo *info;
} CellJuniorActor;

extern CellJuniorActor *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void AI__CellJuniorCheckForAnim(void *script, void *context) {
    CellJuniorActor *actor = Script__PopInt(script, context);
    int value = 0;

    if (actor != 0 && actor->info->type == 41 && actor->field_7E4 == 0 &&
        actor->state->animation_flag != 0)
        value = 1;
    Script__PushInt(script, context, value);
}
