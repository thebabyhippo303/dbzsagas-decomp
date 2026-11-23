/* Task__ShutdownPool @ 0x801848A8 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Node {
    int pad0;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    int pad8;
    int count;
} TaskList;

extern void Task__KillAll(void);
extern void memFree(void *);
extern TaskList lbl_803A1214 __attribute__((section(".data")));
extern void *lbl_803DCBB4;

void Task__ShutdownPool(void) {
    Node *node;
    TaskList *list;

    Task__KillAll();
    if (lbl_803A1214.head != 0) {
        list = &lbl_803A1214;
        do {
            node = list->head;
            list->head = node->next;
            if (list->tail == node) {
                list->tail = node->prev;
            } else {
                node->next->prev = node->prev;
            }
            node->prev = 0;
            node->next = 0;
            list->count -= 1;
        } while (list->head != 0);
    }
    if (lbl_803DCBB4 != 0) {
        memFree(lbl_803DCBB4);
        lbl_803DCBB4 = 0;
    }
}
