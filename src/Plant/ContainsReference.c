/* Plant__ContainsReference @ 0x800F6F84 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Plant__ContainsReference @ 0x800F6F84 (0x34). ProDG -O2. */
typedef struct PlantNode {
    void *item;
    char pad[4];
    struct PlantNode *next;
} PlantNode;

typedef struct {
    char pad[8];
    PlantNode *head;
} PlantRefList;

int Plant__ContainsReference(PlantRefList *self, void *ref) {
    PlantNode *node = self->head;
    while (node != 0) {
        if (node->item == ref)
            return 1;
        node = node->next;
    }
    return 0;
}
