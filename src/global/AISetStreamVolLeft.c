/* AISetStreamVolLeft @ 0x8017C7C8 (size: 0x1C, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef unsigned int u32;

void AISetStreamVolLeft(u32 vol) {
    volatile u32 *base = (volatile u32 *)0xCC006C00;
    base[1] = (base[1] & ~0xFFu) | (vol & 0xFFu);
}
