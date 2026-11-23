/* IntrusiveList__InitializeArray @ 0x8017EA94 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { char *head; char *tail; int nextOffset; int prevOffset; } IntrusiveList;
void IntrusiveList__InitializeArray(IntrusiveList *list, char *item, int count, int stride) {
    char *z = 0;
    int last = count - 1;
    char *n;
    char *nx;
    int i = 0;
    for (; i < count; i++) {
        if (i == 0) {
            list->head = item;
            n = item + stride;
            *(char **)(item + list->prevOffset) = z;
            nx = n;
        } else if (i == last) {
            *(char **)(item + list->prevOffset) = item - stride;
            list->tail = item;
            nx = item + stride;
            *(char **)(item + list->nextOffset) = z;
            item = nx;
            continue;
        } else {
            *(char **)(item + list->prevOffset) = item - stride;
            n = item + stride;
            nx = n;
        }
        *(char **)(item + list->nextOffset) = n;
        item = nx;
    }
}
