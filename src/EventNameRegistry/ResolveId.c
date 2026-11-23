/* EventNameRegistry__ResolveId @ 0x8021B5D4 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: EventNameRegistry__ResolveId @ 0x8021B5D4 (0x8C). ProDG -O2. */
typedef struct EventNameNode {
    struct EventNameNode *next;
    int id;
    char name[1];
} EventNameNode;

typedef struct EventNameRegistry {
    EventNameNode *head;
    int first_id;
    int capacity;
    int last_id;
} EventNameRegistry;

extern unsigned int strlen(const char *str);
extern int strcmp(const char *left, const char *right);
extern EventNameNode *EventNameRegistry__AllocateId(EventNameRegistry *self,
                                                     const char *name);

int EventNameRegistry__ResolveId(EventNameRegistry *self, const char *name) {
    EventNameNode *node = self->head;

    if (name == 0 || name == (const char *)-1 || strlen(name) == 0) {
        return self->last_id;
    }

    while (node != 0 && strcmp(name, node->name) != 0) {
        node = node->next;
    }

    if (node == 0) {
        node = EventNameRegistry__AllocateId(self, name);
    }
    return node->id;
}
