/* EventNameRegistry__Clear @ 0x8021B660 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: EventNameRegistry__Clear @ 0x8021B660 (0x58). ProDG -O2. */
typedef struct EventNameNode {
	struct EventNameNode *next;
} EventNameNode;

typedef struct {
	EventNameNode *head;
	int first_id;
	int capacity;
	int last_id;
	int next_id;
	int active;
} EventNameRegistry;

extern void memFree(void *ptr);

void EventNameRegistry__Clear(EventNameRegistry *self) {
	EventNameNode *node = self->head;
	while (node != 0) {
		EventNameNode *next = node->next;
		memFree(node);
		node = next;
	}
	self->head = 0;
	self->next_id = self->first_id;
}
