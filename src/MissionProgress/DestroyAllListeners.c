/* MissionProgress__DestroyAllListeners @ 0x80119C64 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    void **items;
    int count;
    int capacity;
} ListenerList;

extern ListenerList lbl_80394194 __attribute__((section(".data")));
extern void MissionProgress__DestroyListener(void *, int);
extern void Mem__Delete(void *);

void MissionProgress__DestroyAllListeners(void) {
    int i;
    void *listener;

    for (i = 0; i < lbl_80394194.count; i++) {
        listener = *(void **)((char *)lbl_80394194.items + (i << 2));
        if (listener != 0) {
            MissionProgress__DestroyListener(listener, 3);
        }
    }
    if (lbl_80394194.items != 0) {
        Mem__Delete(lbl_80394194.items);
    }
    lbl_80394194.count = 0;
    lbl_80394194.capacity = 0;
    lbl_80394194.items = 0;
}
