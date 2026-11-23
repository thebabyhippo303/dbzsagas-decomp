/* VolumeTrigger__StopPathAction @ 0x800FEAA4 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: VolumeTrigger__StopPathAction @ 0x800FEAA4 (0x3C). ProDG -O2. */
extern char lbl_803B1DDC[];
extern void fn_80251510(const char *name, int flags, void *object, void *action, int unused);

void VolumeTrigger__StopPathAction(void *self, void *action) {
	fn_80251510(lbl_803B1DDC, 0x80020, (char *)self + 0x484, action, 0);
}
