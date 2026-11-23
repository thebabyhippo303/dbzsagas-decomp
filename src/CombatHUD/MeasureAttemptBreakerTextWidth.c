/* CombatHUD__MeasureAttemptBreakerTextWidth @ 0x80110B94 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CombatHUD__MeasureAttemptBreakerTextWidth @ 0x80110B94 (0x88). ProDG -O2. */
extern unsigned int strlen(const char *s);
extern float lbl_80326548 __attribute__((section(".data")));
extern float lbl_8032654C __attribute__((section(".data")));
extern float lbl_80326550 __attribute__((section(".data")));

float CombatHUD__MeasureAttemptBreakerTextWidth(char *hud) {
    float width = lbl_80326548;
    unsigned int i;
    char *text;

    for (i = 0; ; i++) {
        text = hud + 11500;
        if (!(i < strlen(text))) {
            break;
        }
        if (text[i] != ' ') {
            width = width + lbl_8032654C;
        } else {
            width = width + lbl_80326550;
        }
    }
    return width - lbl_8032654C;
}
