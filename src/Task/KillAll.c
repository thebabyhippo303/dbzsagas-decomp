/* Task__KillAll @ 0x801846B4 (size: 0x1F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
#define NULL 0
void * memFree(void *);
typedef struct TaskNode {
    void *data;
    struct TaskNode *prev;
    struct TaskNode *next;
    void (*fn)(void *);
    s32 pad10[5];
    s32 flags;
} TaskNode;
typedef struct {
    TaskNode *head;
    TaskNode *tail;
    s32 pad8;
    s32 count;
} TaskList;
extern TaskList lbl_803A1204 __attribute__((section(".data")));
extern TaskList lbl_803A1214 __attribute__((section(".data")));
extern TaskList lbl_803A1224 __attribute__((section(".data")));
extern TaskNode *lbl_803DD4B0;

void Task__KillAll(void) {
    TaskNode *n;
    TaskList *l;
    TaskList *l2;
    TaskNode *h;

    if (lbl_803A1204.head != NULL) {
        do {
            n = lbl_803A1204.head;
            memFree(n->data);
            n->data = NULL;
            l = &lbl_803A1204;
            if (l->head == n) {
                l->head = n->next;
            } else {
                n->prev->next = n->next;
            }
            if (l->tail == n) {
                l->tail = n->prev;
            } else {
                n->next->prev = n->prev;
            }
            n->prev = NULL;
            n->next = NULL;
            l->count -= 1;
            l2 = &lbl_803A1214;
            if (l2->head == NULL) {
                l2->head = n;
                l2->tail = n;
                n->next = NULL;
                n->prev = NULL;
            } else {
                n->next = l2->head;
                n->prev = NULL;
                l2->head->prev = n;
                l2->head = n;
            }
            h = lbl_803A1204.head;
            l2->count += 1;
        } while (h != NULL);
    }
    if (lbl_803A1224.head != NULL) {
        do {
            n = lbl_803A1224.head;
            memFree(n->data);
            n->data = NULL;
            l = &lbl_803A1224;
            if (l->head == n) {
                l->head = n->next;
            } else {
                n->prev->next = n->next;
            }
            if (l->tail == n) {
                l->tail = n->prev;
            } else {
                n->next->prev = n->prev;
            }
            n->prev = NULL;
            n->next = NULL;
            l->count -= 1;
            l2 = &lbl_803A1214;
            if (l2->head == NULL) {
                l2->head = n;
                l2->tail = n;
                n->next = NULL;
                n->prev = NULL;
            } else {
                n->next = l2->head;
                n->prev = NULL;
                l2->head->prev = n;
                l2->head = n;
            }
            h = lbl_803A1224.head;
            l2->count += 1;
        } while (h != NULL);
    }
    lbl_803DD4B0 = NULL;
}
