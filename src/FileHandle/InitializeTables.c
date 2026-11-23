/* FileHandle__InitializeTables @ 0x80180090 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    int value;
    int pad;
} Handle;

typedef struct {
    char pad0[0x80];
    int f80;
    char pad1[0x84 - 0x84 + 0];
} Slot;

extern void *MemHeap__Alloc(int, int);
extern int Archive__GetSlotCapacity(void);

extern int gHandleCount;
extern Handle *gHandles;
extern char *gSlots;
extern int gSlotCapacity;
extern int gSlotUsed;

void FileHandle__InitializeTables(int count) {
    Handle *table;
    Handle *p;
    int total;
    char *slots;
    int i;
    int n;
    int capacity;

    gHandleCount = count;
    table = (Handle *)count;
    if (count != 0) {
        table = MemHeap__Alloc(count * 8, 8);
        total = gHandleCount;
        p = table;
        while (total-- != 0) {
            p->value = 0;
            p++;
        }
    }
    gHandles = table;
    capacity = Archive__GetSlotCapacity();
    gSlotCapacity = capacity;
    if (capacity == 0) {
        gSlots = (char *)capacity;
    } else {
        slots = MemHeap__Alloc(capacity * 132, 8);
        n = gSlotCapacity;
        gSlots = slots;
        slots += 128;
        for (i = 0; i < n; i++) {
            *(int *)slots = 0;
            slots += 132;
        }
    }
    gSlotUsed = 0;
}
