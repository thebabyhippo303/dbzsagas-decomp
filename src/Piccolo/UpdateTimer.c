/* Piccolo__UpdateTimer @ 0x80041CB8 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Piccolo__UpdateTimer @ 0x80041CB8 (0x40). ProDG -O2. */
extern void *lbl_803DC654;
extern float HUD__UpdatePiccoloTimer(void *hud);
extern void Script__PushFloat(void *script, void *context, float value);

void Piccolo__UpdateTimer(void *script, void *context) {
    float ratio = HUD__UpdatePiccoloTimer(lbl_803DC654);
    Script__PushFloat(script, context, ratio);
}
