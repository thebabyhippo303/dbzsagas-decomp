/* CCameraFollow__GetPreviousFollowPosition @ 0x800C19E8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Camera__GetPreviousFollowPosition @ 0x800C19E8 (0x54). ProDG -O2. */
typedef struct {
	int flag;
	char data[16];
} FollowSlot;

typedef struct {
	char pad[424];
	int current;
} FollowCam;

extern FollowSlot lbl_803929B4[] __attribute__((section(".data")));

void *Camera__GetPreviousFollowPosition(FollowCam *self, int *out) {
	int prev;

	prev = self->current - 1;
	*out = prev;
	if (prev < 0) {
		*out = 39;
	}
	if (lbl_803929B4[*out].flag == 0) {
		*out = -1;
		return lbl_803929B4[0].data;
	}
	return lbl_803929B4[*out].data;
}
