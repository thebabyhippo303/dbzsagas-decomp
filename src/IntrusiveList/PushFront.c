/* IntrusiveList__PushFront @ 0x8017EBF4 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: IntrusiveList__PushFront @ 0x8017EBF4 (0x4C). ProDG -O2. */
typedef struct {
    void *volatile head;
    void *volatile tail;
    volatile int next_offset;
    volatile int previous_offset;
} IntrusiveList;

void IntrusiveList__PushFront(IntrusiveList *list, void *node) {
    int next_offset = list->next_offset;
    void *head = list->head;
    *(void **)((char *)node + next_offset) = head;
    if (list->head != 0) {
        void *next = *(void **)((char *)node + list->next_offset);
        *(void **)((char *)next + list->previous_offset) = node;
    }
    *(void **)((char *)node + list->previous_offset) = 0;
    list->head = node;
    if (list->tail != 0) {
        return;
    }
    list->tail = node;
}
