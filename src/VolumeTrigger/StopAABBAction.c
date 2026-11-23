/* VolumeTrigger__StopAABBAction @ 0x800FE9B4 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VolumeTrigger__StopAABBAction @ 0x800FE9B4 (0x3C). ProDG -O2. */
extern char lbl_803B1DDC[];
extern void fn_80251510(const char *name, int flags, int unused, void *action, void *object);

void VolumeTrigger__StopAABBAction(void *self, void *action) {
	fn_80251510(lbl_803B1DDC, 0x20020, 0, action, (char *)self + 0x19C);
}
