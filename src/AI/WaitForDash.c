/* AI__WaitForDash @ 0x80045BB0 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x564];
    int wait_for_dash;
} AIComponent;

typedef struct {
    char pad0[0x7E4];
    int state;
    char pad1[0xB8C - 0x7E8];
    AIComponent *component;
} AI;

extern int Script__PopInt(void *script, void *context);

void AI__WaitForDash(void *script, void *context) {
    AI *ai = (AI *)Script__PopInt(script, context);
    int wait = Script__PopInt(script, context);
    if (ai->state == 0)
        ai->component->wait_for_dash = wait;
}
