/* DebugDraw__ClearTimedItems @ 0x80186680 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct TimedItem TimedItem;
struct TimedItem {
    char pad[0x3C];
    TimedItem *next;
    TimedItem *prev;
};

typedef struct {
    TimedItem *head;
    TimedItem *tail;
    s32 flag;
    s32 count;
} TimedList;

void Mem__Delete(void *);
extern TimedList lbl_803A2D84 __attribute__((section(".data")));

void DebugDraw__ClearTimedItems(void) {
    TimedList *list = &lbl_803A2D84;
    TimedItem *item;
    s32 sameTail;
    if (list->head != 0) {
        do {
            item = list->head;
            sameTail = list->tail == item;
            list->head = item->next;
            if (sameTail != 0) {
                list->tail = item->prev;
            } else {
                item->next->prev = item->prev;
            }
            if (list->flag != 0) {
                Mem__Delete(item);
            } else {
                item->prev = (TimedItem *)0;
                item->next = (TimedItem *)0;
            }
            list->count = list->count - 1;
        } while (list->head != 0);
    }
}
