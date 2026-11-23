/* HUD__DestroyPiccoloTimer @ 0x8010F454 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__DestroyPiccoloTimer @ 0x8010F454 (0x44). ProDG -O2. */
typedef struct {
	char pad[0x2CC4];
	void *timer;
} PiccoloHud;

extern void PiccoloTimer__Destroy(void *timer, int delete_object);

void HUD__DestroyPiccoloTimer(PiccoloHud *hud) {
	if (hud->timer != 0)
		PiccoloTimer__Destroy(hud->timer, 3);
	hud->timer = 0;
}
