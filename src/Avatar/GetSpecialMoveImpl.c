/* Avatar__GetSpecialMoveImpl @ 0x8009B528 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetSpecialMoveImpl @ 0x8009B528 (0x50). ProDG -O2. */
typedef struct {
	int id;
	float primary;
	float secondary;
} SpecialMoveEntry;

extern const SpecialMoveEntry lbl_8033AAEC[];

typedef struct {
	char pad[0x0C];
	int id;
	float secondary;
	float primary;
} AvatarSpecialMove;

int Avatar__GetSpecialMoveImpl(AvatarSpecialMove *self) {
	int i;
	for (i = 0; i < 86; i++) {
		if (lbl_8033AAEC[i].id == self->id) {
			float primary = lbl_8033AAEC[i].primary;
			float secondary = lbl_8033AAEC[i].secondary;
			self->secondary = secondary;
			self->primary = primary;
			return i;
		}
	}
	return 0;
}
