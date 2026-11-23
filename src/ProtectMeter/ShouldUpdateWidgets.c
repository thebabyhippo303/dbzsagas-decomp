/* ProtectMeter__ShouldUpdateWidgets @ 0x801200C8 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ProtectMeter__ShouldSkipUpdate @ 0x801200C8 (0x4C). ProDG -O2. */
typedef int (*ProtectMeterSkipFn)(void *self);

extern int lbl_803DC6B4;

int ProtectMeter__ShouldSkipUpdate(void *arg) {
	char *self;
	char *vtable;
	int adjustment;
	ProtectMeterSkipFn fn;

	if (lbl_803DC6B4 != 0) {
		self = *(char **)((char *)arg + 12);
		vtable = *(char **)(self + 412);
		adjustment = *(short *)(vtable + 640);
		fn = *(ProtectMeterSkipFn *)(vtable + 644);
		return fn(self + adjustment);
	}
	return 1;
}
