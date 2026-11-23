/* App__DestroyMemoryHeaps @ 0x8017FEC8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void fn_80182FE0(s32 heap);
extern s32 lbl_803729F4 __attribute__((section(".data")));

s32 App__DestroyMemoryHeaps(void) {
    s32 *heaps = &lbl_803729F4;
    s32 heap = heaps[6];
    if (heap != 0) {
        fn_80182FE0(heap);
    }
    heap = heaps[3];
    if (heap != 0) {
        fn_80182FE0(heap);
    }
    return 1;
}
