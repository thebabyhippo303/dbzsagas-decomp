/* Avatar__DeactivateSwooshStreakImpl @ 0x80095A70 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__DeactivateSwooshStreakImpl @ 0x80095A70 (0x50). ProDG -O2. */
extern void fn_80233A94(unsigned int handle, int deactivate_mode);

void Avatar__DeactivateSwooshStreakImpl(void *avatar) {
	unsigned int *handles = (unsigned int *)((char *)avatar + 0x4F0);
	int remaining = 16;
	do {
		unsigned int handle = *handles++;
		if (handle != 0)
			fn_80233A94(handle, 0);
	} while (--remaining != 0);
}
