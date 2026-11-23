/* AIResetStreamSampleCount @ 0x8017C4F0 (size: 0x18, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef unsigned int u32;
typedef struct { char pad[0x6C00]; volatile u32 control; } AIControl;
void AIResetStreamSampleCount(void) {
    volatile AIControl *ai = (volatile AIControl *)0xCC000000;
    ai->control = (ai->control & ~0x20U) | 0x20U;
}
