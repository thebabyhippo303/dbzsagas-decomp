/* AI__InitializeActorAndState @ 0x80058C64 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct AIStateNode {
    char pad[0xC8];
    void *state;
    char mid[0xB8C - 0xCC];
    int data;
} AIStateNode;

typedef struct AIActor {
    char pad[0x38C];
    AIStateNode *node;
    void *state;
    int data;
} AIActor;

extern void AI__ResetStateData(AIActor *actor);

int AI__InitializeActorAndState(AIActor *actor) {
    AIStateNode *node = actor->node;

    if (node != 0) {
        void *state = *(void **)((char *)node + 0xC8);
        actor->state = state;
        actor->data = *(int *)((char *)state + 0xB8C);
    }
    AI__ResetStateData(actor);
    return 1;
}
