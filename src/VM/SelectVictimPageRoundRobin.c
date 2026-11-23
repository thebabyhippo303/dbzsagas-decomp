/* VM__SelectVictimPageRoundRobin @ 0x802EA258 (size: 0x6C, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
/* WIP: VM__SelectVictimPageRoundRobin @ 0x802EA258. Round-robin victim select.
   Skeleton: do { old=counter; counter=old+1; if (counter>=count){other=0;
   counter=0;} } while (IsPageLocked(old)); return old.
   QUIRKS: (1) small-data addrs resolve +32 high in our objects: compensate
   label names by -32 (counter lbl_803DD8A8 for game -27288; other lbl_803DD0A0
   for -29344). (2) stmw disease again (ours stmw 24ins vs target 2 singles
   27ins) + target loads counter to scratch r3 then mr r30 (we load direct to
   saved). Do not "fix" names (they're compensation, verified by encoding). */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

s32 VM__GetMainMemPageCount(void);
s32 VM__IsPageLocked(u32);
extern s32 lbl_803DD0A0 __attribute__((section(".sdata")));
extern u32 lbl_803DD8A8 __attribute__((section(".sdata")));

u32 VM__SelectVictimPageRoundRobin(void) {
    u32 old;

    do {
        old = lbl_803DD8A8;
        lbl_803DD8A8 += 1;
        if (lbl_803DD8A8 >= VM__GetMainMemPageCount()) {
            lbl_803DD0A0 = 0;
            lbl_803DD8A8 = 0;
        }
    } while (VM__IsPageLocked(old) != 0);
    return old;
}
