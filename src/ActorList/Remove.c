/* ActorList__Remove @ 0x801DF194 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ActorList__Add(void *, void *);
void ActorNode__Unlink(void *, void *, void *);

typedef struct ALNode { void *data; char pad[0x10]; struct ALNode *next; } ALNode;
typedef struct ALIface { char pad[0x10]; s16 off; s16 pad2; void (*rm)(void *, void *); } ALIface;
typedef struct ALHead { ALIface *vt; } ALHead;

s32 ActorList__Remove(void *arg0, void *arg1, void *arg2) {
    ALNode *node;
    ALHead *q;
    ALHead *q2;
    s32 flag;
    void *vt;

    node = M2C_FIELD(arg0, ALNode **, 0);
    if (node != NULL) {
        do {
            if (arg1 == node->data) {
                if (arg2 == NULL) {
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
                } else {
                    q2 = M2C_FIELD(arg0, ALHead **, 4);
                    if (M2C_FIELD(arg2, ALHead **, 4) != q2) {
                        q2->vt->rm((char *) q2 + q2->vt->off, node);
                        ActorList__Add(arg2, arg1);
                    } else {
                        ActorNode__Unlink(node, arg2, NULL);
                    }
                }
                return 1;
            }
            node = node->next;
        } while (node != NULL);
    }
    return 0;
}
