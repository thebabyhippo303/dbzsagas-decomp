/* FmvQueue__ClosePlayer @ 0x801DA9D4 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct Node {
    char pad[0x84];
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
    s32 owned;
    s32 count;
} List;

typedef struct FmvQueue {
    void *player;
    List list;
} FmvQueue;

void Audio__ResumeAfterMovie(void *);
void FmvPlayer__Destroy(void *, s32);
void FmvPlayer__Shutdown(void *, s32);
void Mem__Delete(void *);
extern void *lbl_803DCC20;

void FmvQueue__ClosePlayer(FmvQueue *self, s32 arg) {
    List *list = &self->list;

    if (list->head != 0) {
        do {
            Node *node = list->head;
            list->head = node->next;
            if (list->tail == node) {
                list->tail = node->prev;
            } else {
                node->next->prev = node->prev;
            }
            if (list->owned != 0) {
                Mem__Delete(node);
            } else {
                node->prev = 0;
                node->next = 0;
            }
            list->count = list->count - 1;
        } while (list->head != 0);
    }
    if (self->player != 0) {
        FmvPlayer__Shutdown(self->player, arg);
        if (self->player != 0) {
            FmvPlayer__Destroy(self->player, 3);
        }
        self->player = 0;
    }
    Audio__ResumeAfterMovie(lbl_803DCC20);
}
