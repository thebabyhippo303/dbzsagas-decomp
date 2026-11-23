/* TriggerBox__CanTriggerActor @ 0x800FDD00 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct { s32 value; s32 mask; } Filter;
extern Filter lbl_80394584 __attribute__((section(".data")));
s32 TriggerBox__GetActivationMode(void *);

s32 TriggerBox__CanTriggerActor(void *arg0, s32 *arg1) {
    s32 r;
    if (*(s32 *)((char *)arg0 + 0x53C) != 0 && (*arg1 & lbl_80394584.mask) == lbl_80394584.value) {
        r = 1;
        if (TriggerBox__GetActivationMode(arg0) != 1) {
            return r;
        }
    }
    return 0;
}
