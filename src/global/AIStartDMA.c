/* AIStartDMA @ 0x8017C4C8 (size: 0x18, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef int s32;
#define FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))
void AIStartDMA(void) {
    volatile unsigned short *p = (volatile unsigned short *)(s32)0xCC005000;
    p[27] = (unsigned short)(p[27] | 0x8000);
}
