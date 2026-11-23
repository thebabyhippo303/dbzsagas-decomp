/* VolumeTrigger__StartPathAction @ 0x800FEA58 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VolumeTrigger__StartPathAction @ 0x800FEA58 (0x4C). ProDG -O2. */
extern char lbl_803B1DDC[];
extern void fn_80251510(void *table, int flags, void *object, void *action, int unused);

void VolumeTrigger__StartPathAction(char *self, void *action) {
    if (*(int *)(self + 0x420) == 0)
        fn_80251510(lbl_803B1DDC, 0x8001F, self + 0x484, action, 0);
}
