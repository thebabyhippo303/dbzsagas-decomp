/* Audio__CreateSfx3DPlayer @ 0x80191720 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Audio__FindSoundGroup(void *, s32);
void *Mem__New(s32);
void *Sfx3DPlayer__Construct(void *, s32, s32, s32);
typedef struct SNode { char pad[0x34]; struct SNode *prev; struct SNode *next; } SNode;
typedef struct SList { SNode *head; SNode *tail; s32 f8; s32 count; } SList;
void *Audio__CreateSfx3DPlayer(void *arg0, s32 arg1, s32 arg2) {
    s32 grp;
    SNode *n;
    SNode *h;
    SList *q;

    if (M2C_FIELD(arg0, s32 *, 0x180) == 0) {
        return NULL;
    }
    grp = Audio__FindSoundGroup(arg0, arg2);
    if (grp == 0) {
        return NULL;
    }
    n = (SNode *) Sfx3DPlayer__Construct(Mem__New(0xAC), arg1, M2C_FIELD(arg0, s32 *, 0x180), grp);
    if (n == NULL) {
        return NULL;
    }
    q = (SList *) ((char *) arg0 + 0x1C8);
    h = q->head;
    if (h == NULL) {
        q->tail = n;
        q->head = n;
        n->next = h;
        n->prev = h;
    } else {
        n->next = NULL;
        n->prev = q->tail;
        q->tail->next = n;
        q->tail = n;
    }
    q->count += 1;
    return n;
}
