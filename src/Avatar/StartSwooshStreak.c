/* Avatar__StartSwooshStreak @ 0x800331D4 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__StartSwooshStreak @ 0x800331D4. ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Avatar__StartSwooshStreakImpl(void *avatar, void *streak);
extern char lbl_8036D9DC[];
extern char lbl_8036D928[];

void Avatar__StartSwooshStreak(void *script, void *context) {
	void *avatar = (void *)Script__PopInt(script, context);
	int mode = Script__PopInt(script, context);

	switch (mode) {
	case 0:
		Avatar__StartSwooshStreakImpl(avatar, lbl_8036D9DC);
		break;
	case 1:
		Avatar__StartSwooshStreakImpl(avatar, lbl_8036D928);
		break;
	case 2:
		Avatar__StartSwooshStreakImpl(avatar, lbl_8036D928);
		break;
	}
}
