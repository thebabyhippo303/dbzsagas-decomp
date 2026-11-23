/* IntrusiveList__InsertBefore @ 0x8017EC40 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: IntrusiveList__InsertBefore @ 0x8017EC40 (0x6C). ProDG -O2. */
typedef struct {
    void *head;
    void *tail;
    int next_offset;
    int previous_offset;
} IntrusiveList;

void IntrusiveList__InsertBefore(IntrusiveList *list, char *node, char *newNode) {
    *(void **)(newNode + list->previous_offset) = *(void **)(node + list->previous_offset);
    if (*(void **)(newNode + list->previous_offset) != 0) {
        *(void **)(*(char **)(newNode + list->previous_offset) + list->next_offset) = newNode;
    } else {
        list->head = newNode;
    }
    *(void **)(node + list->next_offset) = *(void **)(newNode + list->next_offset);
    if (*(void **)(node + list->next_offset) != 0) {
        *(void **)(*(char **)(node + list->next_offset) + list->previous_offset) = node;
    } else {
        list->tail = node;
    }
    *(void **)(newNode + list->next_offset) = node;
    *(void **)(node + list->previous_offset) = newNode;
}
