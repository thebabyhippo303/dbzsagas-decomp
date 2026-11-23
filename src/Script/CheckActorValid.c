/* Script__CheckActorValid @ 0x8002A3E4 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Node {
    int *actor;
    char pad4[0x10];
    struct Node *next;
} Node;

typedef struct {
    unsigned int value;
    unsigned int mask;
} Mask;

extern int *Script__PopInt(void *, void *);
extern void Script__PushInt(void *, void *, int);
extern Mask lbl_803946B4 __attribute__((section(".data")));
extern Node *lbl_803DCCB8;

void Script__CheckActorValid(void *script, void *context) {
    int *actor;
    Node *node;
    int found;

    actor = Script__PopInt(script, context);
    node = lbl_803DCCB8;
    goto update;
body:
    if (actor == node->actor) {
        found = 1;
        goto check;
    }
update:
    node = node->next;
    if (node != 0) {
        goto body;
    }
    found = 0;
check:
    if (found != 0 && ((*(unsigned int *)actor & lbl_803946B4.mask) == lbl_803946B4.value) &&
        *(int *)((char *)actor + 0x5F8) != 0) {
        found = 0;
    }
    Script__PushInt(script, context, found);
}
