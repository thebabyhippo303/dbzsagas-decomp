/* PersistentData__SetPlayerHealth @ 0x8012805C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__SetPlayerHealth @ 0x8012805C (0x98). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_80327760[];
extern char lbl_80327770[];
extern char lbl_803277A4[];
extern char lbl_803277B8[];
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

void PersistentData__SetPlayerHealth(void *self, int player, int health, int maxHealth) {
	if (player == 0)
		goto player0;
	if (player == 1)
		goto player1;
	goto done;
player0:
	PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_80327760, health);
	PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_803277A4, maxHealth);
	goto done;
player1:
	PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_80327770, health);
	PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_803277B8, maxHealth);
done:
	return;
}
