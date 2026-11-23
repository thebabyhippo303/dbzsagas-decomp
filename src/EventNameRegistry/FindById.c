/* EventNameRegistry__FindById @ 0x8021B7CC (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: EventNameRegistry__FindById @ 0x8021B7CC (0x34). ProDG -O2. */
typedef struct EventNameNode {
    struct EventNameNode *next;
    int id;
} EventNameNode;

typedef struct {
    EventNameNode *head;
} EventNameRegistry;

EventNameNode *EventNameRegistry__FindById(EventNameRegistry *self, int id) {
    EventNameNode *node = self->head;

    if (node == 0 || node->id == id)
        return node;
    do {
        node = node->next;
    } while (node != 0 && node->id != id);
    return node;
}
