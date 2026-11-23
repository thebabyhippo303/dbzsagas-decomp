/* App__GetMainHeapStats @ 0x8017FFA0 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

extern void *lbl_80372A00 __attribute__((section(".data")));
extern void MemHeap__GetStats(void *heap, s32 a, s32 b, s32 c, s32 d);

void App__GetMainHeapStats(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    MemHeap__GetStats(lbl_80372A00, arg0, arg1, arg2, arg3);
}
