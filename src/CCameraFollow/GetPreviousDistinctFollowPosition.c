/* CCameraFollow__GetPreviousDistinctFollowPosition @ 0x800C1A3C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Camera__GetPreviousDistinctFollowPosition @ 0x800C1A3C (0x74). ProDG -O2. */
typedef struct {
	int flag;
	char data[16];
} FollowSlot;

typedef struct {
	char pad[424];
	int current;
} FollowCam;

extern FollowSlot lbl_803929B4[] __attribute__((section(".data")));

void *Camera__GetPreviousDistinctFollowPosition(FollowCam *self, int *current, int *out) {
	int prev;

	prev = *current - 1;
	*out = prev;
	if (prev < 0) {
		*out = 39;
	}
	if (*current == self->current || lbl_803929B4[*out].flag == 0) {
		*out = -1;
		return lbl_803929B4[*current].data;
	}
	return lbl_803929B4[*out].data;
}
