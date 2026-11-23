/* IntrusiveList__Remove @ 0x8017EB20 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct IList { char *head; char *tail; int nextOff; int prevOff; } IList;

void IntrusiveList__Remove(IList *l, char *node) {
    if (l->head == node) {
        l->head = *(char **)(node + l->nextOff);
        if (l->head != 0) {
            *(char **)(l->head + l->prevOff) = 0;
        }
    } else {
        *(char **)(*(char **)(node + l->prevOff) + l->nextOff) = *(char **)(node + l->nextOff);
    }
    if (l->tail == node) {
        l->tail = *(char **)(node + l->prevOff);
        if (l->tail != 0) {
            *(char **)(l->tail + l->nextOff) = 0;
        }
    } else {
        *(char **)(*(char **)(node + l->nextOff) + l->prevOff) = *(char **)(node + l->prevOff);
    }
}
