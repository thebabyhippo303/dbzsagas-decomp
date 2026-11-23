/* IntrusiveList__PopFront @ 0x8017EBAC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    void *head;
    void *tail;
    int next_offset;
    int previous_offset;
} IntrusiveList;

extern void IntrusiveList__Remove(IntrusiveList *list, void *node);

void *IntrusiveList__PopFront(IntrusiveList *list) {
    void *node = list->head;
    if (node == 0)
        return 0;
    IntrusiveList__Remove(list, node);
    return node;
}
