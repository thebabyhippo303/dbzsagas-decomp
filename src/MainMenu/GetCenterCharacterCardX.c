/* MainMenu__GetCenterCharacterCardX @ 0x80011C28 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MainMenu__GetCenterCharacterCardX @ 0x80011C28 (0x68). ProDG -O2. */
typedef struct CharacterCard {
	char pad[0x164];
	void *component;
	char pad2[0x48];
	struct CharacterCard *next;
} CharacterCard;

typedef struct MainMenu {
	char pad[8868];
	CharacterCard *cards;
} MainMenu;

extern void fn_8026B420(void *component);
extern void fn_8026C514(void *card, float *x, float *y);

float MainMenu__GetCenterCharacterCardX(MainMenu *self) {
	CharacterCard *card;
	int index;
	float x;
	float y;

	card = self->cards;
	index = 6;
	if (card != 0) {
		do {
			fn_8026B420(card->component);
			if (index == 3)
				fn_8026C514(card, &x, &y);
			card = card->next;
			index--;
		} while (card != 0);
	}
	return x;
}
