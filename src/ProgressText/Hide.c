/* ProgressText__Hide @ 0x8011F8F8 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ProgressText__Hide @ 0x8011F8F8 (0x38). ProDG -O2. */
typedef void (*ProgressTextHideFn)(void *self);
extern void *lbl_80348350;

void ProgressText__Hide(void) {
	char *self = (char *)lbl_80348350;
	char *vtable = *(char **)(self + 412);
	int adjustment = *(short *)(vtable + 56);
	ProgressTextHideFn hide = *(ProgressTextHideFn *)(vtable + 60);
	hide(self + adjustment);
}
