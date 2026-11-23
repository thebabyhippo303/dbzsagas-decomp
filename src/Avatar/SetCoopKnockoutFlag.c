/* Avatar__SetCoopKnockoutFlag @ 0x8008DFA8 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetCoopKnockoutFlag @ 0x8008DFA8. ProDG -O2. */
typedef struct CoopLevel {
	char pad[4];
	int id;
} CoopLevel;

typedef struct CoopGame {
	char pad[568];
	CoopLevel *level;
} CoopGame;

typedef struct CoopKnockAvatar {
	char pad[1648];
	int knockoutFlag;
} CoopKnockAvatar;

extern CoopGame *lbl_803DC3C0;
extern int Game__GetConfiguredPlayerCount(void *game);

void Avatar__SetCoopKnockoutFlag(CoopKnockAvatar *avatar, int flag) {
	int id = lbl_803DC3C0->level->id;
	int allowed = id == 4 || id == 7 || id == 10 || id == 11 || id == 16 || id == 21;

	if (allowed && Game__GetConfiguredPlayerCount(lbl_803DC3C0) == 2) {
		avatar->knockoutFlag = flag;
	} else {
		avatar->knockoutFlag = 0;
	}
}
