/* App__HasMemoryHeaps @ 0x8017FF18 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    int pad[3];
    int heapA;
    int mid[2];
    int heapB;
} AppHeaps;

extern int fn_80182FE8(int heap);
extern AppHeaps lbl_803729F4 __attribute__((section(".data")));

int App__HasMemoryHeaps(void) {
    int ok;
    int heapB;
    AppHeaps *heaps;

    heaps = &lbl_803729F4;
    ok = 1;
    if (heaps->heapA != 0) {
        ok = fn_80182FE8(heaps->heapA);
    }
    heapB = heaps->heapB;
    if ((heapB != 0) && (heapB != heaps->heapA)) {
        int second;
        int left;
        int right;

        second = fn_80182FE8(heapB);
        left = 1;
        if (ok == 0) {
            left = 0;
        }
        right = 1;
        if (second == 0) {
            right = 0;
        }
        ok = left & right;
    }
    return ok;
}
