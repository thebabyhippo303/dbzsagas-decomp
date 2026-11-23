/* MissionStats__ClearSummaryEntries @ 0x8012593C (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    void **items;
    int count;
    int capacity;
} SummaryList;

extern SummaryList lbl_803941F4 __attribute__((section(".data")));
extern void MissionStats__DestroySummaryEntry(void *, int);
extern void Mem__Delete(void *);

void MissionStats__ClearSummaryEntries(void) {
    int i;
    void *listener;

    for (i = 0; i < lbl_803941F4.count; i++) {
        listener = *(void **)((char *)lbl_803941F4.items + (i << 2));
        if (listener != 0) {
            MissionStats__DestroySummaryEntry(listener, 3);
        }
    }
    if (lbl_803941F4.items != 0) {
        Mem__Delete(lbl_803941F4.items);
    }
    lbl_803941F4.count = 0;
    lbl_803941F4.capacity = 0;
    lbl_803941F4.items = 0;
}
