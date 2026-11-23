/* ActorList__RemoveAndDeleteIfOrphaned @ 0x801DF0C8 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16;
typedef int s32;
#define NULL 0
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

typedef struct ALNode { void *data; char pad[0x10]; struct ALNode *next; } ALNode;
typedef struct ALIface { char pad[0x10]; s16 off; s16 pad2; void (*rm)(void *, void *); } ALIface;
typedef struct ALHead { ALIface *vt; } ALHead;

s32 ActorList__RemoveAndDeleteIfOrphaned(void *arg0, void *arg1) {
    ALNode *node;
    ALHead *q;
    s32 flag;
    void *vt;

    node = M2C_FIELD(arg0, ALNode **, 0);
    if (node != NULL) {
        do {
            if (arg1 == node->data) {
                q = M2C_FIELD(arg0, ALHead **, 4);
                q->vt->rm((char *) q + q->vt->off, node);
                flag = 0;
                if (M2C_FIELD(arg1, s32 *, 0x8C) != 0) {
                    flag = (M2C_FIELD(arg1, s32 *, 0x88) == 0);
                }
                if (flag != 0 && arg1 != NULL) {
                    vt = M2C_FIELD(arg1, void **, 0x34);
                    M2C_FIELD(vt, void (**)(void *, s32), 0x3C)((char *) arg1 + M2C_FIELD(vt, s16 *, 0x38), 3);
                }
                return 1;
            }
            node = node->next;
        } while (node != NULL);
    }
    return 0;
}
