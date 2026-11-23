/* MenuInput__IsDownHeld @ 0x8004D328 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MenuInput__IsDownHeld @ 0x8004D328 (0x68). ProDG -O2. */
extern int MenuInput__IsEnabled(int index);
extern void *fn_801D6674(void *state, int index);
extern void *lbl_803DCC74;

typedef struct MenuDownPad {
	char pad[0x14];
	int held;
} MenuDownPad;

int MenuInput__IsDownHeld(int index) {
	MenuDownPad *pad;

	if (MenuInput__IsEnabled(index) == 0) {
		return 0;
	}
	if (index < 0) {
		index = 0;
	}
	pad = fn_801D6674(lbl_803DCC74, index);
	if (pad == 0) {
		return 0;
	}
	if (pad->held != 0) {
		return 1;
	}
	return 0;
}
