/* VM__SetPageReferenced @ 0x802EA834 (size: 0x90, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
/* WIP: VM__SetPageReferenced @ 0x802EA834. Skeleton exact (5 calls, ori/rlwinm
   set/clear bit8, DCStoreRange(pte+1,4)). Blocked by prologue allocator fork:
   ours stmw (30 ins) vs target 3 singles + r0-shuffle around GetPTEGAddress
   (level parks r3->r0->r31 while r3 carries page; 36 ins). Same stmw disease
   as UnmapPage. Do not add spills. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

int OSDisableInterrupts(void);
void OSRestoreInterrupts(int level);
void *VM__GetPTEGAddress(u32 page);
void DCStoreRange(void *addr, u32 nbytes);
void VM__InvalidateTLBEntry(u32 page);

void VM__SetPageReferenced(u32 page, s32 ref) {
    s32 level;
    u32 *pte;

    level = OSDisableInterrupts();
    pte = (u32 *)VM__GetPTEGAddress(page);
    if (ref != 0) {
        pte[1] |= 256;
    } else {
        pte[1] &= ~256;
    }
    DCStoreRange(pte + 1, 4);
    VM__InvalidateTLBEntry(page);
    OSRestoreInterrupts(level);
}
