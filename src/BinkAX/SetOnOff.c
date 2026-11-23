/* BinkAX__SetOnOff @ 0x802EC2B8 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* WIP 80.6% (29/36, len exact): BinkAX__SetOnOff @ 0x802EC2B8. On/off state machine.
   Skeleton exact (flag test, cur==0 path with 6 stores + SetVoicesAddr, ==1 path
   with SetVoicesState + flag store, return state). Blocked by store scheduler
   permutation: target emits 248,[setup],96,244,264,256,240 but ProDG emits
   setup-first then 96,264,240,248,244,256 regardless of program order (3 tries:
   post-call, 248-first, split-setup; volatile-248 and permute-300x floored).
   Stores need may-alias pinning that costs no extra insns (unknown). */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void BinkAX__SetVoicesAddr(void *, void *, s32);
void BinkAX__SetVoicesState(void *, s32);

s32 BinkAX__SetOnOff(void *obj, s32 flag) {
    if (flag != 0) {
        u32 cur = *(u32 *)((char *)obj + 96);
        if (cur == 0) {
            u32 v = *(u32 *)((char *)obj + 260);
            *(u32 *)((char *)obj + 248) = cur;
            *(u32 *)((char *)obj + 96) = 1;
            *(u32 *)((char *)obj + 244) = 0;
            *(u32 *)((char *)obj + 264) = v;
            *(u32 *)((char *)obj + 256) = 0;
            *(u32 *)((char *)obj + 240) = 0;
            BinkAX__SetVoicesAddr((char *)obj + 120, *(void **)((char *)obj + 112), 1);
        }
    } else if (*(u32 *)((char *)obj + 96) == 1) {
        BinkAX__SetVoicesState((char *)obj + 120, 0);
        *(u32 *)((char *)obj + 96) = flag;
    }
    return *(u32 *)((char *)obj + 96);
}
