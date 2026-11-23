/* MenuInput__UpdateButtonsFromPadStatus @ 0x80007E38 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MenuInput__UpdateButtonsFromPadStatus @ 0x80007E38. ProDG -O2. */
typedef struct MenuPadButtons {
	unsigned short buttons;
	char pad[4];
	unsigned char analog6;
	unsigned char analog7;
} MenuPadButtons;

typedef struct MenuButtonState {
	char pad[0x48];
	int analog6Down;
	char pad4C[4];
	int analog7Down;
	char pad54[4];
	int lowButtons;
	char pad5C[4];
	int bit4;
	char pad64[0x80 - 0x64];
	int midButtons;
} MenuButtonState;

void MenuInput__UpdateButtonsFromPadStatus(void *self, MenuPadButtons *pad) {
	MenuButtonState *state = (MenuButtonState *)((char *)self + 4);

	state->bit4 = (pad->buttons >> 4) & 1;
	state->lowButtons = (pad->buttons & 3) != 0;
	state->midButtons = (pad->buttons & 0xC) != 0;
	if ((pad->analog6 & 0x80) != 0) {
		state->analog6Down = 1;
	}
	if ((pad->analog7 & 0x80) != 0) {
		state->analog7Down = 1;
	}
}
