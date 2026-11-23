/* EventNameRegistry__Insert @ 0x8021B760 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: EventNameRegistry__Insert @ 0x8021B760 (0x6C). ProDG -O2. */
typedef struct EventNameNode {
    struct EventNameNode *next;
    int id;
    char name[1];
} EventNameNode;

typedef struct EventNameRegistry {
    EventNameNode *head;
} EventNameRegistry;

extern unsigned int strlen(const char *str);
extern void *MemHeap__Alloc(unsigned int size, unsigned int alignment);
extern char *strcpy(char *dst, const char *src);

EventNameNode *EventNameRegistry__Insert(EventNameRegistry *self,
                                         const char *name, int id) {
    EventNameNode *node = MemHeap__Alloc(strlen(name) + 13, 8);

    if (node != 0) {
        node->id = id;
        strcpy(node->name, name);
        node->next = self->head;
        self->head = node;
    }
    return node;
}
