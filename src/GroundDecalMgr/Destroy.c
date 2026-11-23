/* GroundDecalMgr__Destroy @ 0x80284D8C (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void GroundDecalSet__Destroy(void *, s32);
void Mem__Delete(void *);

typedef struct DNode { char pad[0x54]; struct DNode *prev; struct DNode *next; } DNode;
typedef struct DList { DNode *head; DNode *tail; s32 owned; s32 count; } DList;

void GroundDecalMgr__Destroy(void *arg0, s32 arg1) {
    DList *list = (DList *)((char *)arg0 + 24);
    DNode *node;
    void *player;

    if ((list->owned != 0) && (list->head != NULL)) {
        do {
            node = list->head;
            list->head = node->next;
            if (list->tail == node) {
                list->tail = node->prev;
            } else {
                node->next->prev = node->prev;
            }
            if (list->owned != 0) {
                if (node != NULL) {
                    GroundDecalSet__Destroy(node, 3);
                }
            } else {
                node->prev = NULL;
                node->next = NULL;
            }
            list->count = list->count - 1;
        } while (list->head != NULL);
    }
    player = M2C_FIELD(arg0, void **, 0);
    if (player != NULL) {
        Mem__Delete(player);
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
