/* VM__UnmapPage @ 0x802EA730 (size: 0x8C, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
/* WIP: VM__UnmapPage @ 0x802EA730. Body call sequence is EXACT (7 calls); only the
   prologue differs: ours uses stmw r28 (24B frame, 31 ins) vs target 3 singles
   stw r31/r30/r29 (32B frame, 35 ins). Need saved set without r28 (range>=4
   triggers stmw). Tried: register pte, decl-assign split, int-typed OS decls,
   void*-pte, swapped s32/u32 types - prologue invariant. Do not add spills. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

int OSDisableInterrupts(void);
void OSRestoreInterrupts(int level);
void *VM__GetPTEGAddress(u32 page);
void DCStoreRange(void *addr, u32 nbytes);
void VM__InvalidateTLBEntry(u32 page);
void VM__SetFrameOwner(s32 frame, s32 owner);
void VM__SetPageLocked(s32 idx, s32 lock);

void VM__UnmapPage(u32 page, s32 frame) {
    s32 level;
    u32 *pte;

    level = OSDisableInterrupts();
    pte = (u32 *)VM__GetPTEGAddress(page);
    pte[0] = 0;
    pte[1] = 0;
    DCStoreRange(pte, 8);
    VM__InvalidateTLBEntry(page);
    VM__SetFrameOwner(frame, 0);
    VM__SetPageLocked(frame, 0);
    OSRestoreInterrupts(level);
}
