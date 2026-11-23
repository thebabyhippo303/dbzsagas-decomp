/* AvatarControls__ClearKiChargeHoldState @ 0x800A2F14 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarControls__ClearKiChargeHoldState @ 0x800A2F14 (0x60). ProDG -O2. */
extern void Avatar__SetAnimScriptVarIntImpl(
	void *avatar, char *name, int value, int flag);
extern char lbl_8031F474[];

void AvatarControls__ClearKiChargeHoldState(char *self) {
	char *avatar = *(char **)self;
	char *state = *(char **)(avatar + 132);
	char *vtable = *(char **)(state + 240);

	if (*(short *)(vtable + 10) != 2304) {
		Avatar__SetAnimScriptVarIntImpl(avatar, lbl_8031F474, 0, 1);
		*(int *)(self + 396) = 0;
		*(int *)(self + 408) = 0;
	}
}
