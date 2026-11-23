/* VolumeTrigger__StartAABBAction @ 0x800FE968 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VolumeTrigger__StartAABBAction @ 0x800FE968 (0x4C). ProDG -O2. */
extern char lbl_803B1DDC[];
extern void fn_80251510(void *table, int flags, int zero, void *action, void *object);

void VolumeTrigger__StartAABBAction(char *self, void *action) {
    if (*(int *)(self + 0x420) == 0)
        fn_80251510(lbl_803B1DDC, 0x2001F, 0, action, self + 0x19C);
}
