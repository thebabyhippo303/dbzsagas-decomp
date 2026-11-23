/* Task__InitializePool @ 0x80184610 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Node {
    char pad0[4];
    struct Node *prev;
    struct Node *next;
    char pad1[52 - 12];
} Node;

typedef struct {
    Node *head;
    Node *tail;
    int pad;
    int count;
} NodeList;

extern NodeList lbl_803A1214 __attribute__((section(".data")));
extern Node *lbl_803DCBB4;
extern int lbl_803DD4B0;
extern void *MemHeap__Alloc(int size, int align);

int Task__InitializePool(int count) {
    Node *n = MemHeap__Alloc(count * 52, 8);
    int i;
    lbl_803DCBB4 = n;
    for (i = 0; i < count; i++) {
        Node *head = lbl_803A1214.head;
        if (head == 0) {
            lbl_803A1214.tail = n;
            lbl_803A1214.head = n;
            n->next = head;
            n->prev = head;
        } else {
            n->next = head;
            n->prev = 0;
            lbl_803A1214.head->prev = n;
            lbl_803A1214.head = n;
        }
        lbl_803A1214.count++;
        n++;
    }
    lbl_803DD4B0 = 0;
    return 0;
}
