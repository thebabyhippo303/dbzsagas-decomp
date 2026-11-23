/* EventNameRegistry__AllocateId @ 0x8021B6D8 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* EventNameRegistry__AllocateId @ 0x8021B6D8 */

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
    int next_id;
    int active;
} EventNameRegistry;

extern EventNameNode *EventNameRegistry__FindById(EventNameRegistry *self, int id);
extern EventNameNode *EventNameRegistry__Insert(EventNameRegistry *self, const char *name, int id);

EventNameNode *EventNameRegistry__AllocateId(EventNameRegistry *self, const char *name) {
    int id;
    int freeSlot;

    id = self->next_id;
    freeSlot = 0;
    do {
        if (EventNameRegistry__FindById(self, id) == 0) {
            freeSlot = 1;
        } else {
            id += 1;
        }
    } while (freeSlot == 0);

    if (id > self->capacity) {
        return 0;
    }
    self->next_id = id + 1;
    return EventNameRegistry__Insert(self, name, id);
}
